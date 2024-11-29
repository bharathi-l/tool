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
	{ 0xca9fc082, "synproxy_net_id" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd2dce65, "nf_ip_checksum" },
	{ 0x3966f305, "synproxy_parse_options" },
	{ 0x42b56879, "synproxy_recv_client_ack" },
	{ 0x9a25806b, "consume_skb" },
	{ 0xd6c5ee85, "synproxy_send_client_synack" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0x1f099794, "synproxy_init_timestamp_cookie" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x91968b18, "nf_synproxy_ipv4_fini" },
	{ 0x3ac4525b, "nf_ct_netns_put" },
	{ 0x3733777f, "nf_ct_netns_get" },
	{ 0xf04d9875, "nf_synproxy_ipv4_init" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xaf80cbda, "xt_register_target" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xda994d2e, "xt_unregister_target" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nf_synproxy_core,nf_conntrack,x_tables");


MODULE_INFO(srcversion, "DFB790625F0CB2EAE0035B0");
