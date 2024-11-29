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

KSYMTAB_FUNC(nfnl_acct_find_get, "_gpl", "");
KSYMTAB_FUNC(nfnl_acct_put, "_gpl", "");
KSYMTAB_FUNC(nfnl_acct_update, "_gpl", "");
KSYMTAB_FUNC(nfnl_acct_overquota, "_gpl", "");

SYMBOL_CRC(nfnl_acct_find_get, 0x223a4882, "_gpl");
SYMBOL_CRC(nfnl_acct_put, 0xbecf5d14, "_gpl");
SYMBOL_CRC(nfnl_acct_update, 0xa7546654, "_gpl");
SYMBOL_CRC(nfnl_acct_overquota, 0x669df1ad, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x37a0cba, "kfree" },
	{ 0x3c8dabba, "nfnetlink_subsys_unregister" },
	{ 0xac7da2f2, "__nlmsg_put" },
	{ 0xa916b694, "strnlen" },
	{ 0xd5a43273, "nla_put" },
	{ 0xb7f54816, "nla_put_64bit" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0xcfd2d2b8, "nfnetlink_broadcast" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x754d539c, "strlen" },
	{ 0x5a921311, "strncmp" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xd47a039c, "module_put" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x18f58619, "try_module_get" },
	{ 0x144dfedb, "nfnetlink_unicast" },
	{ 0x5de24966, "__netlink_dump_start" },
	{ 0xc6f3b3fc, "refcount_dec_if_one" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0x21c04549, "nfnetlink_subsys_register" },
	{ 0x122c3a7e, "_printk" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "29788C5ECBF8961BEE2E816");
