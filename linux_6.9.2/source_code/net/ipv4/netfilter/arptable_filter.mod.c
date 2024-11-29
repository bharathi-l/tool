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
	{ 0xdf54975e, "arpt_register_table" },
	{ 0x37a0cba, "kfree" },
	{ 0xc6d0c81e, "xt_register_template" },
	{ 0x36791363, "arpt_do_table" },
	{ 0xc681fb0, "xt_hook_ops_alloc" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0xf5fc9d43, "xt_unregister_template" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xffac9fd5, "arpt_unregister_table" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xa3f374b8, "arpt_unregister_table_pre_exit" },
	{ 0xba005b23, "arpt_alloc_initial_table" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "arp_tables,x_tables");


MODULE_INFO(srcversion, "025E77FBC92D373C2D13841");
