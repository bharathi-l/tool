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
	{ 0x3733777f, "nf_ct_netns_get" },
	{ 0x19d8cdee, "nf_connlabels_get" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x38f6f150, "xt_unregister_match" },
	{ 0x89d99ee1, "__nf_ct_ext_find" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc188b0d7, "xt_register_match" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd73f1c26, "nf_connlabels_put" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack,x_tables");


MODULE_INFO(srcversion, "8AB834D2A22BC919A6F73DF");
