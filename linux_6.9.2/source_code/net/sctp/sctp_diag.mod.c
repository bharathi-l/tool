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
	{ 0xfa6cb112, "netlink_net_capable" },
	{ 0xef16a89, "sctp_for_each_endpoint" },
	{ 0x93333674, "sctp_get_sctp_info" },
	{ 0x6c4b30b2, "sctp_transport_traverse_process" },
	{ 0xac7da2f2, "__nlmsg_put" },
	{ 0x35afd476, "inet_diag_register" },
	{ 0xca9e776c, "nla_reserve" },
	{ 0xa42bc645, "sock_diag_save_cookie" },
	{ 0xb0f48303, "sock_diag_check_cookie" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0xaa031790, "inet_diag_msg_common_fill" },
	{ 0x6350d90a, "nla_reserve_64bit" },
	{ 0x8911bab3, "netlink_unicast" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xd5a43273, "nla_put" },
	{ 0xf3eaf8a7, "lock_sock_nested" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7cb5d045, "inet_diag_msg_attrs_fill" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xb3621de2, "inet_diag_unregister" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x74c05240, "sctp_transport_lookup_process" },
	{ 0xa5bdee8c, "release_sock" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "sctp,inet_diag");


MODULE_INFO(srcversion, "0FC27070173C9183E1765E0");
