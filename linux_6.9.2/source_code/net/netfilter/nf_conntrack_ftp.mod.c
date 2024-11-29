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

KSYMTAB_DATA(nf_nat_ftp_hook, "_gpl", "");

SYMBOL_CRC(nf_nat_ftp_hook, 0xef8fd52d, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x76bfda42, "nf_conntrack_helpers_unregister" },
	{ 0x609bcd98, "in6_pton" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x89d99ee1, "__nf_ct_ext_find" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xc28997d7, "nf_ct_expect_alloc" },
	{ 0xadb85c52, "nf_ct_expect_init" },
	{ 0x286b5af5, "nf_ct_expect_put" },
	{ 0xa15cbb7c, "nf_ct_helper_log" },
	{ 0x641eb8, "nf_ct_expect_related_report" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xa3f425cf, "param_ops_bool" },
	{ 0xaa473cb8, "param_array_ops" },
	{ 0x2f42db77, "param_ops_ushort" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x602f99c4, "nf_ct_helper_init" },
	{ 0x354e16f1, "nf_conntrack_helpers_register" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x122c3a7e, "_printk" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "4C5528F276DEACC888174C5");
