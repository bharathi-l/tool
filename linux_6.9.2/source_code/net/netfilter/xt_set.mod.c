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
	{ 0xe25b8c15, "xt_register_matches" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x17449d4d, "xt_register_targets" },
	{ 0xd4363de3, "xt_unregister_matches" },
	{ 0x227f47ca, "ip_set_nfnl_put" },
	{ 0xe79039f, "ip_set_nfnl_get_byindex" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4acd6fba, "ip_set_add" },
	{ 0x2dbafa6d, "ip_set_del" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x7751f9b, "ip_set_test" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x43aca7d5, "xt_unregister_targets" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "x_tables,ip_set");


MODULE_INFO(srcversion, "2664E89D13CED67CA5A2AEC");
