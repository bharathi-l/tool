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

KSYMTAB_FUNC(gre_add_protocol, "_gpl", "");
KSYMTAB_FUNC(gre_del_protocol, "_gpl", "");
KSYMTAB_FUNC(gre_parse_header, "", "");

SYMBOL_CRC(gre_add_protocol, 0x626b4806, "_gpl");
SYMBOL_CRC(gre_del_protocol, 0xa1550e04, "_gpl");
SYMBOL_CRC(gre_parse_header, 0x4db268e7, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x6c8f95e2, "__skb_checksum_complete" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xfaddbbc2, "inet_add_protocol" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0x84dd6e25, "inet_del_protocol" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1660CB73F966B3FC6CEAABC");
