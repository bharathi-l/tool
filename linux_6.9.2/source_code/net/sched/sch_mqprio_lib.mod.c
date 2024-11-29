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

KSYMTAB_FUNC(mqprio_validate_qopt, "_gpl", "");
KSYMTAB_FUNC(mqprio_qopt_reconstruct, "_gpl", "");
KSYMTAB_FUNC(mqprio_fp_to_offload, "_gpl", "");

SYMBOL_CRC(mqprio_validate_qopt, 0x2ff9b6a6, "_gpl");
SYMBOL_CRC(mqprio_qopt_reconstruct, 0x41ade151, "_gpl");
SYMBOL_CRC(mqprio_fp_to_offload, 0xa59d46b5, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6EEBE01DDF36B416AC6DA52");
