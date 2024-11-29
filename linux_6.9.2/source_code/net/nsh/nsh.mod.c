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

KSYMTAB_FUNC(nsh_push, "_gpl", "");
KSYMTAB_FUNC(nsh_pop, "_gpl", "");

SYMBOL_CRC(nsh_push, 0x99d37440, "_gpl");
SYMBOL_CRC(nsh_pop, 0x993390ef, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb3225928, "dev_add_offload" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b1e0b9e, "dev_remove_offload" },
	{ 0xa2066eb8, "pskb_expand_head" },
	{ 0xe246278b, "skb_push" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x75c8414a, "skb_pull_rcsum" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0xf7c3351, "skb_mac_gso_segment" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "01EB4787913035115C71231");
