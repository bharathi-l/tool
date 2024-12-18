#ifndef DRV_DBG_H
#define DRV_DBG_H

#include <linux/skbuff.h>
#include <linux/module.h>
#include <linux/printk.h>
#include <linux/thread_info.h>
#include <linux/ieee80211.h> 
#include <linux/if_ether.h>

#define wiphy_work_queue_dbg(p1, p2)                           \
{                                                               \
    pr_info("[MODULE -> %s], [THREAD -> %s] [ACTIVATED_WORK_QUEUE %s, %s] [%s] [%d]\n",  \
            THIS_MODULE->name, get_thread_name(), #p1, #p2, __func__, __LINE__);    \
    wiphy_work_queue(p1, p2);                                   \
}

#define tasklet_disable_dbg(p1)                           \
{                                                               \
    pr_info("[MODULE -> %s], [THREAD -> %s] [TASKLET_DISABLED %s] [%s] [%d]\n",  \
            THIS_MODULE->name, get_thread_name(), #p1, __func__, __LINE__);    \
    tasklet_disable(p1);                                   \
}

#define tasklet_enable_dbg(p1)                           \
{                                                               \
    pr_info("[MODULE -> %s], [THREAD -> %s] [TASKLET_ENABLED %s] [%s] [%d]\n",  \
            THIS_MODULE->name, get_thread_name(), #p1, __func__, __LINE__);    \
    tasklet_enable(p1);                                   \
}

#define tasklet_kill_dbg(p1)                           \
{                                                               \
    pr_info("[MODULE -> %s], [THREAD -> %s] [TASKLET_KILL %s] [%s] [%d]\n",  \
            THIS_MODULE->name, get_thread_name(), #p1, __func__, __LINE__);    \
    tasklet_kill(p1);                                   \
}

#define tasklet_schedule_dbg(p1)                           \
{                                                               \
    pr_info("[MODULE -> %s], [THREAD -> %s] [ACTIVATED_TASKLET_SCHEDULE %s] [%s] [%d]\n",  \
            THIS_MODULE->name, get_thread_name(), #p1, __func__, __LINE__);    \
    tasklet_schedule(p1);                                   \
}

#define tasklet_setup_dbg(p1, p2)                           \
{                                                               \
    pr_info("[MODULE -> %s], [THREAD -> %s] [TASKLET_SETUP %s, %s] [%s] [%d]\n",  \
            THIS_MODULE->name, get_thread_name(), #p1, #p2 __func__, __LINE__);    \
    tasklet_setup(p1, p2);                                   \
}

#define alloc_ordered_workqueue_dbg(fmt, ...)                                 \
({                                                                            \
    pr_info("[MODULE -> %s], [THREAD -> %s] [ALLOC_ORDERED_WORK_QUEUE %s] [%s] [%d] " fmt, \
            THIS_MODULE->name, get_thread_name(), #fmt, __func__, __LINE__, __VA_ARGS__); \
    alloc_ordered_workqueue(__VA_ARGS__);                                      \
})

#define alloc_workqueue_dbg(p1, p2, p3)                       \
{                                                                     \
    pr_info("[MODULE -> %s], [THREAD -> %s] [ALLOC_WORK_QUEUE %s, %s, %s] [%s] [%d]\n", \
            THIS_MODULE->name, get_thread_name(), #p1, #p2, #p3, __func__, __LINE__); \
    trans_pcie->rba.alloc_wq = alloc_workqueue(p1, p2, p3);    \
}

#define wiphy_delayed_work_cancel_dbg(p1, p2)                           \
{                                                               \
    pr_info("[MODULE -> %s], [THREAD -> %s] [DELAYED_WORK_QUEUE_CANCEL %s, %s] [%s] [%d]\n",  \
            THIS_MODULE->name, get_thread_name(), #p1, #p2, __func__, __LINE__);    \
    wiphy_delayed_work_cancel(p1, p2);                                   \
}

#define wiphy_work_cancel_dbg(p1, p2)                           \
{                                                               \
    pr_info("[MODULE -> %s], [THREAD -> %s] [WORK_QUEUE_CANCEL %s, %s] [%s] [%d]\n",  \
            THIS_MODULE->name, get_thread_name(), #p1, #p2, __func__, __LINE__);    \
    wiphy_work_cancel(p1, p2);                                   \
}

#define wiphy_delayed_work_flush_dbg(p1, p2)                           \
{                                                               \
    pr_info("[MODULE -> %s], [THREAD -> %s] [DELAYED_WORK_QUEUE_FLUSH %s, %s] [%s] [%d]\n",  \
            THIS_MODULE->name, get_thread_name(), #p1, #p2, __func__, __LINE__);    \
    wiphy_delayed_work_flush(p1, p2);                                   \
}

#define wiphy_delayed_work_init_dbg(p1, p2)                           \
{                                                               \
    pr_info("[MODULE -> %s], [THREAD -> %s] [DELAYED_WORK_QUEUE_INIT %s, %s] [%s] [%d]\n",  \
            THIS_MODULE->name, get_thread_name(), #p1, #p2, __func__, __LINE__);    \
    wiphy_delayed_work_init(p1, p2);                                   \
}

#define wiphy_delayed_work_queue_dbg(p1, p2, p3)                       \
{                                                                     \
    pr_info("[MODULE -> %s], [THREAD -> %s] [DELAYED_WORK_QUEUE %s, %s, %s] [%s] [%d]\n", \
            THIS_MODULE->name, get_thread_name(), #p1, #p2, #p3, __func__, __LINE__); \
    wiphy_delayed_work_queue(p1, p2, p3);    \
}

#define wiphy_work_flush_dbg(p1, p2)                           \
{                                                               \
    pr_info("[MODULE -> %s], [THREAD -> %s] [WORK_QUEUE_FLUSH %s, %s] [%s] [%d]\n",  \
            THIS_MODULE->name, get_thread_name(), #p1, #p2, __func__, __LINE__);    \
    wiphy_work_flush(p1, p2);                                   \
}

#define wiphy_work_init_dbg(p1, p2)                           \
{                                                               \
    pr_info("[MODULE -> %s], [THREAD -> %s] [WORK_QUEUE_INIT %s, %s] [%s] [%d]\n",  \
            THIS_MODULE->name, get_thread_name(), #p1, #p2, __func__, __LINE__);    \
    wiphy_work_init(p1, p2);                                   \
}

#define schedule_work_dbg(p1)                           \
{                                                               \
    pr_info("[MODULE -> %s], [THREAD -> %s] [ACTIVATED_SCHEDULE_WORK %s] [%s] [%d]\n",  \
            THIS_MODULE->name, get_thread_name(), #p1, __func__, __LINE__);    \
    schedule_work(p1);                                   \
}

#define schedule_delayed_work_dbg(p1, p2)                           \
{                                                               \
    pr_info("[MODULE -> %s], [THREAD -> %s] [ACTIVATED_SCHEDULE_DELAYED_WORK %s, %s] [%s] [%d]\n",  \
            THIS_MODULE->name, get_thread_name(), #p1, #p2, __func__, __LINE__);    \
    schedule_delayed_work(p1, p2);                                   \
}

#define queue_work_dbg(p1, p2)                           \
{                                                               \
    pr_info("[MODULE -> %s], [THREAD -> %s] [WORK_QUEUE_INIT %s, %s] [%s] [%d]\n",  \
            THIS_MODULE->name, get_thread_name(), #p1, #p2, __func__, __LINE__);    \
    queue_work(p1, p2);                                   \
}

#define queue_delayed_work_dbg(p1, p2, p3)                       \
{                                                                     \
    pr_info("[MODULE -> %s], [THREAD -> %s] [QUEUE_DELAYED_WORK %s, %s, %s] [%s] [%d]\n", \
            THIS_MODULE->name, get_thread_name(), #p1, #p2, #p3, __func__, __LINE__); \
    queue_delayed_work(p1, p2, p3);    \
}

#define destroy_workqueue_dbg(p1)                           \
{                                                               \
    pr_info("[MODULE -> %s], [THREAD -> %s] [DESTROY_WORK %s] [%s] [%d]\n",  \
            THIS_MODULE->name, get_thread_name(), #p1, __func__, __LINE__);    \
    destroy_workqueue(p1);                                   \
}

#define mod_delayed_work_dbg(p1, p2, p3)                       \
{                                                                     \
    pr_info("[MODULE -> %s], [THREAD -> %s] [MOD_DELAYED_WORK %s, %s, %s] [%s] [%d]\n", \
            THIS_MODULE->name, get_thread_name(), #p1, #p2, #p3, __func__, __LINE__); \
    mod_delayed_work(p1, p2, p3);    \
}

#define cancel_delayed_work_dbg(p1)                           \
{                                                               \
    pr_info("[MODULE -> %s], [THREAD -> %s] [CANCEL_DELAYED_WORK %s] [%s] [%d]\n",  \
            THIS_MODULE->name, get_thread_name(), #p1, __func__, __LINE__);    \
    cancel_delayed_work(p1);                                   \
}

#define cancel_work_sync_dbg(p1)                           \
{                                                               \
    pr_info("[MODULE -> %s], [THREAD -> %s] [CANCEL_WORK_SYNC %s] [%s] [%d]\n",  \
            THIS_MODULE->name, get_thread_name(), #p1, __func__, __LINE__);    \
    cancel_work_sync(p1);                                   \
}

#define flush_delayed_work_dbg(p1)                           \
{                                                               \
    pr_info("[MODULE -> %s], [THREAD -> %s] [FLUSH_DELAYED_WORK %s] [%s] [%d]\n",  \
            THIS_MODULE->name, get_thread_name(), #p1, __func__, __LINE__);    \
    flush_delayed_work(p1);                                   \
}

#define flush_work_dbg(p1)                           \
{                                                               \
    pr_info("[MODULE -> %s], [THREAD -> %s] [FLUSH_WORK %s] [%s] [%d]\n",  \
            THIS_MODULE->name, get_thread_name(), #p1, __func__, __LINE__);    \
    flush_work(p1);                                   \
}

#define flush_workqueue_dbg(p1)                           \
{                                                               \
    pr_info("[MODULE -> %s], [THREAD -> %s] [FLUSH_WORKQUEUE %s] [%s] [%d]\n",  \
            THIS_MODULE->name, get_thread_name(), #p1, __func__, __LINE__);    \
    flush_workqueue(p1);                                   \
}

#define add_timer_dbg(p1)                           \
{                                                               \
    pr_info("[MODULE -> %s], [THREAD -> %s] [ADD_TIMER %s] [%s] [%d]\n",  \
            THIS_MODULE->name, get_thread_name(), #p1, __func__, __LINE__);    \
    add_timer(p1);                                   \
}

#define del_timer_dbg(p1)                           \
{                                                               \
    pr_info("[MODULE -> %s], [THREAD -> %s] [DEL_TIMER %s] [%s] [%d]\n",  \
            THIS_MODULE->name, get_thread_name(), #p1, __func__, __LINE__);    \
    del_timer(p1);                                   \
}

#define del_timer_sync_dbg(p1)                           \
{                                                               \
    pr_info("[MODULE -> %s], [THREAD -> %s] [DEL_TIMER_SYNC %s] [%s] [%d]\n",  \
            THIS_MODULE->name, get_thread_name(), #p1, __func__, __LINE__);    \
    del_timer_sync(p1);                                   \
}

#define timer_setup_dbg(p1, p2, p3)                       \
{                                                                     \
    pr_info("[MODULE -> %s], [THREAD -> %s] [TIMER_SETUP %s, %s, %s] [%s] [%d]\n", \
            THIS_MODULE->name, get_thread_name(), #p1, #p2, #p3, __func__, __LINE__); \
    timer_setup(p1, p2, p3);    \
}

#define timer_shutdown_sync_dbg(p1)                           \
{                                                               \
    pr_info("[MODULE -> %s], [THREAD -> %s] [TIMER_SHUTDOWN_SYNC %s] [%s] [%d]\n",  \
            THIS_MODULE->name, get_thread_name(), #p1, __func__, __LINE__);    \
    timer_shutdown_sync(p1);                                   \
}

#define mod_timer_dbg(p1, p2)                           \
{                                                               \
    pr_info("[MODULE -> %s], [THREAD -> %s] [ACTIVATED_MOD_TIMER %s, %s] [%s] [%d]\n",  \
            THIS_MODULE->name, get_thread_name(), #p1, #p2, __func__, __LINE__);    \
    mod_timer(p1, p2);                                   \
}










#define HANDLERS_DBG_PRINT 1
#define ETH_P_EAPOL 0x888E

struct iwl_rx_handlers;

extern void debug_handler_print(const struct iwl_rx_handlers* handlers, size_t num_handlers);

static inline const char* get_thread_name(void)
{
	if (current && current->comm) {
		return current->comm;
	}
	return "unknown";
}

static inline void get_packet_type(struct sk_buff *skb)
{
	if (!skb) {
		pr_info("Skb is null [%s] [%d]\n", __func__, __LINE__);
		return;
	}

	pr_info("[MODULE -> %s], [THREAD -> %s]  [SKB_DATA -> %40ph] [%s] [%d]\n",
			THIS_MODULE->name, get_thread_name(), skb->data, __func__, __LINE__);

	u8 *ip_data = (u8 *)skb->data;
	u8 byte0 = ip_data[0];

	u8 frame_type = (byte0 & 0x0C) >> 2;
	u8 frame_subtype = (byte0 & 0xF0);

	const char *type_str = "Unknown Packet";  
	const char *subtype_str = "Unknown Frame";  

	if (frame_type == 0) {
		type_str = "Management packet"; 
		switch (frame_subtype) {
			case IEEE80211_STYPE_PROBE_RESP:
				subtype_str = "Probe Response Frame";
				break;
			case IEEE80211_STYPE_ASSOC_REQ:
				subtype_str = "Association Request Frame";
				break;
			case IEEE80211_STYPE_ASSOC_RESP:
				subtype_str = "Association Response Frame";
				break;
			case IEEE80211_STYPE_REASSOC_REQ:
				subtype_str = "Reassociation Request Frame";
				break;
			case IEEE80211_STYPE_REASSOC_RESP:
				subtype_str = "Reassociation Response Frame";
				break;
			case IEEE80211_STYPE_BEACON:
				subtype_str = "Beacon Frame";
				break;
			case IEEE80211_STYPE_AUTH:
				subtype_str = "Authentication Frame";
				break;
			case IEEE80211_STYPE_DEAUTH:
				subtype_str = "Deauthentication Frame";
				break;
			default:
				subtype_str = "Other Management Frame";
				break;
		}
	}
	pr_info("[MODULE -> %s], [THREAD -> %s]  [SKB -> %p] [TYPE -> %s] [SUBTYPE -> %s] [%s] [%d]\n",
			THIS_MODULE->name, get_thread_name(), skb, type_str, subtype_str, __func__, __LINE__);
}

static inline void get_data_type(struct sk_buff *skb)
{
	if (!skb || skb->len < sizeof(struct ethhdr)) {
		pr_err("Invalid skb or insufficient length\n");
		return;
	}

	pr_info("[MODULE -> %s], [THREAD -> %s]  [SKB_DATA -> %40ph] [%s] [%d]\n",
			THIS_MODULE->name, get_thread_name(), skb->data, __func__, __LINE__);

	struct ethhdr *eth_hdr = (struct ethhdr *)skb->data;

	u8 *ip_data = (u8 *)skb->data;

	u8 byte0 = ip_data[0];

	u8 frame_type = (byte0 & 0xC0) >> 5;

	const char *type_str = "Unknown Packet";

	if (frame_type == 0x02) {
		type_str = "Data Packet";
		u16 eth_proto = ntohs(eth_hdr->h_proto);
		if (eth_proto == ETH_P_EAPOL) {
			pr_info("[MODULE -> %s], [THREAD -> %s]  [SKB -> %p] [TYPE -> %s] [ETHER_TYPE -> %04x] [%s] [%d]\n",
					THIS_MODULE->name, get_thread_name(), skb, type_str, eth_proto, __func__, __LINE__);
		} else {
			pr_info("[MODULE -> %s], [THREAD -> %s] [Not an EAPOL packet] [%s] [%d]\n",THIS_MODULE->name, get_thread_name(), __func__, __LINE__);
		}
	}
}







#endif /* DRV_DBG_H */

