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

KSYMTAB_FUNC(ip_tunnel_lookup, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_md_udp_encap, "", "");
KSYMTAB_FUNC(ip_tunnel_rcv, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_encap_add_ops, "", "");
KSYMTAB_FUNC(ip_tunnel_encap_del_ops, "", "");
KSYMTAB_FUNC(ip_tunnel_encap_setup, "_gpl", "");
KSYMTAB_FUNC(ip_md_tunnel_xmit, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_xmit, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_ctl, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_siocdevprivate, "_gpl", "");
KSYMTAB_FUNC(__ip_tunnel_change_mtu, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_change_mtu, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_dellink, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_get_link_net, "", "");
KSYMTAB_FUNC(ip_tunnel_get_iflink, "", "");
KSYMTAB_FUNC(ip_tunnel_init_net, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_delete_nets, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_newlink, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_changelink, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_init, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_uninit, "_gpl", "");
KSYMTAB_FUNC(ip_tunnel_setup, "_gpl", "");

SYMBOL_CRC(ip_tunnel_lookup, 0xfdc293c0, "_gpl");
SYMBOL_CRC(ip_tunnel_md_udp_encap, 0x71de2091, "");
SYMBOL_CRC(ip_tunnel_rcv, 0xdc6848c4, "_gpl");
SYMBOL_CRC(ip_tunnel_encap_add_ops, 0x427af7f7, "");
SYMBOL_CRC(ip_tunnel_encap_del_ops, 0x279a19e6, "");
SYMBOL_CRC(ip_tunnel_encap_setup, 0x3c04d2af, "_gpl");
SYMBOL_CRC(ip_md_tunnel_xmit, 0x84f2a684, "_gpl");
SYMBOL_CRC(ip_tunnel_xmit, 0xd80ce1c8, "_gpl");
SYMBOL_CRC(ip_tunnel_ctl, 0xee846f6b, "_gpl");
SYMBOL_CRC(ip_tunnel_siocdevprivate, 0x1a5de8be, "_gpl");
SYMBOL_CRC(__ip_tunnel_change_mtu, 0x3bd5e326, "_gpl");
SYMBOL_CRC(ip_tunnel_change_mtu, 0xccf68d9a, "_gpl");
SYMBOL_CRC(ip_tunnel_dellink, 0x0862f202, "_gpl");
SYMBOL_CRC(ip_tunnel_get_link_net, 0x178690e9, "");
SYMBOL_CRC(ip_tunnel_get_iflink, 0xcdf40412, "");
SYMBOL_CRC(ip_tunnel_init_net, 0xc63be19f, "_gpl");
SYMBOL_CRC(ip_tunnel_delete_nets, 0x1bbedab5, "_gpl");
SYMBOL_CRC(ip_tunnel_newlink, 0x8e68bc9d, "_gpl");
SYMBOL_CRC(ip_tunnel_changelink, 0xfe83a30b, "_gpl");
SYMBOL_CRC(ip_tunnel_init, 0x67dcc61b, "_gpl");
SYMBOL_CRC(ip_tunnel_uninit, 0xe1477a06, "_gpl");
SYMBOL_CRC(ip_tunnel_setup, 0x86531484, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x82b5810f, "iptun_encaps" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x754d539c, "strlen" },
	{ 0xa916b694, "strnlen" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x6373ea58, "alloc_netdev_mqs" },
	{ 0x3c0dbc1e, "register_netdevice" },
	{ 0x589e0a2c, "free_netdev" },
	{ 0x56470118, "__warn_printk" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x38485abd, "unregister_netdevice_queue" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x377f727b, "gro_cells_init" },
	{ 0x983836c5, "ip_route_output_flow" },
	{ 0x986d6241, "dst_release" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe7f87e08, "__dev_get_by_index" },
	{ 0x48bd2942, "l3mdev_master_upper_ifindex_by_index_rcu" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xece43bce, "init_net" },
	{ 0x6178095e, "dev_addr_mod" },
	{ 0x3abbdae8, "netdev_state_change" },
	{ 0x863b8d86, "ns_capable" },
	{ 0x44465aeb, "dev_set_mtu" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x1fc41b36, "skb_scrub_packet" },
	{ 0xe7533c38, "gro_cells_receive" },
	{ 0x28cca31b, "eth_type_trans" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0x6e068e63, "ip6_mtu" },
	{ 0x3ce61ef0, "icmpv6_ndo_send" },
	{ 0xef65c679, "icmp_ndo_send" },
	{ 0x9c6690db, "ipv4_mtu" },
	{ 0x9e7d38ef, "dst_cache_get_ip4" },
	{ 0xa2066eb8, "pskb_expand_head" },
	{ 0xb65b063c, "__skb_get_hash" },
	{ 0x5d9cd01, "dst_cache_set_ip4" },
	{ 0xf0959432, "iptunnel_xmit" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x385e8aec, "neigh_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F25ED66B982D2A23AF8A56A");
