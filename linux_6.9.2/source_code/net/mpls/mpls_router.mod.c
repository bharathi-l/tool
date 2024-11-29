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

KSYMTAB_FUNC(mpls_output_possible, "_gpl", "");
KSYMTAB_FUNC(mpls_dev_mtu, "_gpl", "");
KSYMTAB_FUNC(mpls_pkt_too_big, "_gpl", "");
KSYMTAB_FUNC(mpls_stats_inc_outucastpkts, "_gpl", "");
KSYMTAB_FUNC(nla_put_labels, "_gpl", "");
KSYMTAB_FUNC(nla_get_labels, "_gpl", "");

SYMBOL_CRC(mpls_output_possible, 0x04200c6b, "_gpl");
SYMBOL_CRC(mpls_dev_mtu, 0x335a3245, "_gpl");
SYMBOL_CRC(mpls_pkt_too_big, 0x9a2ef8b0, "_gpl");
SYMBOL_CRC(mpls_stats_inc_outucastpkts, 0x9a41c7c0, "_gpl");
SYMBOL_CRC(nla_put_labels, 0x75125ef4, "_gpl");
SYMBOL_CRC(nla_get_labels, 0xde3cca7e, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x427af7f7, "ip_tunnel_encap_add_ops" },
	{ 0x95952d4c, "netlink_strict_get_check" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xac7da2f2, "__nlmsg_put" },
	{ 0xfd7c40c, "skb_gso_validate_network_len" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x9a25806b, "consume_skb" },
	{ 0x4a04c76c, "dev_add_pack" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xca9e776c, "nla_reserve" },
	{ 0x579e0bf5, "rtnl_unregister_all" },
	{ 0xd4829999, "neigh_xmit" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x983836c5, "ip_route_output_flow" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa2066eb8, "pskb_expand_head" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0xb3012895, "register_net_sysctl_sz" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9447b7f4, "rtnl_af_register" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0x50314131, "rtnl_set_sk_err" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xbdb1ac9, "rtnl_unicast" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x6350d90a, "nla_reserve_64bit" },
	{ 0xdbcd6f40, "ip_valid_fib_dump_req" },
	{ 0xe7f87e08, "__dev_get_by_index" },
	{ 0x3ab5d439, "ipv6_stub" },
	{ 0xc084677a, "skb_pull" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x30b6b483, "nla_reserve_nohdr" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xfe856050, "rtnl_af_unregister" },
	{ 0xe675d21a, "dev_remove_pack" },
	{ 0xc0cb301e, "dev_get_by_index" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xe246278b, "skb_push" },
	{ 0xd5a43273, "nla_put" },
	{ 0xcd279169, "nla_find" },
	{ 0xebc63a97, "__skb_warn_lro_forwarding" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xadb3c445, "rtnl_register_module" },
	{ 0x279a19e6, "ip_tunnel_encap_del_ops" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x9d046b08, "rtnl_notify" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xf1de5c0a, "skb_clone" },
	{ 0x986d6241, "dst_release" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf94536c2, "proc_dointvec" },
	{ 0xb805d2b3, "unregister_net_sysctl_table" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0xa58e11f7, "dev_get_flags" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x2801a22f, "proc_dointvec_minmax" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "ip_tunnel");


MODULE_INFO(srcversion, "374962B9E6947F0761442D7");
