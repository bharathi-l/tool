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

KSYMTAB_FUNC(pn_sock_hash, "", "");
KSYMTAB_FUNC(pn_sock_unhash, "", "");
KSYMTAB_DATA(phonet_stream_ops, "", "");
KSYMTAB_FUNC(pn_sock_get_port, "", "");
KSYMTAB_DATA(phonet_header_ops, "", "");
KSYMTAB_FUNC(pn_skb_send, "", "");
KSYMTAB_FUNC(phonet_proto_register, "", "");
KSYMTAB_FUNC(phonet_proto_unregister, "", "");

SYMBOL_CRC(pn_sock_hash, 0x54e9d54b, "");
SYMBOL_CRC(pn_sock_unhash, 0x90ba4099, "");
SYMBOL_CRC(phonet_stream_ops, 0x70581244, "");
SYMBOL_CRC(pn_sock_get_port, 0xff9635d5, "");
SYMBOL_CRC(phonet_header_ops, 0x70ed21c8, "");
SYMBOL_CRC(pn_skb_send, 0x300bb0f1, "");
SYMBOL_CRC(phonet_proto_register, 0x6782c518, "");
SYMBOL_CRC(phonet_proto_unregister, 0x493328ea, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xda10ec3, "security_sock_graft" },
	{ 0xd4216927, "skb_free_datagram" },
	{ 0x136b25da, "sock_queue_rcv_skb_reason" },
	{ 0x18f58619, "try_module_get" },
	{ 0x4914275a, "sock_i_uid" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xac7da2f2, "__nlmsg_put" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x9a25806b, "consume_skb" },
	{ 0x4a04c76c, "dev_add_pack" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x579e0bf5, "rtnl_unregister_all" },
	{ 0xebe48bde, "sock_common_getsockopt" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x692ed195, "___pskb_trim" },
	{ 0x37a0cba, "kfree" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x84b08e3b, "sock_no_connect" },
	{ 0xa8a6dd54, "sock_common_setsockopt" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x65f11366, "proc_create_net_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa2066eb8, "pskb_expand_head" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0x8cb09cb0, "skb_queue_purge_reason" },
	{ 0xb3012895, "register_net_sysctl_sz" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x7222c16a, "proto_unregister" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x3c90e235, "sock_register" },
	{ 0x5a49628c, "datagram_poll" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0x706bb784, "netlink_capable" },
	{ 0x50314131, "rtnl_set_sk_err" },
	{ 0x910bb85d, "proto_register" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd47a039c, "module_put" },
	{ 0x21c148f4, "__sk_receive_skb" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xafeaf674, "sock_no_shutdown" },
	{ 0xe7f87e08, "__dev_get_by_index" },
	{ 0xece43bce, "init_net" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xe675d21a, "dev_remove_pack" },
	{ 0xc0cb301e, "dev_get_by_index" },
	{ 0x36c091de, "sk_free" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xde85399, "sock_no_accept" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe246278b, "skb_push" },
	{ 0x6f5598d1, "sock_no_listen" },
	{ 0xd5a43273, "nla_put" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0xf3eaf8a7, "lock_sock_nested" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x2e591177, "skb_copy_datagram_iter" },
	{ 0xadb3c445, "rtnl_register_module" },
	{ 0x5f258127, "sk_alloc" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0xf4ba9908, "sock_no_socketpair" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x1e54ba33, "sock_no_mmap" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0x5cf52384, "netif_rx" },
	{ 0x246cf6ad, "sock_common_recvmsg" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xbe478f6a, "sk_common_release" },
	{ 0x9f5ceb6d, "seq_pad" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xa2a427b5, "sock_i_ino" },
	{ 0x8e7a30bb, "__dev_queue_xmit" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc622556f, "prepare_to_wait_exclusive" },
	{ 0x75f63f0d, "skb_recv_datagram" },
	{ 0x73da78ac, "sock_alloc_send_pskb" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x63fd798c, "remove_proc_entry" },
	{ 0x9d046b08, "rtnl_notify" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x13fe5644, "seq_printf" },
	{ 0xf1de5c0a, "skb_clone" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x15bcc2d9, "_copy_from_iter" },
	{ 0x8cf244f1, "seq_puts" },
	{ 0xb805d2b3, "unregister_net_sysctl_table" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x2788847d, "from_kuid_munged" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x4d160fd7, "iov_iter_revert" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x242851e9, "sock_init_data" },
	{ 0x3611cec5, "sk_ioctl" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xa5bdee8c, "release_sock" },
	{ 0x2801a22f, "proc_dointvec_minmax" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1F121FA1CA78A31D4592CEF");
