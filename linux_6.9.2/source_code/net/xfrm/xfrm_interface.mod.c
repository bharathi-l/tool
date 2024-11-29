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
	{ 0x649555a7, "xfrm6_protocol_deregister" },
	{ 0x52ed276d, "xfrm6_rcv" },
	{ 0x69670d46, "xfrm6_tunnel_register" },
	{ 0xfd7c40c, "skb_gso_validate_network_len" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xeff25db6, "ip_output" },
	{ 0x90ad10da, "xfrm4_tunnel_register" },
	{ 0xbf8446f1, "__xfrm_decode_session" },
	{ 0x7d7b346f, "__skb_ext_del" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x39ec7d18, "rtnl_link_register" },
	{ 0xf260e272, "ip_tunnel_header_ops" },
	{ 0x49cbcd9f, "xfrm_state_lookup" },
	{ 0xff0bd83a, "ip6_output" },
	{ 0xfdd6607c, "__xfrm_policy_check" },
	{ 0x377f727b, "gro_cells_init" },
	{ 0x96cd7ea4, "xfrm4_protocol_register" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x849536b3, "xfrm6_rcv_spi" },
	{ 0x38485abd, "unregister_netdevice_queue" },
	{ 0x9743ea94, "xfrm4_rcv" },
	{ 0x6a83f01d, "__xfrm_state_destroy" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0x3abbdae8, "netdev_state_change" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6fae2ed8, "ip6_update_pmtu" },
	{ 0x6178095e, "dev_addr_mod" },
	{ 0xc0a703a9, "xfrm_lookup_with_ifid" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x7d21ecf2, "ipv4_redirect" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x1da035f6, "make_kuid" },
	{ 0x2b3cbef0, "ip6_route_output_flags" },
	{ 0xf3be8f92, "ip_route_output_key_hash" },
	{ 0x3ce61ef0, "icmpv6_ndo_send" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x582b6275, "xfrm_if_unregister_cb" },
	{ 0x33338211, "rcuref_get_slowpath" },
	{ 0xe7f87e08, "__dev_get_by_index" },
	{ 0xd8dc1a8d, "rtnl_link_unregister" },
	{ 0xf6d59cb3, "xfrm6_tunnel_spi_lookup" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6e068e63, "ip6_mtu" },
	{ 0x7990f761, "dev_get_by_index_rcu" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xef65c679, "icmp_ndo_send" },
	{ 0xb12c8f07, "xfrm_input" },
	{ 0xd5a43273, "nla_put" },
	{ 0xeba8170b, "unregister_pernet_device" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x7f153a93, "dev_get_tstats64" },
	{ 0x1d205469, "ip6_redirect" },
	{ 0x7f2dc4a6, "lwtunnel_state_alloc" },
	{ 0xbc478655, "xfrm_if_register_cb" },
	{ 0x9c6690db, "ipv4_mtu" },
	{ 0x56470118, "__warn_printk" },
	{ 0xad24d405, "xfrm4_protocol_deregister" },
	{ 0xb5e7370, "ipv4_update_pmtu" },
	{ 0x2014dec3, "metadata_dst_alloc" },
	{ 0x986d6241, "dst_release" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xe6a6bad8, "lwtunnel_encap_add_ops" },
	{ 0xa802aea8, "register_pernet_device" },
	{ 0x1e478da3, "lwtunnel_encap_del_ops" },
	{ 0xc35e0b3f, "xfrm6_tunnel_deregister" },
	{ 0x78c3c54, "xfrm4_tunnel_deregister" },
	{ 0x95877199, "xfrm6_protocol_register" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x3c0dbc1e, "register_netdevice" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "tunnel6,tunnel4,xfrm6_tunnel");


MODULE_INFO(srcversion, "88D2D03F588E1FAAE86338A");
