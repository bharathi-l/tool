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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_MITIGATION_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

KSYMTAB_DATA(nft_reject_policy, "_gpl", "");
KSYMTAB_FUNC(nft_reject_validate, "_gpl", "");
KSYMTAB_FUNC(nft_reject_init, "_gpl", "");
KSYMTAB_FUNC(nft_reject_dump, "_gpl", "");
KSYMTAB_FUNC(nft_reject_icmp_code, "_gpl", "");
KSYMTAB_FUNC(nft_reject_icmpv6_code, "_gpl", "");

SYMBOL_CRC(nft_reject_policy, 0xcbcf13a1, "_gpl");
SYMBOL_CRC(nft_reject_validate, 0x578f906b, "_gpl");
SYMBOL_CRC(nft_reject_init, 0x51e2a556, "_gpl");
SYMBOL_CRC(nft_reject_dump, 0x2e160c91, "_gpl");
SYMBOL_CRC(nft_reject_icmp_code, 0xe2c84666, "_gpl");
SYMBOL_CRC(nft_reject_icmpv6_code, 0x1de558c1, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa3b6d95, "nft_chain_validate_hooks" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xd5a43273, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "B486386BA35C669DD8FBD2D");
