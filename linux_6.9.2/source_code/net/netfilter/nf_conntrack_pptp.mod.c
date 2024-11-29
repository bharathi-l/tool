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

KSYMTAB_DATA(nf_nat_pptp_hook, "_gpl", "");
KSYMTAB_FUNC(pptp_msg_name, "", "");

SYMBOL_CRC(nf_nat_pptp_hook, 0x0d211730, "_gpl");
SYMBOL_CRC(pptp_msg_name, 0xf2a36612, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x460ec0f, "nf_ct_invert_tuple" },
	{ 0x5fa587e5, "nf_ct_expect_find_get" },
	{ 0x56cc812a, "nf_ct_unexpect_related" },
	{ 0x286b5af5, "nf_ct_expect_put" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa6c05bfb, "nf_conntrack_helper_unregister" },
	{ 0x57848526, "nf_conntrack_find_get" },
	{ 0xa6ee3b65, "nf_ct_delete" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0xc28997d7, "nf_ct_expect_alloc" },
	{ 0xadb85c52, "nf_ct_expect_init" },
	{ 0x641eb8, "nf_ct_expect_related_report" },
	{ 0x77020149, "nf_ct_gre_keymap_add" },
	{ 0xd15d8756, "nf_ct_gre_keymap_destroy" },
	{ 0x89d99ee1, "__nf_ct_ext_find" },
	{ 0x42f71abc, "nf_ct_ext_add" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xf3bdd7e9, "nf_conntrack_helper_register" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "B7368F90EF187F7E1BA8A3D");
