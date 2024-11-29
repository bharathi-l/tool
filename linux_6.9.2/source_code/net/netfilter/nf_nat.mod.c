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

KSYMTAB_FUNC(nf_ct_nat_ext_add, "_gpl", "");
KSYMTAB_FUNC(nf_nat_setup_info, "", "");
KSYMTAB_FUNC(nf_nat_alloc_null_binding, "_gpl", "");
KSYMTAB_FUNC(nf_nat_packet, "_gpl", "");
KSYMTAB_FUNC(nf_nat_inet_fn, "_gpl", "");
KSYMTAB_FUNC(nf_nat_icmp_reply_translation, "_gpl", "");
KSYMTAB_FUNC(nf_nat_ipv4_register_fn, "_gpl", "");
KSYMTAB_FUNC(nf_nat_ipv4_unregister_fn, "_gpl", "");
KSYMTAB_FUNC(nf_nat_icmpv6_reply_translation, "_gpl", "");
KSYMTAB_FUNC(nf_nat_ipv6_register_fn, "_gpl", "");
KSYMTAB_FUNC(nf_nat_ipv6_unregister_fn, "_gpl", "");
KSYMTAB_FUNC(nf_nat_inet_register_fn, "_gpl", "");
KSYMTAB_FUNC(nf_nat_inet_unregister_fn, "_gpl", "");
KSYMTAB_FUNC(__nf_nat_mangle_tcp_packet, "", "");
KSYMTAB_FUNC(nf_nat_mangle_udp_packet, "", "");
KSYMTAB_FUNC(nf_nat_follow_master, "", "");
KSYMTAB_FUNC(nf_nat_exp_find_port, "_gpl", "");
KSYMTAB_FUNC(nf_nat_redirect_ipv4, "_gpl", "");
KSYMTAB_FUNC(nf_nat_redirect_ipv6, "_gpl", "");
KSYMTAB_FUNC(nf_nat_masquerade_ipv4, "_gpl", "");
KSYMTAB_FUNC(nf_nat_masquerade_ipv6, "_gpl", "");
KSYMTAB_FUNC(nf_nat_masquerade_inet_register_notifiers, "_gpl", "");
KSYMTAB_FUNC(nf_nat_masquerade_inet_unregister_notifiers, "_gpl", "");
KSYMTAB_FUNC(nf_ct_nat, "_gpl", "");

SYMBOL_CRC(nf_ct_nat_ext_add, 0x71558e28, "_gpl");
SYMBOL_CRC(nf_nat_setup_info, 0x034c4564, "");
SYMBOL_CRC(nf_nat_alloc_null_binding, 0x755c27cb, "_gpl");
SYMBOL_CRC(nf_nat_packet, 0x10be7ac5, "_gpl");
SYMBOL_CRC(nf_nat_inet_fn, 0x560af7e6, "_gpl");
SYMBOL_CRC(nf_nat_icmp_reply_translation, 0x4669a23e, "_gpl");
SYMBOL_CRC(nf_nat_ipv4_register_fn, 0xbec4d161, "_gpl");
SYMBOL_CRC(nf_nat_ipv4_unregister_fn, 0xdb8307fb, "_gpl");
SYMBOL_CRC(nf_nat_icmpv6_reply_translation, 0xf07b04b5, "_gpl");
SYMBOL_CRC(nf_nat_ipv6_register_fn, 0xf87c0ea5, "_gpl");
SYMBOL_CRC(nf_nat_ipv6_unregister_fn, 0x62799c4c, "_gpl");
SYMBOL_CRC(nf_nat_inet_register_fn, 0xbb55832f, "_gpl");
SYMBOL_CRC(nf_nat_inet_unregister_fn, 0x301c5039, "_gpl");
SYMBOL_CRC(__nf_nat_mangle_tcp_packet, 0x6e0bcad4, "");
SYMBOL_CRC(nf_nat_mangle_udp_packet, 0x5a75e125, "");
SYMBOL_CRC(nf_nat_follow_master, 0xd438edd3, "");
SYMBOL_CRC(nf_nat_exp_find_port, 0xede85d7c, "_gpl");
SYMBOL_CRC(nf_nat_redirect_ipv4, 0x7b06ae8c, "_gpl");
SYMBOL_CRC(nf_nat_redirect_ipv6, 0x96a6e2d3, "_gpl");
SYMBOL_CRC(nf_nat_masquerade_ipv4, 0x426085de, "_gpl");
SYMBOL_CRC(nf_nat_masquerade_ipv6, 0x68377094, "_gpl");
SYMBOL_CRC(nf_nat_masquerade_inet_register_notifiers, 0x3bc17c49, "_gpl");
SYMBOL_CRC(nf_nat_masquerade_inet_unregister_notifiers, 0xd9c25654, "_gpl");
SYMBOL_CRC(nf_ct_nat, 0x1a52e8ef, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x42f71abc, "nf_ct_ext_add" },
	{ 0xa2e9dc6a, "__do_once_done" },
	{ 0x57848526, "nf_conntrack_find_get" },
	{ 0x18f58619, "try_module_get" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xa3bd064c, "nf_ip6_checksum" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0x599690f1, "nf_hook_entries_insert_raw" },
	{ 0xa629c6cf, "xfrm_lookup" },
	{ 0xfba7a5f5, "__get_random_u32_below" },
	{ 0xa93f2398, "nf_ct_seqadj_set" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xb0e602eb, "memmove" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9fe89a7c, "nf_ct_helper_expectfn_unregister" },
	{ 0xbf8446f1, "__xfrm_decode_session" },
	{ 0x89d99ee1, "__nf_ct_ext_find" },
	{ 0x424d8e34, "nf_ct_helper_expectfn_register" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x44f0ad9, "get_random_u16" },
	{ 0x62c503a1, "ip6_route_me_harder" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa2066eb8, "pskb_expand_head" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0xa7b8c381, "nf_conntrack_tuple_taken" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0xcf98cd6a, "nf_ct_iterate_cleanup_net" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x398231f4, "ipv6_skip_exthdr" },
	{ 0x17d89efe, "nf_register_net_hooks" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xd47a039c, "module_put" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x49029e4b, "ipv6_dev_get_saddr" },
	{ 0x33338211, "rcuref_get_slowpath" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8ffe7e89, "nf_conntrack_htable_size" },
	{ 0x641eb8, "nf_ct_expect_related_report" },
	{ 0x816dfe80, "ip_route_me_harder" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7b748dd5, "nf_hook_entries_delete_raw" },
	{ 0xc9271504, "skb_ensure_writable" },
	{ 0xf4f62fa0, "nf_unregister_net_hooks" },
	{ 0x9e615eaf, "inet_select_addr" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x460ec0f, "nf_ct_invert_tuple" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0x201b4e4b, "skb_checksum" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xa6ee3b65, "nf_ct_delete" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xd2dce65, "nf_ip_checksum" },
	{ 0xd8ee4caf, "nf_ct_iterate_destroy" },
	{ 0xe4262c6, "__siphash_unaligned" },
	{ 0xb55a1390, "inet_proto_csum_replace16" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa8b21c85, "__put_net" },
	{ 0xb15b4109, "crc32c" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x6fcbf3b0, "__skb_checksum" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x67377444, "inet_proto_csum_replace4" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x5089f45f, "ip_send_check" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x986d6241, "dst_release" },
	{ 0x6a639cd7, "nf_ct_kill_acct" },
	{ 0x289c3714, "nf_ct_alloc_hashtable" },
	{ 0x4fbfd817, "nf_nat_hook" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack,libcrc32c");


MODULE_INFO(srcversion, "ED2CC4B3B5972AB45147997");
