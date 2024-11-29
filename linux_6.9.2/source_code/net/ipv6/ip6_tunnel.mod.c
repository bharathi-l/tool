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

KSYMTAB_FUNC(ip6_tnl_parse_tlv_enc_lim, "", "");
KSYMTAB_FUNC(ip6_tnl_get_cap, "", "");
KSYMTAB_FUNC(ip6_tnl_rcv_ctl, "_gpl", "");
KSYMTAB_FUNC(ip6_tnl_rcv, "", "");
KSYMTAB_FUNC(ip6_tnl_xmit_ctl, "_gpl", "");
KSYMTAB_FUNC(ip6_tnl_xmit, "", "");
KSYMTAB_FUNC(ip6_tnl_change_mtu, "", "");
KSYMTAB_FUNC(ip6_tnl_get_iflink, "", "");
KSYMTAB_FUNC(ip6_tnl_encap_add_ops, "", "");
KSYMTAB_FUNC(ip6_tnl_encap_del_ops, "", "");
KSYMTAB_FUNC(ip6_tnl_encap_setup, "_gpl", "");
KSYMTAB_FUNC(ip6_tnl_get_link_net, "", "");

SYMBOL_CRC(ip6_tnl_parse_tlv_enc_lim, 0x3589ef88, "");
SYMBOL_CRC(ip6_tnl_get_cap, 0x70bb122a, "");
SYMBOL_CRC(ip6_tnl_rcv_ctl, 0x4158ebc9, "_gpl");
SYMBOL_CRC(ip6_tnl_rcv, 0x02d3250b, "");
SYMBOL_CRC(ip6_tnl_xmit_ctl, 0x714fd6f6, "_gpl");
SYMBOL_CRC(ip6_tnl_xmit, 0x9fe5eb12, "");
SYMBOL_CRC(ip6_tnl_change_mtu, 0xef7c16fb, "");
SYMBOL_CRC(ip6_tnl_get_iflink, 0x48b203d8, "");
SYMBOL_CRC(ip6_tnl_encap_add_ops, 0x38e34747, "");
SYMBOL_CRC(ip6_tnl_encap_del_ops, 0xbdf3d395, "");
SYMBOL_CRC(ip6_tnl_encap_setup, 0x57430d53, "_gpl");
SYMBOL_CRC(ip6_tnl_get_link_net, 0x9c9fb82b, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x589e0a2c, "free_netdev" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xd8dc1a8d, "rtnl_link_unregister" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xd5a43273, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6178095e, "dev_addr_mod" },
	{ 0xda3da7b4, "rt6_lookup" },
	{ 0x986d6241, "dst_release" },
	{ 0xe7f87e08, "__dev_get_by_index" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x377f727b, "gro_cells_init" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x56470118, "__warn_printk" },
	{ 0x79d219c0, "__get_hash_from_flowi6" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3c0dbc1e, "register_netdevice" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3e903560, "ip_tunnel_netlink_encap_parms" },
	{ 0x3abbdae8, "netdev_state_change" },
	{ 0x863b8d86, "ns_capable" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x1da035f6, "make_kuid" },
	{ 0x1d205469, "ip6_redirect" },
	{ 0x6fae2ed8, "ip6_update_pmtu" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xaa96cad3, "dst_cache_get" },
	{ 0x2b3cbef0, "ip6_route_output_flags" },
	{ 0xa629c6cf, "xfrm_lookup" },
	{ 0x6e068e63, "ip6_mtu" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x1fc41b36, "skb_scrub_packet" },
	{ 0xb6983911, "skb_realloc_headroom" },
	{ 0x1a8c0f81, "skb_set_owner_w" },
	{ 0x9a25806b, "consume_skb" },
	{ 0xc2bb40e, "ipv6_push_frag_opts" },
	{ 0xe246278b, "skb_push" },
	{ 0xa5c10cfa, "ip6_local_out" },
	{ 0xcdfb2c95, "dst_cache_set_ip6" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x5158bba8, "ip6_dst_hoplimit" },
	{ 0x9c6690db, "ipv4_mtu" },
	{ 0x49029e4b, "ipv6_dev_get_saddr" },
	{ 0x385e8aec, "neigh_destroy" },
	{ 0x69778625, "iptunnel_handle_offloads" },
	{ 0x3ce61ef0, "icmpv6_ndo_send" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xef65c679, "icmp_ndo_send" },
	{ 0xf1de5c0a, "skb_clone" },
	{ 0xc084677a, "skb_pull" },
	{ 0x17feaa56, "icmp6_send" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0xe7533c38, "gro_cells_receive" },
	{ 0x28cca31b, "eth_type_trans" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xfdd6607c, "__xfrm_policy_check" },
	{ 0xbe3db961, "__iptunnel_pull_header" },
	{ 0x2014dec3, "metadata_dst_alloc" },
	{ 0x983836c5, "ip_route_output_flow" },
	{ 0x7e75a225, "ip_route_input_noref" },
	{ 0x2041fe35, "__icmp_send" },
	{ 0x33338211, "rcuref_get_slowpath" },
	{ 0x7f153a93, "dev_get_tstats64" },
	{ 0xa3f425cf, "param_ops_bool" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x57f29630, "ip6tun_encaps" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x5053ef, "ipv6_chk_addr_and_flags" },
	{ 0x7990f761, "dev_get_by_index_rcu" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0xa802aea8, "register_pernet_device" },
	{ 0x69670d46, "xfrm6_tunnel_register" },
	{ 0x39ec7d18, "rtnl_link_register" },
	{ 0x122c3a7e, "_printk" },
	{ 0xeba8170b, "unregister_pernet_device" },
	{ 0xc35e0b3f, "xfrm6_tunnel_deregister" },
	{ 0x38485abd, "unregister_netdevice_queue" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0xf260e272, "ip_tunnel_header_ops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0xece43bce, "init_net" },
	{ 0x6373ea58, "alloc_netdev_mqs" },
	{ 0x9ecb4adc, "register_netdev" },
	{ 0xa916b694, "strnlen" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "tunnel6");


MODULE_INFO(srcversion, "50E4E0613746F3BD663EAD8");
