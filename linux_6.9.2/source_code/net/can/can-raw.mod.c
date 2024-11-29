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
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xd657ce1f, "_copy_to_iter" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0xd8cf7a4d, "can_rx_unregister" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x37a0cba, "kfree" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x84b08e3b, "sock_no_connect" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x87a132ef, "sk_error_report" },
	{ 0xbcef7b55, "can_proto_register" },
	{ 0x122c3a7e, "_printk" },
	{ 0x5a49628c, "datagram_poll" },
	{ 0x2d34b705, "__sock_recv_cmsgs" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x829f575e, "can_send" },
	{ 0xafeaf674, "sock_no_shutdown" },
	{ 0x4e547048, "__kmalloc_node_track_caller" },
	{ 0xc0cb301e, "dev_get_by_index" },
	{ 0x36c091de, "sk_free" },
	{ 0x437a0d6d, "__sock_tx_timestamp" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xde85399, "sock_no_accept" },
	{ 0x6f5598d1, "sock_no_listen" },
	{ 0xd5d41543, "sock_recv_errqueue" },
	{ 0xf3eaf8a7, "lock_sock_nested" },
	{ 0xf4ba9908, "sock_no_socketpair" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x1e54ba33, "sock_no_mmap" },
	{ 0xe7140f35, "sock_cmsg_send" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x75f63f0d, "skb_recv_datagram" },
	{ 0x73da78ac, "sock_alloc_send_pskb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xf1de5c0a, "skb_clone" },
	{ 0x15bcc2d9, "_copy_from_iter" },
	{ 0xe39d41c, "can_proto_unregister" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x960990a1, "sock_gettstamp" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x4d160fd7, "iov_iter_revert" },
	{ 0x791c5dc8, "can_rx_register" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xa5bdee8c, "release_sock" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "can");


MODULE_INFO(srcversion, "CC118C5019DBED84B97F2ED");
