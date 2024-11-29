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

KSYMTAB_FUNC(psample_group_get, "_gpl", "");
KSYMTAB_FUNC(psample_group_take, "_gpl", "");
KSYMTAB_FUNC(psample_group_put, "_gpl", "");
KSYMTAB_FUNC(psample_sample_packet, "_gpl", "");

SYMBOL_CRC(psample_group_get, 0x4d63037a, "_gpl");
SYMBOL_CRC(psample_group_take, 0x9baedb8a, "_gpl");
SYMBOL_CRC(psample_group_put, 0x281330bc, "_gpl");
SYMBOL_CRC(psample_sample_packet, 0x411a637f, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf20b36c9, "genl_register_family" },
	{ 0xc01b7698, "genl_unregister_family" },
	{ 0xc760ce2d, "genlmsg_put" },
	{ 0xd5a43273, "nla_put" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0x2357245f, "netlink_broadcast_filtered" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xb7f54816, "nla_put_64bit" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0D10965D088F2ECF1752991");
