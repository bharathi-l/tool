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
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0xf5fc9d43, "xt_unregister_template" },
	{ 0x37a0cba, "kfree" },
	{ 0x9ebe341, "ip6t_do_table" },
	{ 0x62c503a1, "ip6_route_me_harder" },
	{ 0x9ce490ae, "ip6t_alloc_initial_table" },
	{ 0xb21a46f7, "ip6t_register_table" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfb7c09a6, "ip6t_unregister_table_exit" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xede199c6, "ip6t_unregister_table_pre_exit" },
	{ 0xc6d0c81e, "xt_register_template" },
	{ 0xc681fb0, "xt_hook_ops_alloc" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "x_tables,ip6_tables");


MODULE_INFO(srcversion, "0D0F4C77835BF317A4EF8D8");
