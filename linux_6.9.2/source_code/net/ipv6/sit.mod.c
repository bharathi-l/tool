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
	{ 0xd80ce1c8, "ip_tunnel_xmit" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0xece43bce, "init_net" },
	{ 0x6373ea58, "alloc_netdev_mqs" },
	{ 0x9ecb4adc, "register_netdev" },
	{ 0xa916b694, "strnlen" },
	{ 0x589e0a2c, "free_netdev" },
	{ 0x6178095e, "dev_addr_mod" },
	{ 0x3c0dbc1e, "register_netdevice" },
	{ 0xbe3db961, "__iptunnel_pull_header" },
	{ 0xdc6848c4, "ip_tunnel_rcv" },
	{ 0xfdd6607c, "__xfrm_policy_check" },
	{ 0x1da035f6, "make_kuid" },
	{ 0x983836c5, "ip_route_output_flow" },
	{ 0x986d6241, "dst_release" },
	{ 0xe7f87e08, "__dev_get_by_index" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x3193c2b9, "ipv6_chk_custom_prefix" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x5cf52384, "netif_rx" },
	{ 0x3bd00d35, "ipv6_chk_prefix" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x9e7d38ef, "dst_cache_get_ip4" },
	{ 0xb6983911, "skb_realloc_headroom" },
	{ 0x1a8c0f81, "skb_set_owner_w" },
	{ 0x9a25806b, "consume_skb" },
	{ 0x82b5810f, "iptun_encaps" },
	{ 0xf0959432, "iptunnel_xmit" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x5d9cd01, "dst_cache_set_ip4" },
	{ 0x385e8aec, "neigh_destroy" },
	{ 0x6e068e63, "ip6_mtu" },
	{ 0x3ce61ef0, "icmpv6_ndo_send" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x9c6690db, "ipv4_mtu" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x1a5de8be, "ip_tunnel_siocdevprivate" },
	{ 0xc6cbbc89, "capable" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x3e903560, "ip_tunnel_netlink_encap_parms" },
	{ 0x3c04d2af, "ip_tunnel_encap_setup" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xcdf40412, "ip_tunnel_get_iflink" },
	{ 0x178690e9, "ip_tunnel_get_link_net" },
	{ 0xa3f425cf, "param_ops_bool" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf260e272, "ip_tunnel_header_ops" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x122c3a7e, "_printk" },
	{ 0xa802aea8, "register_pernet_device" },
	{ 0x90ad10da, "xfrm4_tunnel_register" },
	{ 0x39ec7d18, "rtnl_link_register" },
	{ 0xeba8170b, "unregister_pernet_device" },
	{ 0x78c3c54, "xfrm4_tunnel_deregister" },
	{ 0xd5a43273, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x38485abd, "unregister_netdevice_queue" },
	{ 0x2a2f04fa, "ip_tunnel_netlink_parms" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x2f22ccff, "ip6_err_gen_icmpv6_unreach" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb5e7370, "ipv4_update_pmtu" },
	{ 0x7d21ecf2, "ipv4_redirect" },
	{ 0xd8dc1a8d, "rtnl_link_unregister" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x3abbdae8, "netdev_state_change" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x56470118, "__warn_printk" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x863b8d86, "ns_capable" },
	{ 0x69778625, "iptunnel_handle_offloads" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "ip_tunnel,tunnel4");


MODULE_INFO(srcversion, "4D17DB8C550BBD92E589F00");
