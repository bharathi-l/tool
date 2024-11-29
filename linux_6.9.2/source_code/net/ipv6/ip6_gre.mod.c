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
	{ 0x4db268e7, "gre_parse_header" },
	{ 0x1d205469, "ip6_redirect" },
	{ 0x6fae2ed8, "ip6_update_pmtu" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xbe3db961, "__iptunnel_pull_header" },
	{ 0x2d3250b, "ip6_tnl_rcv" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0x17feaa56, "icmp6_send" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x2014dec3, "metadata_dst_alloc" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x9fe5eb12, "ip6_tnl_xmit" },
	{ 0xa2066eb8, "pskb_expand_head" },
	{ 0x714fd6f6, "ip6_tnl_xmit_ctl" },
	{ 0x69778625, "iptunnel_handle_offloads" },
	{ 0xef65c679, "icmp_ndo_send" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x863b8d86, "ns_capable" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x3abbdae8, "netdev_state_change" },
	{ 0xd5a43273, "nla_put" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x692ed195, "___pskb_trim" },
	{ 0x6e068e63, "ip6_mtu" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x9c6690db, "ipv4_mtu" },
	{ 0xc169e3e4, "eth_mac_addr" },
	{ 0xa20764c1, "eth_validate_addr" },
	{ 0x7f153a93, "dev_get_tstats64" },
	{ 0x48b203d8, "ip6_tnl_get_iflink" },
	{ 0x9c9fb82b, "ip6_tnl_get_link_net" },
	{ 0xa3f425cf, "param_ops_bool" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x122c3a7e, "_printk" },
	{ 0xa802aea8, "register_pernet_device" },
	{ 0xf9f9ed2, "inet6_add_protocol" },
	{ 0x39ec7d18, "rtnl_link_register" },
	{ 0xd8dc1a8d, "rtnl_link_unregister" },
	{ 0x3126ab0d, "inet6_del_protocol" },
	{ 0xeba8170b, "unregister_pernet_device" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x38485abd, "unregister_netdevice_queue" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xda3da7b4, "rt6_lookup" },
	{ 0x986d6241, "dst_release" },
	{ 0x89f8df2b, "ether_setup" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0xece43bce, "init_net" },
	{ 0x6373ea58, "alloc_netdev_mqs" },
	{ 0xa916b694, "strnlen" },
	{ 0x9ecb4adc, "register_netdev" },
	{ 0x589e0a2c, "free_netdev" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x6178095e, "dev_addr_mod" },
	{ 0x70bb122a, "ip6_tnl_get_cap" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x56470118, "__warn_printk" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xe246278b, "skb_push" },
	{ 0x79d219c0, "__get_hash_from_flowi6" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x377f727b, "gro_cells_init" },
	{ 0x57430d53, "ip6_tnl_encap_setup" },
	{ 0x3c0dbc1e, "register_netdevice" },
	{ 0xef7c16fb, "ip6_tnl_change_mtu" },
	{ 0x1da035f6, "make_kuid" },
	{ 0x3589ef88, "ip6_tnl_parse_tlv_enc_lim" },
	{ 0x3ce61ef0, "icmpv6_ndo_send" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "gre,ip6_tunnel");


MODULE_INFO(srcversion, "9380FF5F100FF642453472B");
