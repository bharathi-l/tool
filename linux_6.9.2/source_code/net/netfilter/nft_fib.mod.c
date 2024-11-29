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

KSYMTAB_DATA(nft_fib_policy, "", "");
KSYMTAB_FUNC(nft_fib_validate, "_gpl", "");
KSYMTAB_FUNC(nft_fib_init, "_gpl", "");
KSYMTAB_FUNC(nft_fib_dump, "_gpl", "");
KSYMTAB_FUNC(nft_fib_store_result, "_gpl", "");
KSYMTAB_FUNC(nft_fib_reduce, "_gpl", "");

SYMBOL_CRC(nft_fib_policy, 0xbc8624cb, "");
SYMBOL_CRC(nft_fib_validate, 0xebf1c22b, "_gpl");
SYMBOL_CRC(nft_fib_init, 0x3c798cb0, "_gpl");
SYMBOL_CRC(nft_fib_dump, 0xcdb2b320, "_gpl");
SYMBOL_CRC(nft_fib_store_result, 0x485e6dcf, "_gpl");
SYMBOL_CRC(nft_fib_reduce, 0x4a502e9e, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa3b6d95, "nft_chain_validate_hooks" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xb818ba4d, "nft_parse_register_store" },
	{ 0x89d28d24, "nft_dump_register" },
	{ 0xd5a43273, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa916b694, "strnlen" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x148d3baa, "nft_reg_track_update" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "986283AAD316BE653D7048D");
