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
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x89d99ee1, "__nf_ct_ext_find" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3733777f, "nf_ct_netns_get" },
	{ 0x8e2e56fa, "nf_ct_tmpl_alloc" },
	{ 0xb8f4ef9b, "nf_ct_ecache_ext_add" },
	{ 0xa0a6bd19, "nf_ct_tmpl_free" },
	{ 0xa916b694, "strnlen" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xecfdee8d, "nf_ct_l4proto_find" },
	{ 0x4bf9f0fd, "nf_ct_set_timeout" },
	{ 0x1faa3a2c, "nf_conntrack_helper_try_module_get" },
	{ 0x67806dce, "nf_ct_helper_ext_add" },
	{ 0x122c3a7e, "_printk" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xaf80cbda, "xt_register_target" },
	{ 0x17449d4d, "xt_register_targets" },
	{ 0xda994d2e, "xt_unregister_target" },
	{ 0x43aca7d5, "xt_unregister_targets" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6b23f894, "nf_conntrack_helper_put" },
	{ 0x3ac4525b, "nf_ct_netns_put" },
	{ 0x7fdcb9c1, "nf_ct_destroy_timeout" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack,x_tables");


MODULE_INFO(srcversion, "D666BB679C5C4A0B86A0ED1");
