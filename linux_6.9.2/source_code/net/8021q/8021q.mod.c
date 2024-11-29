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
	{ 0x44465aeb, "dev_set_mtu" },
	{ 0xbc7e0083, "dev_get_stats" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xfd3522c0, "dev_mc_sync" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x61ff47b6, "mrp_request_join" },
	{ 0xcc294d45, "mrp_unregister_application" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xa529e434, "netdev_update_features" },
	{ 0x3d1059ea, "__nla_validate" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbf9f77dc, "__netpoll_free" },
	{ 0x8b3bc886, "dev_uc_sync" },
	{ 0x537e2539, "dev_uc_del" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xad9e08f5, "netpoll_send_skb" },
	{ 0x39ec7d18, "rtnl_link_register" },
	{ 0x58b4645c, "dev_close_many" },
	{ 0x6b8a3d22, "mrp_register_application" },
	{ 0x8ca2820a, "netif_inherit_tso_max" },
	{ 0x37a0cba, "kfree" },
	{ 0x583ba754, "dev_set_promiscuity" },
	{ 0xa20764c1, "eth_validate_addr" },
	{ 0x1eff3830, "netdev_warn" },
	{ 0x38485abd, "unregister_netdevice_queue" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x7dc62c3d, "garp_unregister_application" },
	{ 0x6114cf8a, "__dev_get_by_name" },
	{ 0xcc8786e7, "dev_uc_unsync" },
	{ 0x89f8df2b, "ether_setup" },
	{ 0x65f11366, "proc_create_net_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2bdf1e29, "netdev_upper_dev_link" },
	{ 0x1d8ee9a9, "mrp_init_applicant" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0x6178095e, "dev_addr_mod" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x6373ea58, "alloc_netdev_mqs" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xedc48d52, "eth_header_parse" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa916b694, "strnlen" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x6317a69a, "garp_request_leave" },
	{ 0xe7f87e08, "__dev_get_by_index" },
	{ 0xd8dc1a8d, "rtnl_link_unregister" },
	{ 0xb8de6a1, "generic_hwtstamp_set_lower" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x84aee605, "netif_stacked_transfer_operstate" },
	{ 0xe246278b, "skb_push" },
	{ 0x9e1ac287, "generic_hwtstamp_get_lower" },
	{ 0x414ecb99, "netdev_upper_dev_unlink" },
	{ 0xd5a43273, "nla_put" },
	{ 0x83a485b9, "garp_register_application" },
	{ 0x589e0a2c, "free_netdev" },
	{ 0x38085720, "ethtool_get_ts_info_by_layer" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x863b8d86, "ns_capable" },
	{ 0x12807459, "ethtool_op_get_link" },
	{ 0x57635f7a, "__ethtool_get_link_ksettings" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xfb578fc5, "memset" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x4b4d70ac, "vlan_ioctl_set" },
	{ 0xcce9deba, "proc_remove" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xaee35d50, "pv_ops" },
	{ 0xf54bb31a, "garp_init_applicant" },
	{ 0x19e530c1, "__netpoll_setup" },
	{ 0x8e7a30bb, "__dev_queue_xmit" },
	{ 0x2aa79e96, "vlan_vid_add" },
	{ 0x7062705b, "linkwatch_fire_event" },
	{ 0x960da8bf, "call_netdevice_notifiers" },
	{ 0x9e5aa58c, "vlan_vid_del" },
	{ 0x8fa25c24, "xa_find" },
	{ 0xf96afcdc, "dev_set_allmulti" },
	{ 0x63fd798c, "remove_proc_entry" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe10bc0d2, "netif_carrier_off" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x13fe5644, "seq_printf" },
	{ 0xbc8054bd, "netif_carrier_on" },
	{ 0xaa656f4e, "vlan_uses_dev" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x637ce858, "garp_request_join" },
	{ 0x8cf244f1, "seq_puts" },
	{ 0x9cbd991d, "_proc_mkdir" },
	{ 0xfdfa220e, "dev_uc_add" },
	{ 0x7edd3e6b, "vlan_dev_vlan_id" },
	{ 0x407cd584, "garp_uninit_applicant" },
	{ 0x8f9139cd, "proc_create_single_data" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xa58e11f7, "dev_get_flags" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x6b415818, "vlan_filter_drop_vids" },
	{ 0xdb1aa785, "mrp_request_leave" },
	{ 0x2a7b130c, "dev_mc_unsync" },
	{ 0x7e4e44a, "vlan_filter_push_vids" },
	{ 0x5b0a6c1c, "dev_change_flags" },
	{ 0x837b9cac, "mrp_uninit_applicant" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x3c0dbc1e, "register_netdevice" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "mrp,garp");


MODULE_INFO(srcversion, "1C1D22EEFC46D90330F6EB1");
