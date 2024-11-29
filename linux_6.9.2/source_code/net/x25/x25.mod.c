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
	{ 0xda10ec3, "security_sock_graft" },
	{ 0xd4216927, "skb_free_datagram" },
	{ 0x136b25da, "sock_queue_rcv_skb_reason" },
	{ 0xa44e6221, "sk_send_sigurg" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0x4a04c76c, "dev_add_pack" },
	{ 0xf346231f, "seq_list_start_head" },
	{ 0xb5f5c77e, "skb_dequeue" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xde293f9e, "add_wait_queue_exclusive" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x4862064c, "remove_proc_subtree" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x50b2b15, "__pskb_copy_fclone" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8cb09cb0, "skb_queue_purge_reason" },
	{ 0xb3012895, "register_net_sysctl_sz" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x7222c16a, "proto_unregister" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x3c90e235, "sock_register" },
	{ 0x5a49628c, "datagram_poll" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xa916b694, "strnlen" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x910bb85d, "proto_register" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd6a7d5b2, "skb_queue_tail" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xafeaf674, "sock_no_shutdown" },
	{ 0x33338211, "rcuref_get_slowpath" },
	{ 0xece43bce, "init_net" },
	{ 0xc084677a, "skb_pull" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xe675d21a, "dev_remove_pack" },
	{ 0x36c091de, "sk_free" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xe246278b, "skb_push" },
	{ 0x3dfc897c, "seq_hlist_start_head" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xf3eaf8a7, "lock_sock_nested" },
	{ 0x2e591177, "skb_copy_datagram_iter" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x5f258127, "sk_alloc" },
	{ 0xd28964a6, "proc_mkdir" },
	{ 0xf4ba9908, "sock_no_socketpair" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x1e54ba33, "sock_no_mmap" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1fad1a56, "sock_rfree" },
	{ 0x8e7a30bb, "__dev_queue_xmit" },
	{ 0x1a8c0f81, "skb_set_owner_w" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x75bda77a, "seq_hlist_next" },
	{ 0x75f63f0d, "skb_recv_datagram" },
	{ 0x73da78ac, "sock_alloc_send_pskb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x13fe5644, "seq_printf" },
	{ 0x2db5a302, "skb_copy" },
	{ 0x3efb7f15, "dev_get_by_name" },
	{ 0xf1de5c0a, "skb_clone" },
	{ 0x15bcc2d9, "_copy_from_iter" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xf94536c2, "proc_dointvec" },
	{ 0x8cf244f1, "seq_puts" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x960990a1, "sock_gettstamp" },
	{ 0x705f660f, "send_sig" },
	{ 0xb805d2b3, "unregister_net_sysctl_table" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x754d539c, "strlen" },
	{ 0x4d160fd7, "iov_iter_revert" },
	{ 0x655cfa5d, "skb_append" },
	{ 0xf1e1c4c6, "proc_create_seq_private" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x242851e9, "sock_init_data" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0xa5bdee8c, "release_sock" },
	{ 0x1c5402a3, "skb_queue_head" },
	{ 0x2801a22f, "proc_dointvec_minmax" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7568FB2654F2C8539C1D006");
