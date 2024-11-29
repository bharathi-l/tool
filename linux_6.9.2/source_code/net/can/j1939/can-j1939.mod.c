#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

#ifdef CONFIG_UNWINDER_ORC
#include <asm/orc_header.h>
ORC_HEADER;
#endif

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_MITIGATION_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd4216927, "skb_free_datagram" },
	{ 0x136b25da, "sock_queue_rcv_skb_reason" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xd657ce1f, "_copy_to_iter" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x9a25806b, "consume_skb" },
	{ 0xd8cf7a4d, "can_rx_unregister" },
	{ 0x338e80e9, "hrtimer_try_to_cancel" },
	{ 0xb7f54816, "nla_put_64bit" },
	{ 0xb5f5c77e, "skb_dequeue" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x7bedcff7, "can_sock_destruct" },
	{ 0x99f7371c, "refcount_dec_and_mutex_lock" },
	{ 0x48879f20, "hrtimer_init" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1eff3830, "netdev_warn" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xeb6f6ea3, "netdev_err" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x87a132ef, "sk_error_report" },
	{ 0x8f099454, "put_cmsg" },
	{ 0x8cb09cb0, "skb_queue_purge_reason" },
	{ 0xbcef7b55, "can_proto_register" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0x5a49628c, "datagram_poll" },
	{ 0x2d34b705, "__sock_recv_cmsgs" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd6a7d5b2, "skb_queue_tail" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x829f575e, "can_send" },
	{ 0xafeaf674, "sock_no_shutdown" },
	{ 0x4e547048, "__kmalloc_node_track_caller" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc084677a, "skb_pull" },
	{ 0xc0cb301e, "dev_get_by_index" },
	{ 0x36c091de, "sk_free" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xcda3b26d, "netdev_printk" },
	{ 0xde85399, "sock_no_accept" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe246278b, "skb_push" },
	{ 0x6f5598d1, "sock_no_listen" },
	{ 0xd5a43273, "nla_put" },
	{ 0xd5d41543, "sock_recv_errqueue" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xf3eaf8a7, "lock_sock_nested" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xf4ba9908, "sock_no_socketpair" },
	{ 0xd955afa6, "hrtimer_start_range_ns" },
	{ 0x844c5de4, "sock_efree" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x1e54ba33, "sock_no_mmap" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x4f4cb259, "__dynamic_netdev_dbg" },
	{ 0xc1978e82, "sock_queue_err_skb" },
	{ 0x24acca0b, "netdev_alert" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x75f63f0d, "skb_recv_datagram" },
	{ 0x73da78ac, "sock_alloc_send_pskb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xf1de5c0a, "skb_clone" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x15bcc2d9, "_copy_from_iter" },
	{ 0xe39d41c, "can_proto_unregister" },
	{ 0x4a666d56, "hrtimer_cancel" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x42554c8e, "netdev_notice" },
	{ 0x4d160fd7, "iov_iter_revert" },
	{ 0x791c5dc8, "can_rx_register" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0xb2a49696, "netdev_info" },
	{ 0x9858f364, "get_random_u8" },
	{ 0xa5bdee8c, "release_sock" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "can");


MODULE_INFO(srcversion, "BC13D712C163AD4DC285E70");
