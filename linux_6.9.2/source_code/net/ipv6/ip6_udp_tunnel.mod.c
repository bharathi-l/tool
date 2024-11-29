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

KSYMTAB_FUNC(udp_sock_create6, "_gpl", "");
KSYMTAB_FUNC(udp_tunnel6_xmit_skb, "_gpl", "");
KSYMTAB_FUNC(udp_tunnel6_dst_lookup, "_gpl", "");

SYMBOL_CRC(udp_sock_create6, 0x38f28782, "_gpl");
SYMBOL_CRC(udp_tunnel6_xmit_skb, 0x4fdf1b0d, "_gpl");
SYMBOL_CRC(udp_tunnel6_dst_lookup, 0xe0688917, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb3824a12, "sock_create_kern" },
	{ 0x4bbbcb6f, "kernel_bind" },
	{ 0x9604c6bb, "kernel_sock_shutdown" },
	{ 0x26ed65de, "sock_release" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf3eaf8a7, "lock_sock_nested" },
	{ 0xa5bdee8c, "release_sock" },
	{ 0x1622bd4, "sock_bindtoindex" },
	{ 0xa49408df, "kernel_connect" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1783724b, "udp6_set_csum" },
	{ 0xa5c10cfa, "ip6_local_out" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xddab5e66, "dst_cache_get_ip6" },
	{ 0x3ab5d439, "ipv6_stub" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xcdfb2c95, "dst_cache_set_ip6" },
	{ 0x986d6241, "dst_release" },
	{ 0x4f4cb259, "__dynamic_netdev_dbg" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A273B3FB1F70512F25117E8");
