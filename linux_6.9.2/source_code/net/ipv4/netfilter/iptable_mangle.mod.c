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
	{ 0xa2b9e22, "ipt_alloc_initial_table" },
	{ 0xcbd425aa, "ipt_register_table" },
	{ 0x37a0cba, "kfree" },
	{ 0xc6d0c81e, "xt_register_template" },
	{ 0xc681fb0, "xt_hook_ops_alloc" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0xf5fc9d43, "xt_unregister_template" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbe85c16a, "ipt_unregister_table_exit" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xde9d71e3, "ipt_unregister_table_pre_exit" },
	{ 0x28e174b4, "ipt_do_table" },
	{ 0x816dfe80, "ip_route_me_harder" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "ip_tables,x_tables");


MODULE_INFO(srcversion, "B5B8FA8365815A8350A4331");
