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

KSYMTAB_FUNC(nf_fwd_netdev_egress, "_gpl", "");
KSYMTAB_FUNC(nf_dup_netdev_egress, "_gpl", "");
KSYMTAB_FUNC(nft_fwd_dup_netdev_offload, "_gpl", "");

SYMBOL_CRC(nf_fwd_netdev_egress, 0x937f1ec7, "_gpl");
SYMBOL_CRC(nf_dup_netdev_egress, 0x55b4095e, "_gpl");
SYMBOL_CRC(nft_fwd_dup_netdev_offload, 0xaf2aac4e, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8e7a30bb, "__dev_queue_xmit" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xa2066eb8, "pskb_expand_head" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xe246278b, "skb_push" },
	{ 0x7990f761, "dev_get_by_index_rcu" },
	{ 0xf1de5c0a, "skb_clone" },
	{ 0xc0cb301e, "dev_get_by_index" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2FB7F66E14A7BA9F67EE576");
