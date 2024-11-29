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
	{ 0xa0872143, "l2tp_tunnel_get_nth" },
	{ 0x337f2432, "l2tp_nl_unregister_ops" },
	{ 0x41ba37a6, "l2tp_tunnel_get" },
	{ 0x39edb639, "l2tp_tunnel_create" },
	{ 0x8b7fac20, "l2tp_tunnel_inc_refcount" },
	{ 0x22e7d70b, "l2tp_tunnel_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x136b25da, "sock_queue_rcv_skb_reason" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x27747bb9, "ppp_input" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xc084677a, "skb_pull" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0x3910ccd2, "l2tp_session_get_nth" },
	{ 0xf3eaf8a7, "lock_sock_nested" },
	{ 0xa5bdee8c, "release_sock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4805d8cc, "l2tp_tunnel_delete" },
	{ 0x2aa68f59, "l2tp_session_create" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x6ccdb4a9, "l2tp_session_inc_refcount" },
	{ 0xe45ea475, "l2tp_session_register" },
	{ 0x6e068e63, "ip6_mtu" },
	{ 0x986d6241, "dst_release" },
	{ 0x4a15a7a4, "ppp_register_net_channel" },
	{ 0x33338211, "rcuref_get_slowpath" },
	{ 0xbb40642d, "l2tp_session_delete" },
	{ 0x9c6690db, "ipv4_mtu" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x36c091de, "sk_free" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x99f9cc70, "ppp_dev_name" },
	{ 0x13fe5644, "seq_printf" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x8cf244f1, "seq_puts" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x147a7b17, "pppox_unbind_sock" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xd2937cf2, "sock_wmalloc" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x15bcc2d9, "_copy_from_iter" },
	{ 0x83269e6c, "l2tp_xmit_skb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4d160fd7, "iov_iter_revert" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf6ab0010, "l2tp_session_set_header_len" },
	{ 0xa2066eb8, "pskb_expand_head" },
	{ 0xda733252, "sock_no_bind" },
	{ 0xf4ba9908, "sock_no_socketpair" },
	{ 0xde85399, "sock_no_accept" },
	{ 0x5a49628c, "datagram_poll" },
	{ 0x3b525d2a, "pppox_ioctl" },
	{ 0x807f155a, "pppox_compat_ioctl" },
	{ 0x6f5598d1, "sock_no_listen" },
	{ 0xafeaf674, "sock_no_shutdown" },
	{ 0x1e54ba33, "sock_no_mmap" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xa802aea8, "register_pernet_device" },
	{ 0x910bb85d, "proto_register" },
	{ 0xb16eefe0, "register_pppox_proto" },
	{ 0x7222c16a, "proto_unregister" },
	{ 0xeba8170b, "unregister_pernet_device" },
	{ 0x539cf921, "l2tp_nl_register_ops" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe0ff7a18, "unregister_pppox_proto" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x81f74ee0, "l2tp_tunnel_get_session" },
	{ 0x66f07741, "l2tp_session_dec_refcount" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x5f258127, "sk_alloc" },
	{ 0x242851e9, "sock_init_data" },
	{ 0x8cb09cb0, "skb_queue_purge_reason" },
	{ 0x84f60f1c, "l2tp_udp_encap_recv" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x75f63f0d, "skb_recv_datagram" },
	{ 0x2e591177, "skb_copy_datagram_iter" },
	{ 0x63fd798c, "remove_proc_entry" },
	{ 0x65f11366, "proc_create_net_data" },
	{ 0x6cf025ba, "l2tp_tunnel_dec_refcount" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "l2tp_core,l2tp_netlink,pppox");


MODULE_INFO(srcversion, "0FFC3C163D829CA91C0AB79");
