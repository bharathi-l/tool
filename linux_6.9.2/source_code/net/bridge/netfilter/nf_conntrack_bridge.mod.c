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
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x881c3b3, "nf_confirm" },
	{ 0x18cee0de, "br_ip6_fragment" },
	{ 0xd578f68d, "ip_frag_init" },
	{ 0x29ad096a, "ip_frag_next" },
	{ 0x7c05db6c, "skb_checksum_help" },
	{ 0xf017dad6, "ip_fraglist_init" },
	{ 0xd008db1c, "ip_fraglist_prepare" },
	{ 0x3931717e, "kfree_skb_list_reason" },
	{ 0x9a25806b, "consume_skb" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x46d615f1, "nf_ct_frag6_gather" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x2db35cf7, "ip_defrag" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xf46fa4b, "nf_conntrack_in" },
	{ 0xe5688684, "pskb_trim_rcsum_slow" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x610c2d0c, "nf_ct_bridge_register" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x54b7d4c8, "nf_ct_bridge_unregister" },
	{ 0x8143aa3f, "br_dev_queue_push_xmit" },
	{ 0xa2066eb8, "pskb_expand_head" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack,nf_defrag_ipv6,bridge");


MODULE_INFO(srcversion, "A48A557BB1929DF04BA00D3");
