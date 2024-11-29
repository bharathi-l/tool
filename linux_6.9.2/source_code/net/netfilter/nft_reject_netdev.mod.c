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
	{ 0x94d0fab8, "nft_unregister_expr" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x8e7a30bb, "__dev_queue_xmit" },
	{ 0x71986951, "nf_reject_skb_v6_unreach" },
	{ 0x56ad3caa, "nf_reject_skb_v4_unreach" },
	{ 0xd4ed8200, "nf_reject_skb_v6_tcp_reset" },
	{ 0xe2c84666, "nft_reject_icmp_code" },
	{ 0x1de558c1, "nft_reject_icmpv6_code" },
	{ 0xb21bfcb4, "nf_reject_skb_v4_tcp_reset" },
	{ 0x51e2a556, "nft_reject_init" },
	{ 0x2e160c91, "nft_reject_dump" },
	{ 0xcbcf13a1, "nft_reject_policy" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6e984c22, "nft_register_expr" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xa3b6d95, "nft_chain_validate_hooks" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nf_reject_ipv6,nf_reject_ipv4,nft_reject");


MODULE_INFO(srcversion, "17E570DE9C1A1BAEFB5A3AF");
