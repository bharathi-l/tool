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

KSYMTAB_FUNC(nf_reject_skb_v4_tcp_reset, "_gpl", "");
KSYMTAB_FUNC(nf_reject_skb_v4_unreach, "_gpl", "");
KSYMTAB_FUNC(nf_reject_ip_tcphdr_get, "_gpl", "");
KSYMTAB_FUNC(nf_reject_iphdr_put, "_gpl", "");
KSYMTAB_FUNC(nf_reject_ip_tcphdr_put, "_gpl", "");
KSYMTAB_FUNC(nf_send_reset, "_gpl", "");
KSYMTAB_FUNC(nf_send_unreach, "_gpl", "");

SYMBOL_CRC(nf_reject_skb_v4_tcp_reset, 0xb21bfcb4, "_gpl");
SYMBOL_CRC(nf_reject_skb_v4_unreach, 0x56ad3caa, "_gpl");
SYMBOL_CRC(nf_reject_ip_tcphdr_get, 0xebfbdc49, "_gpl");
SYMBOL_CRC(nf_reject_iphdr_put, 0x28094b9e, "_gpl");
SYMBOL_CRC(nf_reject_ip_tcphdr_put, 0xe3cf15a6, "_gpl");
SYMBOL_CRC(nf_send_reset, 0xbadf4aab, "_gpl");
SYMBOL_CRC(nf_send_unreach, 0x996ba292, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x3599c47a, "nf_ip_route" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0xd2dce65, "nf_ip_checksum" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0x816dfe80, "ip_route_me_harder" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x6e068e63, "ip6_mtu" },
	{ 0xf27c9808, "nf_ct_attach" },
	{ 0x2e7887d2, "nf_ct_set_closing" },
	{ 0x7990f761, "dev_get_by_index_rcu" },
	{ 0x5089f45f, "ip_send_check" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x8e7a30bb, "__dev_queue_xmit" },
	{ 0xe3d1897d, "ip_local_out" },
	{ 0x9c6690db, "ipv4_mtu" },
	{ 0x2041fe35, "__icmp_send" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xe5688684, "pskb_trim_rcsum_slow" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9DFA92272AD26BB56D077D1");
