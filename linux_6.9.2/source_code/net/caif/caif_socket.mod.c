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
	{ 0x7990f761, "dev_get_by_index_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x122c3a7e, "_printk" },
	{ 0xbcf84d46, "caif_disconnect_client" },
	{ 0xb7b6874e, "caif_free_client" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2a09f713, "cfpkt_fromnative" },
	{ 0x9e3e305d, "cfpkt_set_prio" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x36c091de, "sk_free" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x1840543b, "debugfs_remove" },
	{ 0xe2964344, "__wake_up" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x73da78ac, "sock_alloc_send_pskb" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x15bcc2d9, "_copy_from_iter" },
	{ 0x4d160fd7, "iov_iter_revert" },
	{ 0x705f660f, "send_sig" },
	{ 0x75f63f0d, "skb_recv_datagram" },
	{ 0x2e591177, "skb_copy_datagram_iter" },
	{ 0xd4216927, "skb_free_datagram" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xb5f5c77e, "skb_dequeue" },
	{ 0xd657ce1f, "_copy_to_iter" },
	{ 0xc084677a, "skb_pull" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x1c5402a3, "skb_queue_head" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x4a237e57, "cfpkt_tonative" },
	{ 0x23f650d8, "sk_filter_trim_cap" },
	{ 0x1fad1a56, "sock_rfree" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xac7f6213, "__sk_mem_schedule" },
	{ 0xda733252, "sock_no_bind" },
	{ 0xf4ba9908, "sock_no_socketpair" },
	{ 0xde85399, "sock_no_accept" },
	{ 0x9b8d9591, "sock_no_getname" },
	{ 0x62e9cfe4, "sock_no_ioctl" },
	{ 0x6f5598d1, "sock_no_listen" },
	{ 0xafeaf674, "sock_no_shutdown" },
	{ 0x1e54ba33, "sock_no_mmap" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3c90e235, "sock_register" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x87a132ef, "sk_error_report" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x1446b60a, "caif_client_register_refcnt" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xc6cbbc89, "capable" },
	{ 0x5f258127, "sk_alloc" },
	{ 0xf3eaf8a7, "lock_sock_nested" },
	{ 0x242851e9, "sock_init_data" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xa5bdee8c, "release_sock" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x3865b6eb, "sk_stream_kill_queues" },
	{ 0x709459f5, "caif_connect_client" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "caif");


MODULE_INFO(srcversion, "613EDD1EFD61F2FE1DDB485");
