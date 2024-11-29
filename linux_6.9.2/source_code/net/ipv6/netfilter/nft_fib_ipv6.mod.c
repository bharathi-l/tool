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

KSYMTAB_FUNC(nft_fib6_eval_type, "_gpl", "");
KSYMTAB_FUNC(nft_fib6_eval, "_gpl", "");

SYMBOL_CRC(nft_fib6_eval_type, 0xfcd27a69, "_gpl");
SYMBOL_CRC(nft_fib6_eval, 0x84f2c32f, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xcd2b56dd, "l3mdev_master_ifindex_rcu" },
	{ 0x6e984c22, "nft_register_expr" },
	{ 0x94d0fab8, "nft_unregister_expr" },
	{ 0x1da035f6, "make_kuid" },
	{ 0x485e6dcf, "nft_fib_store_result" },
	{ 0x6bfa4814, "ip6_route_lookup" },
	{ 0x986d6241, "dst_release" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xfa1f9024, "ipv6_chk_addr" },
	{ 0xcead911, "__nf_ip6_route" },
	{ 0x3c798cb0, "nft_fib_init" },
	{ 0xcdb2b320, "nft_fib_dump" },
	{ 0xebf1c22b, "nft_fib_validate" },
	{ 0x4a502e9e, "nft_fib_reduce" },
	{ 0xbc8624cb, "nft_fib_policy" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nft_fib");


MODULE_INFO(srcversion, "E124A45FF723FE9EBFCDBF2");
