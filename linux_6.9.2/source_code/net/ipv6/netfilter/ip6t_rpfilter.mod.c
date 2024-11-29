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
	{ 0xe2d5255a, "strcmp" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xcd2b56dd, "l3mdev_master_ifindex_rcu" },
	{ 0x1da035f6, "make_kuid" },
	{ 0x6bfa4814, "ip6_route_lookup" },
	{ 0x986d6241, "dst_release" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x38f6f150, "xt_unregister_match" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc188b0d7, "xt_register_match" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "B0755C5A564BCE1677A7F69");
