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
	{ 0x223a4882, "nfnl_acct_find_get" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0xa7546654, "nfnl_acct_update" },
	{ 0x669df1ad, "nfnl_acct_overquota" },
	{ 0xd4363de3, "xt_unregister_matches" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe25b8c15, "xt_register_matches" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xbecf5d14, "nfnl_acct_put" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nfnetlink_acct,x_tables");


MODULE_INFO(srcversion, "7C93FD91F907A288AB11768");
