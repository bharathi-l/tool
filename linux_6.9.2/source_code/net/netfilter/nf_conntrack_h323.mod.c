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

KSYMTAB_DATA(nfct_h323_nat_hook, "_gpl", "");
KSYMTAB_FUNC(get_h225_addr, "_gpl", "");

SYMBOL_CRC(nfct_h323_nat_hook, 0xd41744ed, "_gpl");
SYMBOL_CRC(get_h225_addr, 0x0be4ae61, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0xd786c3ef, "param_ops_uint" },
	{ 0x1e0a0c24, "mod_timer_pending" },
	{ 0x89d99ee1, "__nf_ct_ext_find" },
	{ 0x37a0cba, "kfree" },
	{ 0xcead911, "__nf_ip6_route" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa15cbb7c, "nf_ct_helper_log" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0x289502a7, "__nf_ct_expect_find" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x76bfda42, "nf_conntrack_helpers_unregister" },
	{ 0x641eb8, "nf_ct_expect_related_report" },
	{ 0xc28997d7, "nf_ct_expect_alloc" },
	{ 0x286b5af5, "nf_ct_expect_put" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x354e16f1, "nf_conntrack_helpers_register" },
	{ 0x3599c47a, "nf_ip_route" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xa3f425cf, "param_ops_bool" },
	{ 0xadb85c52, "nf_ct_expect_init" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x986d6241, "dst_release" },
	{ 0xa6c05bfb, "nf_conntrack_helper_unregister" },
	{ 0xaf9ba12f, "__nf_ct_refresh_acct" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xf3bdd7e9, "nf_conntrack_helper_register" },
	{ 0x47d0e073, "param_ops_int" },
	{ 0x56cc812a, "nf_ct_unexpect_related" },
	{ 0x93faf02b, "nf_ct_remove_expectations" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "B4E7D8B2C696DE977B71360");
