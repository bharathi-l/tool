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

KSYMTAB_DATA(synproxy_net_id, "_gpl", "");
KSYMTAB_FUNC(synproxy_parse_options, "_gpl", "");
KSYMTAB_FUNC(synproxy_init_timestamp_cookie, "_gpl", "");
KSYMTAB_FUNC(synproxy_send_client_synack, "_gpl", "");
KSYMTAB_FUNC(synproxy_recv_client_ack, "_gpl", "");
KSYMTAB_FUNC(ipv4_synproxy_hook, "_gpl", "");
KSYMTAB_FUNC(nf_synproxy_ipv4_init, "_gpl", "");
KSYMTAB_FUNC(nf_synproxy_ipv4_fini, "_gpl", "");
KSYMTAB_FUNC(synproxy_send_client_synack_ipv6, "_gpl", "");
KSYMTAB_FUNC(synproxy_recv_client_ack_ipv6, "_gpl", "");
KSYMTAB_FUNC(ipv6_synproxy_hook, "_gpl", "");
KSYMTAB_FUNC(nf_synproxy_ipv6_init, "_gpl", "");
KSYMTAB_FUNC(nf_synproxy_ipv6_fini, "_gpl", "");

SYMBOL_CRC(synproxy_net_id, 0xca9fc082, "_gpl");
SYMBOL_CRC(synproxy_parse_options, 0x3966f305, "_gpl");
SYMBOL_CRC(synproxy_init_timestamp_cookie, 0x1f099794, "_gpl");
SYMBOL_CRC(synproxy_send_client_synack, 0xd6c5ee85, "_gpl");
SYMBOL_CRC(synproxy_recv_client_ack, 0x42b56879, "_gpl");
SYMBOL_CRC(ipv4_synproxy_hook, 0x703ede1d, "_gpl");
SYMBOL_CRC(nf_synproxy_ipv4_init, 0xf04d9875, "_gpl");
SYMBOL_CRC(nf_synproxy_ipv4_fini, 0x91968b18, "_gpl");
SYMBOL_CRC(synproxy_send_client_synack_ipv6, 0xdd823327, "_gpl");
SYMBOL_CRC(synproxy_recv_client_ack_ipv6, 0x5f54cde9, "_gpl");
SYMBOL_CRC(ipv6_synproxy_hook, 0x9999d3a7, "_gpl");
SYMBOL_CRC(nf_synproxy_ipv6_init, 0x1c3a8030, "_gpl");
SYMBOL_CRC(nf_synproxy_ipv6_fini, 0x7de1935d, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0x13fe5644, "seq_printf" },
	{ 0x8cf244f1, "seq_puts" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0x17d89efe, "nf_register_net_hooks" },
	{ 0xf4f62fa0, "nf_unregister_net_hooks" },
	{ 0xc9271504, "skb_ensure_writable" },
	{ 0x67377444, "inet_proto_csum_replace4" },
	{ 0x816dfe80, "ip_route_me_harder" },
	{ 0xe3d1897d, "ip_local_out" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x56876eb1, "security_skb_classify_flow" },
	{ 0xcead911, "__nf_ip6_route" },
	{ 0xa629c6cf, "xfrm_lookup" },
	{ 0xa5c10cfa, "ip6_local_out" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x63fd798c, "remove_proc_entry" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x89d99ee1, "__nf_ct_ext_find" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0x8e2e56fa, "nf_ct_tmpl_alloc" },
	{ 0x42f71abc, "nf_ct_ext_add" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x65f11366, "proc_create_net_data" },
	{ 0xa0a6bd19, "nf_ct_tmpl_free" },
	{ 0x2d0143e8, "__cookie_v4_check" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x18428692, "__cookie_v6_init_sequence" },
	{ 0x7ca64a0b, "__cookie_v4_init_sequence" },
	{ 0x9666f97e, "nf_ct_seqadj_init" },
	{ 0x9a25806b, "consume_skb" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x99e6780e, "__cookie_v6_check" },
	{ 0x398231f4, "ipv6_skip_exthdr" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "E9495DA612B403DC5B4B9EE");
