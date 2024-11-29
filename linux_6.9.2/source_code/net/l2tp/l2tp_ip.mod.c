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

KSYMTAB_FUNC(l2tp_ioctl, "_gpl", "");

SYMBOL_CRC(l2tp_ioctl, 0x95e18237, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x136b25da, "sock_queue_rcv_skb_reason" },
	{ 0xdfde231e, "__udp_disconnect" },
	{ 0xf3eaf8a7, "lock_sock_nested" },
	{ 0xa5bdee8c, "release_sock" },
	{ 0x6dcd2498, "__ip4_datagram_connect" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0xbe478f6a, "sk_common_release" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc507dcd9, "inet_addr_type" },
	{ 0x986d6241, "dst_release" },
	{ 0xd2937cf2, "sock_wmalloc" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x15bcc2d9, "_copy_from_iter" },
	{ 0x7ca0d2a2, "__sk_dst_check" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xec445fa7, "ip_queue_xmit" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x7fdeed2c, "security_sk_classify_flow" },
	{ 0x983836c5, "ip_route_output_flow" },
	{ 0x581978af, "sk_setup_caps" },
	{ 0x1da035f6, "make_kuid" },
	{ 0x4d160fd7, "iov_iter_revert" },
	{ 0x614695b9, "l2tp_session_get" },
	{ 0x43157ebd, "l2tp_recv_common" },
	{ 0x66f07741, "l2tp_session_dec_refcount" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x21c148f4, "__sk_receive_skb" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0xfdd6607c, "__xfrm_policy_check" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x36c091de, "sk_free" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x75f63f0d, "skb_recv_datagram" },
	{ 0x2e591177, "skb_copy_datagram_iter" },
	{ 0xd4216927, "skb_free_datagram" },
	{ 0x5ef32d9b, "__sock_recv_timestamp" },
	{ 0xf3d2f6b1, "ip_cmsg_recv_offset" },
	{ 0x26f0d865, "__sock_recv_wifi_status" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9a04521d, "inet_release" },
	{ 0x95df397f, "inet_bind" },
	{ 0x17fc1049, "inet_dgram_connect" },
	{ 0xf4ba9908, "sock_no_socketpair" },
	{ 0xde85399, "sock_no_accept" },
	{ 0x5a49628c, "datagram_poll" },
	{ 0x1031a7eb, "inet_ioctl" },
	{ 0x960990a1, "sock_gettstamp" },
	{ 0x6f5598d1, "sock_no_listen" },
	{ 0x3e316b3c, "inet_shutdown" },
	{ 0xa8a6dd54, "sock_common_setsockopt" },
	{ 0xebe48bde, "sock_common_getsockopt" },
	{ 0x32486a71, "inet_sendmsg" },
	{ 0x246cf6ad, "sock_common_recvmsg" },
	{ 0x1e54ba33, "sock_no_mmap" },
	{ 0xd7782812, "ip_setsockopt" },
	{ 0x59d06158, "ip_getsockopt" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x122c3a7e, "_printk" },
	{ 0x910bb85d, "proto_register" },
	{ 0xfaddbbc2, "inet_add_protocol" },
	{ 0x720c9a12, "inet_register_protosw" },
	{ 0x7222c16a, "proto_unregister" },
	{ 0xfa3f7334, "l2tp_sk_to_tunnel" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x4805d8cc, "l2tp_tunnel_delete" },
	{ 0x752c82d3, "inet_unregister_protosw" },
	{ 0x84dd6e25, "inet_del_protocol" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "l2tp_core");


MODULE_INFO(srcversion, "CECC7F904A1A90F43D9B7EB");
