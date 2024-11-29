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
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x426085de, "nf_nat_masquerade_ipv4" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3ac4525b, "nf_ct_netns_put" },
	{ 0x68377094, "nf_nat_masquerade_ipv6" },
	{ 0xd9c25654, "nf_nat_masquerade_inet_unregister_notifiers" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x17449d4d, "xt_register_targets" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x3bc17c49, "nf_nat_masquerade_inet_register_notifiers" },
	{ 0x43aca7d5, "xt_unregister_targets" },
	{ 0x3733777f, "nf_ct_netns_get" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nf_nat,nf_conntrack,x_tables");


MODULE_INFO(srcversion, "2E7BFBCD60313935A62A4DB");
