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

KSYMTAB_DATA(nf_nat_amanda_hook, "_gpl", "");

SYMBOL_CRC(nf_nat_amanda_hook, 0x01ee11ab, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x354e16f1, "nf_conntrack_helpers_register" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x7db52cd8, "textsearch_destroy" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x76bfda42, "nf_conntrack_helpers_unregister" },
	{ 0xaf9ba12f, "__nf_ct_refresh_acct" },
	{ 0xe40a4cff, "skb_find_text" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xc28997d7, "nf_ct_expect_alloc" },
	{ 0xadb85c52, "nf_ct_expect_init" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x286b5af5, "nf_ct_expect_put" },
	{ 0x641eb8, "nf_ct_expect_related_report" },
	{ 0xa15cbb7c, "nf_ct_helper_log" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xd7b44fe9, "param_ops_charp" },
	{ 0xd786c3ef, "param_ops_uint" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb43a56fa, "textsearch_prepare" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "16BC8E47075E52F576415CF");
