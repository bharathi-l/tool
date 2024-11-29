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
	{ 0xbb55832f, "nf_nat_inet_register_fn" },
	{ 0x32779b9, "ipv6_find_hdr" },
	{ 0x97d072c1, "nft_do_chain" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9e67180f, "nft_unregister_chain_type" },
	{ 0xf87c0ea5, "nf_nat_ipv6_register_fn" },
	{ 0x62799c4c, "nf_nat_ipv6_unregister_fn" },
	{ 0xbec4d161, "nf_nat_ipv4_register_fn" },
	{ 0xdb8307fb, "nf_nat_ipv4_unregister_fn" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc8535993, "nft_register_chain_type" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x301c5039, "nf_nat_inet_unregister_fn" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nf_nat,nf_tables");


MODULE_INFO(srcversion, "B3BA741F8F683426622631C");
