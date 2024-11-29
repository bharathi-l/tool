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
	{ 0x9e6b7c11, "ebt_unregister_table" },
	{ 0x3e9ff0d0, "ebt_unregister_table_pre_exit" },
	{ 0x75910b4f, "ebt_register_table" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0xe99eb419, "ebt_do_table" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xca5c7095, "ebt_register_template" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0x3f9033a, "ebt_unregister_template" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "ebtables");


MODULE_INFO(srcversion, "6B9936859741A0DFB412E69");
