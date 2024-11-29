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
	{ 0x3ac4525b, "nf_ct_netns_put" },
	{ 0xe2b8cc13, "nft_parse_register_load" },
	{ 0x3733777f, "nf_ct_netns_get" },
	{ 0x426085de, "nf_nat_masquerade_ipv4" },
	{ 0x68377094, "nf_nat_masquerade_ipv6" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xd9c25654, "nf_nat_masquerade_inet_unregister_notifiers" },
	{ 0x3acacbd6, "nft_chain_validate_dependency" },
	{ 0xa3b6d95, "nft_chain_validate_hooks" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6e984c22, "nft_register_expr" },
	{ 0x3bc17c49, "nf_nat_masquerade_inet_register_notifiers" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x94d0fab8, "nft_unregister_expr" },
	{ 0xd5a43273, "nla_put" },
	{ 0x89d28d24, "nft_dump_register" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack,nf_tables,nf_nat");


MODULE_INFO(srcversion, "C99415B3FFDA9189BD478F7");
