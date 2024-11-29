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

KSYMTAB_FUNC(ife_encode, "_gpl", "");
KSYMTAB_FUNC(ife_decode, "_gpl", "");
KSYMTAB_FUNC(ife_tlv_meta_decode, "_gpl", "");
KSYMTAB_FUNC(ife_tlv_meta_next, "_gpl", "");
KSYMTAB_FUNC(ife_tlv_meta_encode, "_gpl", "");

SYMBOL_CRC(ife_encode, 0x38d761f5, "_gpl");
SYMBOL_CRC(ife_decode, 0x4a003c17, "_gpl");
SYMBOL_CRC(ife_tlv_meta_decode, 0x67db2029, "_gpl");
SYMBOL_CRC(ife_tlv_meta_next, 0x6210e871, "_gpl");
SYMBOL_CRC(ife_tlv_meta_encode, 0xe7888e98, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa2066eb8, "pskb_expand_head" },
	{ 0xfb578fc5, "memset" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A0AAE114EA9C0129B692D7E");
