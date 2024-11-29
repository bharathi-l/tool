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

KSYMTAB_FUNC(udp_sock_create4, "", "");
KSYMTAB_FUNC(setup_udp_tunnel_sock, "_gpl", "");
KSYMTAB_FUNC(udp_tunnel_push_rx_port, "_gpl", "");
KSYMTAB_FUNC(udp_tunnel_drop_rx_port, "_gpl", "");
KSYMTAB_FUNC(udp_tunnel_notify_add_rx_port, "_gpl", "");
KSYMTAB_FUNC(udp_tunnel_notify_del_rx_port, "_gpl", "");
KSYMTAB_FUNC(udp_tunnel_xmit_skb, "_gpl", "");
KSYMTAB_FUNC(udp_tunnel_sock_release, "_gpl", "");
KSYMTAB_FUNC(udp_tun_rx_dst, "_gpl", "");
KSYMTAB_FUNC(udp_tunnel_dst_lookup, "_gpl", "");

SYMBOL_CRC(udp_sock_create4, 0x0a5cecfa, "");
SYMBOL_CRC(setup_udp_tunnel_sock, 0xe6778d60, "_gpl");
SYMBOL_CRC(udp_tunnel_push_rx_port, 0xc426a036, "_gpl");
SYMBOL_CRC(udp_tunnel_drop_rx_port, 0xd6de0538, "_gpl");
SYMBOL_CRC(udp_tunnel_notify_add_rx_port, 0x276f66a1, "_gpl");
SYMBOL_CRC(udp_tunnel_notify_del_rx_port, 0x4aa01f37, "_gpl");
SYMBOL_CRC(udp_tunnel_xmit_skb, 0xe73f81dd, "_gpl");
SYMBOL_CRC(udp_tunnel_sock_release, 0x218e3219, "_gpl");
SYMBOL_CRC(udp_tun_rx_dst, 0xeffce20b, "_gpl");
SYMBOL_CRC(udp_tunnel_dst_lookup, 0x1cdea7d7, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5d9cd01, "dst_cache_set_ip4" },
	{ 0x4bbbcb6f, "kernel_bind" },
	{ 0x32a66e33, "udp_set_csum" },
	{ 0x37a0cba, "kfree" },
	{ 0x1eff3830, "netdev_warn" },
	{ 0x88c8977b, "udp_tunnel_nic_ops" },
	{ 0x983836c5, "ip_route_output_flow" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x3ab5d439, "ipv6_stub" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x99517682, "udp_encap_enable" },
	{ 0x9604c6bb, "kernel_sock_shutdown" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf0959432, "iptunnel_xmit" },
	{ 0xd5a43273, "nla_put" },
	{ 0xa49408df, "kernel_connect" },
	{ 0xfb578fc5, "memset" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x4f4cb259, "__dynamic_netdev_dbg" },
	{ 0x9e7d38ef, "dst_cache_get_ip4" },
	{ 0xb3824a12, "sock_create_kern" },
	{ 0x960da8bf, "call_netdevice_notifiers" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x2014dec3, "metadata_dst_alloc" },
	{ 0x986d6241, "dst_release" },
	{ 0x26ed65de, "sock_release" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x1622bd4, "sock_bindtoindex" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x349cba85, "strchr" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B4493AA995C0ED73C34AD0A");
