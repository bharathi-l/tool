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

KSYMTAB_FUNC(l2tp_nl_register_ops, "_gpl", "");
KSYMTAB_FUNC(l2tp_nl_unregister_ops, "_gpl", "");

SYMBOL_CRC(l2tp_nl_register_ops, 0x539cf921, "_gpl");
SYMBOL_CRC(l2tp_nl_unregister_ops, 0x337f2432, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc01b7698, "genl_unregister_family" },
	{ 0xd5a43273, "nla_put" },
	{ 0xb7f54816, "nla_put_64bit" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xa916b694, "strnlen" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x66f07741, "l2tp_session_dec_refcount" },
	{ 0x3910ccd2, "l2tp_session_get_nth" },
	{ 0xa0872143, "l2tp_tunnel_get_nth" },
	{ 0x8d99d3c9, "genlmsg_multicast_allns" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x39edb639, "l2tp_tunnel_create" },
	{ 0x8b7fac20, "l2tp_tunnel_inc_refcount" },
	{ 0x22e7d70b, "l2tp_tunnel_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x4805d8cc, "l2tp_tunnel_delete" },
	{ 0xf6ab0010, "l2tp_session_set_header_len" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2b9da7a4, "genl_lock" },
	{ 0x2d140a58, "genl_unlock" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf20b36c9, "genl_register_family" },
	{ 0x2a6ac418, "l2tp_session_get_by_ifname" },
	{ 0x41ba37a6, "l2tp_tunnel_get" },
	{ 0x81f74ee0, "l2tp_tunnel_get_session" },
	{ 0x6cf025ba, "l2tp_tunnel_dec_refcount" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0xc760ce2d, "genlmsg_put" },
	{ 0x8911bab3, "netlink_unicast" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "l2tp_core");


MODULE_INFO(srcversion, "92B9AC7BFA2DE2F3071F2F2");
