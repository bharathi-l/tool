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
	{ 0xda3da7b4, "rt6_lookup" },
	{ 0x986d6241, "dst_release" },
	{ 0xe7f87e08, "__dev_get_by_index" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x56470118, "__warn_printk" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xbf8446f1, "__xfrm_decode_session" },
	{ 0x2b3cbef0, "ip6_route_output_flags" },
	{ 0x734eb1e0, "xfrm_lookup_route" },
	{ 0x714fd6f6, "ip6_tnl_xmit_ctl" },
	{ 0x6e068e63, "ip6_mtu" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xef65c679, "icmp_ndo_send" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0x1fc41b36, "skb_scrub_packet" },
	{ 0xff0bd83a, "ip6_output" },
	{ 0xf3be8f92, "ip_route_output_key_hash" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x33338211, "rcuref_get_slowpath" },
	{ 0xeff25db6, "ip_output" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x9c6690db, "ipv4_mtu" },
	{ 0x3ce61ef0, "icmpv6_ndo_send" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xfdd6607c, "__xfrm_policy_check" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x3c0dbc1e, "register_netdevice" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3abbdae8, "netdev_state_change" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x863b8d86, "ns_capable" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x49cbcd9f, "xfrm_state_lookup" },
	{ 0x1da035f6, "make_kuid" },
	{ 0x6fae2ed8, "ip6_update_pmtu" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x1d205469, "ip6_redirect" },
	{ 0x6a83f01d, "__xfrm_state_destroy" },
	{ 0x4158ebc9, "ip6_tnl_rcv_ctl" },
	{ 0xb12c8f07, "xfrm_input" },
	{ 0xf6d59cb3, "xfrm6_tunnel_spi_lookup" },
	{ 0x7f153a93, "dev_get_tstats64" },
	{ 0x48b203d8, "ip6_tnl_get_iflink" },
	{ 0x9c9fb82b, "ip6_tnl_get_link_net" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xa802aea8, "register_pernet_device" },
	{ 0x95877199, "xfrm6_protocol_register" },
	{ 0x69670d46, "xfrm6_tunnel_register" },
	{ 0x39ec7d18, "rtnl_link_register" },
	{ 0xc35e0b3f, "xfrm6_tunnel_deregister" },
	{ 0x649555a7, "xfrm6_protocol_deregister" },
	{ 0xeba8170b, "unregister_pernet_device" },
	{ 0x122c3a7e, "_printk" },
	{ 0xd5a43273, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x38485abd, "unregister_netdevice_queue" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xf260e272, "ip_tunnel_header_ops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0xece43bce, "init_net" },
	{ 0x6373ea58, "alloc_netdev_mqs" },
	{ 0x9ecb4adc, "register_netdev" },
	{ 0xa916b694, "strnlen" },
	{ 0x589e0a2c, "free_netdev" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xd8dc1a8d, "rtnl_link_unregister" },
	{ 0x6178095e, "dev_addr_mod" },
	{ 0x70bb122a, "ip6_tnl_get_cap" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "ip6_tunnel,xfrm6_tunnel,tunnel6");


MODULE_INFO(srcversion, "C50752C6A6D67903D1C07DD");
