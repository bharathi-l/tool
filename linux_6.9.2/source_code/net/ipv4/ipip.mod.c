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
	{ 0x7d21ecf2, "ipv4_redirect" },
	{ 0x1bbedab5, "ip_tunnel_delete_nets" },
	{ 0xc63be19f, "ip_tunnel_init_net" },
	{ 0xd8dc1a8d, "rtnl_link_unregister" },
	{ 0xd5a43273, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x3e903560, "ip_tunnel_netlink_encap_parms" },
	{ 0x3c04d2af, "ip_tunnel_encap_setup" },
	{ 0x2a2f04fa, "ip_tunnel_netlink_parms" },
	{ 0xfe83a30b, "ip_tunnel_changelink" },
	{ 0x69778625, "iptunnel_handle_offloads" },
	{ 0x84f2a684, "ip_md_tunnel_xmit" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0xd80ce1c8, "ip_tunnel_xmit" },
	{ 0x6178095e, "dev_addr_mod" },
	{ 0x67dcc61b, "ip_tunnel_init" },
	{ 0xbe3db961, "__iptunnel_pull_header" },
	{ 0xdc6848c4, "ip_tunnel_rcv" },
	{ 0xfdd6607c, "__xfrm_policy_check" },
	{ 0x2014dec3, "metadata_dst_alloc" },
	{ 0x71de2091, "ip_tunnel_md_udp_encap" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x8e68bc9d, "ip_tunnel_newlink" },
	{ 0xe1477a06, "ip_tunnel_uninit" },
	{ 0x1a5de8be, "ip_tunnel_siocdevprivate" },
	{ 0xccf68d9a, "ip_tunnel_change_mtu" },
	{ 0x7f153a93, "dev_get_tstats64" },
	{ 0xcdf40412, "ip_tunnel_get_iflink" },
	{ 0x862f202, "ip_tunnel_dellink" },
	{ 0x178690e9, "ip_tunnel_get_link_net" },
	{ 0xa3f425cf, "param_ops_bool" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x122c3a7e, "_printk" },
	{ 0xa802aea8, "register_pernet_device" },
	{ 0x90ad10da, "xfrm4_tunnel_register" },
	{ 0x39ec7d18, "rtnl_link_register" },
	{ 0xeba8170b, "unregister_pernet_device" },
	{ 0x78c3c54, "xfrm4_tunnel_deregister" },
	{ 0xf260e272, "ip_tunnel_header_ops" },
	{ 0x86531484, "ip_tunnel_setup" },
	{ 0xee846f6b, "ip_tunnel_ctl" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xfdc293c0, "ip_tunnel_lookup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb5e7370, "ipv4_update_pmtu" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "ip_tunnel,tunnel4");


MODULE_INFO(srcversion, "2122FF18D34EAFA2F61C699");
