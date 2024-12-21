// SPDX-License-Identifier: GPL-2.0-only
/*
 * cfg80211 debugfs
 *
 * Copyright 2009	Luis R. Rodriguez <lrodriguez@atheros.com>
 * Copyright 2007	Johannes Berg <johannes@sipsolutions.net>
 * Copyright (C) 2023 Intel Corporation
 */

#include <linux/slab.h>
#include "core.h"
#include "debugfs.h"
#include <linux/drv_dbg.h>

#define DEBUGFS_READONLY_FILE(name, buflen, fmt, value...)		\
static ssize_t name## _read(struct file *file, char __user *userbuf,	\
			    size_t count, loff_t *ppos)			\
{									\
	struct wiphy *wiphy = file->private_data;			\
	char buf[buflen];						\
	int res;							\
									\
	res = scnprintf(buf, buflen, fmt "\n", ##value);		\
	return simple_read_from_buffer(userbuf, count, ppos, buf, res);	\
}									\
									\
static const struct file_operations name## _ops = {			\
	.read = name## _read,						\
	.open = simple_open,						\
	.llseek = generic_file_llseek,					\
}

DEBUGFS_READONLY_FILE(rts_threshold, 20, "%d",
		      wiphy->rts_threshold);
DEBUGFS_READONLY_FILE(fragmentation_threshold, 20, "%d",
		      wiphy->frag_threshold);
DEBUGFS_READONLY_FILE(short_retry_limit, 20, "%d",
		      wiphy->retry_short);
DEBUGFS_READONLY_FILE(long_retry_limit, 20, "%d",
		      wiphy->retry_long);

static int ht_print_chan(struct ieee80211_channel *chan,
			 char *buf, int buf_size, int offset)
{
	if (WARN_ON(offset > buf_size))
		return 0;

	if (chan->flags & IEEE80211_CHAN_DISABLED)
		return scnprintf(buf + offset,
				 buf_size - offset,
				 "%d Disabled\n",
				 chan->center_freq);

	return scnprintf(buf + offset,
			 buf_size - offset,
			 "%d HT40 %c%c\n",
			 chan->center_freq,
			 (chan->flags & IEEE80211_CHAN_NO_HT40MINUS) ?
				' ' : '-',
			 (chan->flags & IEEE80211_CHAN_NO_HT40PLUS) ?
				' ' : '+');
}

static ssize_t ht40allow_map_read(struct file *file,
				  char __user *user_buf,
				  size_t count, loff_t *ppos)
{
	struct wiphy *wiphy = file->private_data;
	char *buf;
	unsigned int offset = 0, buf_size = PAGE_SIZE, i;
	enum nl80211_band band;
	struct ieee80211_supported_band *sband;
	ssize_t r;

	buf = kzalloc(buf_size, GFP_KERNEL);
	if (!buf)
		return -ENOMEM;

	for (band = 0; band < NUM_NL80211_BANDS; band++) {
		sband = wiphy->bands[band];
		if (!sband)
			continue;
		for (i = 0; i < sband->n_channels; i++)
			offset += ht_print_chan(&sband->channels[i],
						buf, buf_size, offset);
	}

	r = simple_read_from_buffer(user_buf, count, ppos, buf, offset);

	kfree(buf);

	return r;
}

static const struct file_operations ht40allow_map_ops = {
	.read = ht40allow_map_read,
	.open = simple_open,
	.llseek = default_llseek,
};

#define DEBUGFS_ADD(name)						\
	debugfs_create_file(#name, 0444, phyd, &rdev->wiphy, &name## _ops)

void cfg80211_debugfs_rdev_add(struct cfg80211_registered_device *rdev)
{
	struct dentry *phyd = rdev->wiphy.debugfsdir;

	DEBUGFS_ADD(rts_threshold);
	DEBUGFS_ADD(fragmentation_threshold);
	DEBUGFS_ADD(short_retry_limit);
	DEBUGFS_ADD(long_retry_limit);
	DEBUGFS_ADD(ht40allow_map);
}

struct debugfs_read_work {
	struct wiphy_work work;
	ssize_t (*handler)(struct wiphy *wiphy,
			   struct file *file,
			   char *buf,
			   size_t count,
			   void *data);
	struct wiphy *wiphy;
	struct file *file;
	char *buf;
	size_t bufsize;
	void *data;
	ssize_t ret;
	struct completion completion;
};

static void wiphy_locked_debugfs_read_work(struct wiphy *wiphy,
					   struct wiphy_work *work)
{
	struct debugfs_read_work *w = container_of(work, typeof(*w), work);

	w->ret = w->handler(w->wiphy, w->file, w->buf, w->bufsize, w->data);
	complete(&w->completion);
}

static void wiphy_locked_debugfs_read_cancel(struct dentry *dentry,
					     void *data)
{
	struct debugfs_read_work *w = data;

	wiphy_work_cancel_dbg(w->wiphy, &w->work);
	complete(&w->completion);
}

ssize_t wiphy_locked_debugfs_read(struct wiphy *wiphy, struct file *file,
				  char *buf, size_t bufsize,
				  char __user *userbuf, size_t count,
				  loff_t *ppos,
				  ssize_t (*handler)(struct wiphy *wiphy,
						     struct file *file,
						     char *buf,
						     size_t bufsize,
						     void *data),
				  void *data)
{
	struct debugfs_read_work work = {
		.handler = handler,
		.wiphy = wiphy,
		.file = file,
		.buf = buf,
		.bufsize = bufsize,
		.data = data,
		.ret = -ENODEV,
		.completion = COMPLETION_INITIALIZER_ONSTACK(work.completion),
	};
	struct debugfs_cancellation cancellation = {
		.cancel = wiphy_locked_debugfs_read_cancel,
		.cancel_data = &work,
	};

	/* don't leak stack data or whatever */
	memset(buf, 0, bufsize);

	wiphy_work_init_dbg(&work.work, wiphy_locked_debugfs_read_work);
	wiphy_work_queue_dbg(wiphy, &work.work);

	debugfs_enter_cancellation(file, &cancellation);
	wait_for_completion_dbg(&work.completion);
	debugfs_leave_cancellation(file, &cancellation);

	if (work.ret < 0)
		return work.ret;

	if (WARN_ON(work.ret > bufsize))
		return -EINVAL;

	return simple_read_from_buffer(userbuf, count, ppos, buf, work.ret);
}
EXPORT_SYMBOL_GPL(wiphy_locked_debugfs_read);

struct debugfs_write_work {
	struct wiphy_work work;
	ssize_t (*handler)(struct wiphy *wiphy,
			   struct file *file,
			   char *buf,
			   size_t count,
			   void *data);
	struct wiphy *wiphy;
	struct file *file;
	char *buf;
	size_t count;
	void *data;
	ssize_t ret;
	struct completion completion;
};

static void wiphy_locked_debugfs_write_work(struct wiphy *wiphy,
					    struct wiphy_work *work)
{
	struct debugfs_write_work *w = container_of(work, typeof(*w), work);

	w->ret = w->handler(w->wiphy, w->file, w->buf, w->count, w->data);
	complete(&w->completion);
}

static void wiphy_locked_debugfs_write_cancel(struct dentry *dentry,
					      void *data)
{
	struct debugfs_write_work *w = data;

	wiphy_work_cancel_dbg(w->wiphy, &w->work);
	complete(&w->completion);
}

ssize_t wiphy_locked_debugfs_write(struct wiphy *wiphy,
				   struct file *file, char *buf, size_t bufsize,
				   const char __user *userbuf, size_t count,
				   ssize_t (*handler)(struct wiphy *wiphy,
						      struct file *file,
						      char *buf,
						      size_t count,
						      void *data),
				   void *data)
{
	struct debugfs_write_work work = {
		.handler = handler,
		.wiphy = wiphy,
		.file = file,
		.buf = buf,
		.count = count,
		.data = data,
		.ret = -ENODEV,
		.completion = COMPLETION_INITIALIZER_ONSTACK(work.completion),
	};
	struct debugfs_cancellation cancellation = {
		.cancel = wiphy_locked_debugfs_write_cancel,
		.cancel_data = &work,
	};

	/* mostly used for strings so enforce NUL-termination for safety */
	if (count >= bufsize)
		return -EINVAL;

	memset(buf, 0, bufsize);

	if (copy_from_user(buf, userbuf, count))
		return -EFAULT;

	wiphy_work_init_dbg(&work.work, wiphy_locked_debugfs_write_work);
	wiphy_work_queue_dbg(wiphy, &work.work);

	debugfs_enter_cancellation(file, &cancellation);
	wait_for_completion_dbg(&work.completion);
	debugfs_leave_cancellation(file, &cancellation);

	return work.ret;
}
EXPORT_SYMBOL_GPL(wiphy_locked_debugfs_write);
