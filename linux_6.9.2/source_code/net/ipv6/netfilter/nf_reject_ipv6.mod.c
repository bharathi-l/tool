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

KSYMTAB_FUNC(nf_reject_skb_v6_tcp_reset, "_gpl", "");
KSYMTAB_FUNC(nf_reject_skb_v6_unreach, "_gpl", "");
KSYMTAB_FUNC(nf_reject_ip6_tcphdr_get, "_gpl", "");
KSYMTAB_FUNC(nf_reject_ip6hdr_put, "_gpl", "");
KSYMTAB_FUNC(nf_reject_ip6_tcphdr_put, "_gpl", "");
KSYMTAB_FUNC(nf_send_reset6, "_gpl", "");
KSYMTAB_FUNC(nf_send_unreach6, "_gpl", "");

SYMBOL_CRC(nf_reject_skb_v6_tcp_reset, 0xd4ed8200, "_gpl");
SYMBOL_CRC(nf_reject_skb_v6_unreach, 0x71986951, "_gpl");
SYMBOL_CRC(nf_reject_ip6_tcphdr_get, 0xc2483dd2, "_gpl");
SYMBOL_CRC(nf_reject_ip6hdr_put, 0x5bc80a50, "_gpl");
SYMBOL_CRC(nf_reject_ip6_tcphdr_put, 0x42b36b32, "_gpl");
SYMBOL_CRC(nf_send_reset6, 0x949c07a0, "_gpl");
SYMBOL_CRC(nf_send_unreach6, 0x0ce7aa46, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x398231f4, "ipv6_skip_exthdr" },
	{ 0xa3bd064c, "nf_ip6_checksum" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0xcead911, "__nf_ip6_route" },
	{ 0x17feaa56, "icmp6_send" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0xe5688684, "pskb_trim_rcsum_slow" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xcd2b56dd, "l3mdev_master_ifindex_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x56876eb1, "security_skb_classify_flow" },
	{ 0x2b3cbef0, "ip6_route_output_flags" },
	{ 0xa629c6cf, "xfrm_lookup" },
	{ 0x5158bba8, "ip6_dst_hoplimit" },
	{ 0xf27c9808, "nf_ct_attach" },
	{ 0x2e7887d2, "nf_ct_set_closing" },
	{ 0x7990f761, "dev_get_by_index_rcu" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x8e7a30bb, "__dev_queue_xmit" },
	{ 0x986d6241, "dst_release" },
	{ 0xa5c10cfa, "ip6_local_out" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3FDDE4AAA952017A81ED45B");
