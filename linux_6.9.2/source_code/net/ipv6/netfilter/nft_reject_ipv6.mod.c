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
	{ 0x949c07a0, "nf_send_reset6" },
	{ 0xce7aa46, "nf_send_unreach6" },
	{ 0x94d0fab8, "nft_unregister_expr" },
	{ 0x51e2a556, "nft_reject_init" },
	{ 0x2e160c91, "nft_reject_dump" },
	{ 0x578f906b, "nft_reject_validate" },
	{ 0xcbcf13a1, "nft_reject_policy" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6e984c22, "nft_register_expr" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nf_reject_ipv6,nf_tables,nft_reject");


MODULE_INFO(srcversion, "FDDA493DF129F1F6915CD66");
