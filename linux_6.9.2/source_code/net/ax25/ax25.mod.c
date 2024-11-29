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

KSYMTAB_DATA(ax25_bcast, "_gpl", "");
KSYMTAB_DATA(ax25_defaddr, "_gpl", "");
KSYMTAB_DATA(null_ax25_address, "", "");
KSYMTAB_FUNC(ax2asc, "", "");
KSYMTAB_FUNC(asc2ax, "", "");
KSYMTAB_FUNC(ax25cmp, "", "");
KSYMTAB_FUNC(ax25_register_pid, "_gpl", "");
KSYMTAB_FUNC(ax25_protocol_release, "", "");
KSYMTAB_FUNC(ax25_linkfail_register, "", "");
KSYMTAB_FUNC(ax25_linkfail_release, "", "");
KSYMTAB_FUNC(ax25_listen_register, "", "");
KSYMTAB_FUNC(ax25_listen_release, "", "");
KSYMTAB_DATA(ax25_header_ops, "", "");
KSYMTAB_FUNC(ax25_ip_xmit, "", "");
KSYMTAB_FUNC(ax25_send_frame, "", "");
KSYMTAB_FUNC(ax25_display_timer, "", "");
KSYMTAB_DATA(ax25_uid_policy, "", "");
KSYMTAB_FUNC(ax25_findbyuid, "", "");
KSYMTAB_FUNC(ax25_find_cb, "", "");

SYMBOL_CRC(ax25_bcast, 0xac93ae05, "_gpl");
SYMBOL_CRC(ax25_defaddr, 0xaeb7451e, "_gpl");
SYMBOL_CRC(null_ax25_address, 0xd43ecbf1, "");
SYMBOL_CRC(ax2asc, 0x53dea1ff, "");
SYMBOL_CRC(asc2ax, 0x4502c65a, "");
SYMBOL_CRC(ax25cmp, 0xc1444946, "");
SYMBOL_CRC(ax25_register_pid, 0x3ddf380b, "_gpl");
SYMBOL_CRC(ax25_protocol_release, 0x8ede9e26, "");
SYMBOL_CRC(ax25_linkfail_register, 0x00b722ad, "");
SYMBOL_CRC(ax25_linkfail_release, 0x89c6a921, "");
SYMBOL_CRC(ax25_listen_register, 0xaadda0d1, "");
SYMBOL_CRC(ax25_listen_release, 0xa4a4c6a7, "");
SYMBOL_CRC(ax25_header_ops, 0x2fe12436, "");
SYMBOL_CRC(ax25_ip_xmit, 0x591f9154, "");
SYMBOL_CRC(ax25_send_frame, 0xbde7e7d2, "");
SYMBOL_CRC(ax25_display_timer, 0x14cecd59, "");
SYMBOL_CRC(ax25_uid_policy, 0x242852b9, "");
SYMBOL_CRC(ax25_findbyuid, 0xee02e420, "");
SYMBOL_CRC(ax25_find_cb, 0x4b76cc17, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xda10ec3, "security_sock_graft" },
	{ 0xd4216927, "skb_free_datagram" },
	{ 0x136b25da, "sock_queue_rcv_skb_reason" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0xdae5a582, "skb_expand_head" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4a04c76c, "dev_add_pack" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb5f5c77e, "skb_dequeue" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xa60e5536, "__skb_try_recv_datagram" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x6114cf8a, "__dev_get_by_name" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8cb09cb0, "skb_queue_purge_reason" },
	{ 0xb3012895, "register_net_sysctl_sz" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x7222c16a, "proto_unregister" },
	{ 0x6d334118, "__get_user_8" },
	{ 0x1000e51, "schedule" },
	{ 0x3c90e235, "sock_register" },
	{ 0x5a49628c, "datagram_poll" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x1da035f6, "make_kuid" },
	{ 0xa916b694, "strnlen" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x910bb85d, "proto_register" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd6a7d5b2, "skb_queue_tail" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xece43bce, "init_net" },
	{ 0xc084677a, "skb_pull" },
	{ 0x24d273d1, "add_timer" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xe675d21a, "dev_remove_pack" },
	{ 0x36c091de, "sk_free" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0xe246278b, "skb_push" },
	{ 0x543ef284, "seq_hlist_start" },
	{ 0x3dfc897c, "seq_hlist_start_head" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0xf3eaf8a7, "lock_sock_nested" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x2e591177, "skb_copy_datagram_iter" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xc934753a, "__skb_wait_for_more_packets" },
	{ 0x5f258127, "sk_alloc" },
	{ 0xf4ba9908, "sock_no_socketpair" },
	{ 0xdf237453, "timer_shutdown_sync" },
	{ 0x91d606de, "skb_dequeue_tail" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x1e54ba33, "sock_no_mmap" },
	{ 0x5cf52384, "netif_rx" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1fad1a56, "sock_rfree" },
	{ 0xa2a427b5, "sock_i_ino" },
	{ 0x8e7a30bb, "__dev_queue_xmit" },
	{ 0x1a8c0f81, "skb_set_owner_w" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x75bda77a, "seq_hlist_next" },
	{ 0x73da78ac, "sock_alloc_send_pskb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x63fd798c, "remove_proc_entry" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x13fe5644, "seq_printf" },
	{ 0x2db5a302, "skb_copy" },
	{ 0xf1de5c0a, "skb_clone" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x15bcc2d9, "_copy_from_iter" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x8cf244f1, "seq_puts" },
	{ 0x960990a1, "sock_gettstamp" },
	{ 0x705f660f, "send_sig" },
	{ 0xb805d2b3, "unregister_net_sysctl_table" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x2788847d, "from_kuid_munged" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x4d160fd7, "iov_iter_revert" },
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


MODULE_INFO(srcversion, "0EC9538A6BB247E12C9EBD6");
