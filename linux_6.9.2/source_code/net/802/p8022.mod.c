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

KSYMTAB_FUNC(register_8022_client, "", "");
KSYMTAB_FUNC(unregister_8022_client, "", "");

SYMBOL_CRC(register_8022_client, 0x7e0d02b8, "");
SYMBOL_CRC(unregister_8022_client, 0x679a428c, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf09180, "llc_build_and_send_ui_pkt" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x113ea25, "llc_sap_open" },
	{ 0x37a0cba, "kfree" },
	{ 0xab667667, "llc_sap_close" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "llc");


MODULE_INFO(srcversion, "985E938BE75A994E86F822C");
