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
	{ 0x136b25da, "sock_queue_rcv_skb_reason" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xdfde231e, "__udp_disconnect" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x2938a0d7, "__ip6_datagram_connect" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xbe478f6a, "sk_common_release" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7990f761, "dev_get_by_index_rcu" },
	{ 0xfa1f9024, "ipv6_chk_addr" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x75f63f0d, "skb_recv_datagram" },
	{ 0x2e591177, "skb_copy_datagram_iter" },
	{ 0xd4216927, "skb_free_datagram" },
	{ 0xe1198e2, "ipv6_recv_error" },
	{ 0x5ef32d9b, "__sock_recv_timestamp" },
	{ 0xfd0de16, "ip6_datagram_recv_ctl" },
	{ 0x26f0d865, "__sock_recv_wifi_status" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2ad34c91, "ip6_datagram_send_ctl" },
	{ 0x11e25c39, "fl6_merge_options" },
	{ 0x6f6b52e9, "__ipv6_fixup_options" },
	{ 0x770a5ae9, "fl6_update_dst" },
	{ 0x7fdeed2c, "security_sk_classify_flow" },
	{ 0x3cc6ccd9, "ip6_dst_lookup_flow" },
	{ 0x19fc2d85, "ip_generic_getfrag" },
	{ 0x15ca3229, "ip6_append_data" },
	{ 0x986d6241, "dst_release" },
	{ 0xcd5835b, "ipv6_flowlabel_exclusive" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xe5af7dec, "__fl6_sock_lookup" },
	{ 0x5158bba8, "ip6_dst_hoplimit" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x5f042aa0, "ip6_push_pending_frames" },
	{ 0x614695b9, "l2tp_session_get" },
	{ 0x43157ebd, "l2tp_recv_common" },
	{ 0x66f07741, "l2tp_session_dec_refcount" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0xfdd6607c, "__xfrm_policy_check" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0x21c148f4, "__sk_receive_skb" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x36c091de, "sk_free" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x1d0b7eb, "inet6_release" },
	{ 0xcfa981c7, "inet6_bind" },
	{ 0x17fc1049, "inet_dgram_connect" },
	{ 0xf4ba9908, "sock_no_socketpair" },
	{ 0xde85399, "sock_no_accept" },
	{ 0x5a49628c, "datagram_poll" },
	{ 0xbcfc27c2, "inet6_ioctl" },
	{ 0x5d21854, "inet6_compat_ioctl" },
	{ 0x960990a1, "sock_gettstamp" },
	{ 0x6f5598d1, "sock_no_listen" },
	{ 0x3e316b3c, "inet_shutdown" },
	{ 0xa8a6dd54, "sock_common_setsockopt" },
	{ 0xebe48bde, "sock_common_getsockopt" },
	{ 0x32486a71, "inet_sendmsg" },
	{ 0x246cf6ad, "sock_common_recvmsg" },
	{ 0x1e54ba33, "sock_no_mmap" },
	{ 0x95e18237, "l2tp_ioctl" },
	{ 0xfdc99e60, "ipv6_setsockopt" },
	{ 0x38de3c7b, "ipv6_getsockopt" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x122c3a7e, "_printk" },
	{ 0x910bb85d, "proto_register" },
	{ 0xf9f9ed2, "inet6_add_protocol" },
	{ 0xec38d952, "inet6_register_protosw" },
	{ 0x7222c16a, "proto_unregister" },
	{ 0xfa3f7334, "l2tp_sk_to_tunnel" },
	{ 0xf3eaf8a7, "lock_sock_nested" },
	{ 0xa1fbf49c, "ip6_flush_pending_frames" },
	{ 0xa5bdee8c, "release_sock" },
	{ 0x4805d8cc, "l2tp_tunnel_delete" },
	{ 0xeb3b4eaa, "inet6_unregister_protosw" },
	{ 0x3126ab0d, "inet6_del_protocol" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "l2tp_core,l2tp_ip");


MODULE_INFO(srcversion, "99981BB326AD328DB2D44AF");
