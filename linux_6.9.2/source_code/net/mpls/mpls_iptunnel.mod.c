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
	{ 0xa2066eb8, "pskb_expand_head" },
	{ 0xe246278b, "skb_push" },
	{ 0x9a41c7c0, "mpls_stats_inc_outucastpkts" },
	{ 0xd4829999, "neigh_xmit" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xebc63a97, "__skb_warn_lro_forwarding" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x1e478da3, "lwtunnel_encap_del_ops" },
	{ 0x75125ef4, "nla_put_labels" },
	{ 0xd5a43273, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xde3cca7e, "nla_get_labels" },
	{ 0x7f2dc4a6, "lwtunnel_state_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xe6a6bad8, "lwtunnel_encap_add_ops" },
	{ 0x4200c6b, "mpls_output_possible" },
	{ 0x335a3245, "mpls_dev_mtu" },
	{ 0x9a2ef8b0, "mpls_pkt_too_big" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "mpls_router");


MODULE_INFO(srcversion, "9465CC7CE3B397F34EAE785");
