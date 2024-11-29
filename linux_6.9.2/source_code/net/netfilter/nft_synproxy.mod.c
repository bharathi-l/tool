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
	{ 0x3ac4525b, "nf_ct_netns_put" },
	{ 0x94d0fab8, "nft_unregister_expr" },
	{ 0x7de1935d, "nf_synproxy_ipv6_fini" },
	{ 0xd2dce65, "nf_ip_checksum" },
	{ 0x3966f305, "synproxy_parse_options" },
	{ 0x5f54cde9, "synproxy_recv_client_ack_ipv6" },
	{ 0x9a25806b, "consume_skb" },
	{ 0x42b56879, "synproxy_recv_client_ack" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0xdd823327, "synproxy_send_client_synack_ipv6" },
	{ 0xd6c5ee85, "synproxy_send_client_synack" },
	{ 0x1f099794, "synproxy_init_timestamp_cookie" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xa56ba964, "nft_register_obj" },
	{ 0x6e984c22, "nft_register_expr" },
	{ 0x5d7cd524, "nft_unregister_obj" },
	{ 0xa3b6d95, "nft_chain_validate_hooks" },
	{ 0xd5a43273, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xca9fc082, "synproxy_net_id" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x3733777f, "nf_ct_netns_get" },
	{ 0xf04d9875, "nf_synproxy_ipv4_init" },
	{ 0x1c3a8030, "nf_synproxy_ipv6_init" },
	{ 0x91968b18, "nf_synproxy_ipv4_fini" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack,nf_tables,nf_synproxy_core");


MODULE_INFO(srcversion, "6C28B6516316BBFA8FF91C5");
