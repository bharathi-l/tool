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
	{ 0x83f51840, "__nla_parse" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8e2e56fa, "nf_ct_tmpl_alloc" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd73f1c26, "nf_connlabels_put" },
	{ 0xe2b8cc13, "nft_parse_register_load" },
	{ 0x19d8cdee, "nf_connlabels_get" },
	{ 0xece43bce, "init_net" },
	{ 0x67806dce, "nf_ct_helper_ext_add" },
	{ 0xc28997d7, "nf_ct_expect_alloc" },
	{ 0xadb85c52, "nf_ct_expect_init" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x641eb8, "nf_ct_expect_related_report" },
	{ 0x89d99ee1, "__nf_ct_ext_find" },
	{ 0xaf9ba12f, "__nf_ct_refresh_acct" },
	{ 0x42f71abc, "nf_ct_ext_add" },
	{ 0x71ac2305, "nf_connlabels_replace" },
	{ 0xb8f4ef9b, "nf_ct_ecache_ext_add" },
	{ 0xcfca0a65, "nf_ct_get_id" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xcf69d922, "nft_ct_get_fast_eval" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6e984c22, "nft_register_expr" },
	{ 0xa56ba964, "nft_register_obj" },
	{ 0x5d7cd524, "nft_unregister_obj" },
	{ 0x94d0fab8, "nft_unregister_expr" },
	{ 0xd5a43273, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3ac4525b, "nf_ct_netns_put" },
	{ 0xf41289fe, "nf_ct_untimeout" },
	{ 0x37a0cba, "kfree" },
	{ 0x3733777f, "nf_ct_netns_get" },
	{ 0x6b23f894, "nf_conntrack_helper_put" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0x1faa3a2c, "nf_conntrack_helper_try_module_get" },
	{ 0x263596a, "__nft_reg_track_cancel" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x89d28d24, "nft_dump_register" },
	{ 0x148d3baa, "nft_reg_track_update" },
	{ 0xc72b74b5, "nft_expr_reduce_bitwise" },
	{ 0xb818ba4d, "nft_parse_register_store" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xa916b694, "strnlen" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xecfdee8d, "nf_ct_l4proto_find" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack,nf_tables");


MODULE_INFO(srcversion, "E260973BA1C72997CE14994");
