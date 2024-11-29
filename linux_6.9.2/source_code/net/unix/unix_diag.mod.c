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
	{ 0x5de24966, "__netlink_dump_start" },
	{ 0x4914275a, "sock_i_uid" },
	{ 0xac7da2f2, "__nlmsg_put" },
	{ 0xca9e776c, "nla_reserve" },
	{ 0xa42bc645, "sock_diag_save_cookie" },
	{ 0xbe9ca914, "unix_outq_len" },
	{ 0xb0f48303, "sock_diag_check_cookie" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3cec1303, "unix_inq_len" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0x8911bab3, "netlink_unicast" },
	{ 0x36c091de, "sk_free" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x72de9162, "unix_peer_get" },
	{ 0xd5a43273, "nla_put" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x2e30b7c3, "sock_diag_register" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xa2a427b5, "sock_i_ino" },
	{ 0x6b511dd3, "sock_diag_unregister" },
	{ 0x2788847d, "from_kuid_munged" },
	{ 0x26dcd9b1, "sock_diag_put_meminfo" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "45FB9E31671B1678D2B1018");
