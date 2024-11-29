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
	{ 0xb3621de2, "inet_diag_unregister" },
	{ 0x1026d2db, "mptcp_token_get_sock" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0xfa6cb112, "netlink_net_capable" },
	{ 0xe58503b8, "inet_sk_diag_fill" },
	{ 0x8911bab3, "netlink_unicast" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x36c091de, "sk_free" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb12e3ff, "inet_diag_bc_sk" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x71abde7c, "mptcp_token_iter_next" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x35afd476, "inet_diag_register" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xaa217e13, "mptcp_diag_fill_info" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "inet_diag");


MODULE_INFO(srcversion, "816890EA440D89875B56142");
