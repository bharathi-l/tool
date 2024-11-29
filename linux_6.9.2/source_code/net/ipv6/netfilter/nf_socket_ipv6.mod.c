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

KSYMTAB_FUNC(nf_sk_lookup_slow_v6, "_gpl", "");

SYMBOL_CRC(nf_sk_lookup_slow_v6, 0x30b3ea69, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x32779b9, "ipv6_find_hdr" },
	{ 0x398231f4, "ipv6_skip_exthdr" },
	{ 0x9bdc8324, "udp6_lib_lookup" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xb69aae30, "inet6_lookup" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "971173D78BA572BA53D4564");
