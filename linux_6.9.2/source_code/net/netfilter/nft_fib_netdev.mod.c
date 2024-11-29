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
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0x84f2c32f, "nft_fib6_eval" },
	{ 0x7f90b22a, "nft_fib4_eval_type" },
	{ 0xc926b548, "nft_fib4_eval" },
	{ 0xfcd27a69, "nft_fib6_eval_type" },
	{ 0x94d0fab8, "nft_unregister_expr" },
	{ 0x3c798cb0, "nft_fib_init" },
	{ 0xcdb2b320, "nft_fib_dump" },
	{ 0xebf1c22b, "nft_fib_validate" },
	{ 0x4a502e9e, "nft_fib_reduce" },
	{ 0xbc8624cb, "nft_fib_policy" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6e984c22, "nft_register_expr" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nft_fib_ipv6,nft_fib_ipv4,nf_tables,nft_fib");


MODULE_INFO(srcversion, "25926ECC4587D6B1625DA9E");
