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

KSYMTAB_FUNC(nci_spi_send, "_gpl", "");
KSYMTAB_FUNC(nci_spi_allocate_spi, "_gpl", "");
KSYMTAB_FUNC(nci_spi_read, "_gpl", "");

SYMBOL_CRC(nci_spi_send, 0x1ec7c2d3, "_gpl");
SYMBOL_CRC(nci_spi_allocate_spi, 0xdd14281a, "_gpl");
SYMBOL_CRC(nci_spi_read, 0x2d16ad1d, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xb6f5a1f2, "devm_kmalloc" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0xa6257a2f, "complete" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0xf467f7d3, "spi_sync" },
	{ 0xc084677a, "skb_pull" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xe246278b, "skb_push" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5A5FADF84CD09EE3AF87EBC");
