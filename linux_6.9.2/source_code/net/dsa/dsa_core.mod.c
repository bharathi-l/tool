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

KSYMTAB_FUNC(dsa_devlink_param_get, "_gpl", "");
KSYMTAB_FUNC(dsa_devlink_param_set, "_gpl", "");
KSYMTAB_FUNC(dsa_devlink_params_register, "_gpl", "");
KSYMTAB_FUNC(dsa_devlink_params_unregister, "_gpl", "");
KSYMTAB_FUNC(dsa_devlink_resource_register, "_gpl", "");
KSYMTAB_FUNC(dsa_devlink_resources_unregister, "_gpl", "");
KSYMTAB_FUNC(dsa_devlink_resource_occ_get_register, "_gpl", "");
KSYMTAB_FUNC(dsa_devlink_resource_occ_get_unregister, "_gpl", "");
KSYMTAB_FUNC(dsa_devlink_region_create, "_gpl", "");
KSYMTAB_FUNC(dsa_devlink_port_region_create, "_gpl", "");
KSYMTAB_FUNC(dsa_devlink_region_destroy, "_gpl", "");
KSYMTAB_FUNC(dsa_flush_workqueue, "_gpl", "");
KSYMTAB_FUNC(dsa_switch_find, "_gpl", "");
KSYMTAB_FUNC(dsa_register_switch, "_gpl", "");
KSYMTAB_FUNC(dsa_unregister_switch, "_gpl", "");
KSYMTAB_FUNC(dsa_switch_shutdown, "_gpl", "");
KSYMTAB_FUNC(dsa_switch_suspend, "_gpl", "");
KSYMTAB_FUNC(dsa_switch_resume, "_gpl", "");
KSYMTAB_FUNC(dsa_port_from_netdev, "_gpl", "");
KSYMTAB_FUNC(dsa_fdb_present_in_other_db, "_gpl", "");
KSYMTAB_FUNC(dsa_mdb_present_in_other_db, "_gpl", "");
KSYMTAB_FUNC(dsa_tag_drivers_register, "_gpl", "");
KSYMTAB_FUNC(dsa_tag_drivers_unregister, "_gpl", "");
KSYMTAB_FUNC(dsa_tag_8021q_bridge_vid, "_gpl", "");
KSYMTAB_FUNC(dsa_tag_8021q_standalone_vid, "_gpl", "");
KSYMTAB_FUNC(dsa_8021q_rx_switch_id, "_gpl", "");
KSYMTAB_FUNC(dsa_8021q_rx_source_port, "_gpl", "");
KSYMTAB_FUNC(vid_is_dsa_8021q, "_gpl", "");
KSYMTAB_FUNC(dsa_tag_8021q_bridge_join, "_gpl", "");
KSYMTAB_FUNC(dsa_tag_8021q_bridge_leave, "_gpl", "");
KSYMTAB_FUNC(dsa_tag_8021q_register, "_gpl", "");
KSYMTAB_FUNC(dsa_tag_8021q_unregister, "_gpl", "");
KSYMTAB_FUNC(dsa_8021q_xmit, "_gpl", "");
KSYMTAB_FUNC(dsa_tag_8021q_find_port_by_vbid, "_gpl", "");
KSYMTAB_FUNC(dsa_8021q_rcv, "_gpl", "");
KSYMTAB_FUNC(dsa_enqueue_skb, "_gpl", "");
KSYMTAB_FUNC(dsa_port_phylink_mac_change, "_gpl", "");
KSYMTAB_FUNC(dsa_user_dev_check, "_gpl", "");

SYMBOL_CRC(dsa_devlink_param_get, 0xd077e855, "_gpl");
SYMBOL_CRC(dsa_devlink_param_set, 0xfd3e2b67, "_gpl");
SYMBOL_CRC(dsa_devlink_params_register, 0x47569f7f, "_gpl");
SYMBOL_CRC(dsa_devlink_params_unregister, 0x5bebb8a1, "_gpl");
SYMBOL_CRC(dsa_devlink_resource_register, 0x932415eb, "_gpl");
SYMBOL_CRC(dsa_devlink_resources_unregister, 0xe7b0a21a, "_gpl");
SYMBOL_CRC(dsa_devlink_resource_occ_get_register, 0x4c7ff57d, "_gpl");
SYMBOL_CRC(dsa_devlink_resource_occ_get_unregister, 0xb336b50f, "_gpl");
SYMBOL_CRC(dsa_devlink_region_create, 0x5bc9e72c, "_gpl");
SYMBOL_CRC(dsa_devlink_port_region_create, 0xb9e45e09, "_gpl");
SYMBOL_CRC(dsa_devlink_region_destroy, 0xc23e8d5f, "_gpl");
SYMBOL_CRC(dsa_flush_workqueue, 0x0c6039ac, "_gpl");
SYMBOL_CRC(dsa_switch_find, 0xa1f418a2, "_gpl");
SYMBOL_CRC(dsa_register_switch, 0x68afe851, "_gpl");
SYMBOL_CRC(dsa_unregister_switch, 0xdb52f9ed, "_gpl");
SYMBOL_CRC(dsa_switch_shutdown, 0x87870708, "_gpl");
SYMBOL_CRC(dsa_switch_suspend, 0x2ba27ced, "_gpl");
SYMBOL_CRC(dsa_switch_resume, 0x8e080f44, "_gpl");
SYMBOL_CRC(dsa_port_from_netdev, 0x6b0e8e7f, "_gpl");
SYMBOL_CRC(dsa_fdb_present_in_other_db, 0x51242379, "_gpl");
SYMBOL_CRC(dsa_mdb_present_in_other_db, 0x98c37cdb, "_gpl");
SYMBOL_CRC(dsa_tag_drivers_register, 0x86a2dbfd, "_gpl");
SYMBOL_CRC(dsa_tag_drivers_unregister, 0xce0b0456, "_gpl");
SYMBOL_CRC(dsa_tag_8021q_bridge_vid, 0x45ca5090, "_gpl");
SYMBOL_CRC(dsa_tag_8021q_standalone_vid, 0xc0e2a98f, "_gpl");
SYMBOL_CRC(dsa_8021q_rx_switch_id, 0x417d1fed, "_gpl");
SYMBOL_CRC(dsa_8021q_rx_source_port, 0x9e59271d, "_gpl");
SYMBOL_CRC(vid_is_dsa_8021q, 0xf13e1803, "_gpl");
SYMBOL_CRC(dsa_tag_8021q_bridge_join, 0x41965462, "_gpl");
SYMBOL_CRC(dsa_tag_8021q_bridge_leave, 0x0e63b6ab, "_gpl");
SYMBOL_CRC(dsa_tag_8021q_register, 0xb71c396d, "_gpl");
SYMBOL_CRC(dsa_tag_8021q_unregister, 0xbdb2090c, "_gpl");
SYMBOL_CRC(dsa_8021q_xmit, 0x967c7abb, "_gpl");
SYMBOL_CRC(dsa_tag_8021q_find_port_by_vbid, 0x2a37285f, "_gpl");
SYMBOL_CRC(dsa_8021q_rcv, 0xac809b58, "_gpl");
SYMBOL_CRC(dsa_enqueue_skb, 0x59273996, "_gpl");
SYMBOL_CRC(dsa_port_phylink_mac_change, 0x581d8887, "_gpl");
SYMBOL_CRC(dsa_user_dev_check, 0x1ad3910d, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc52cbf0d, "mdiobus_alloc_size" },
	{ 0xd06524ba, "raw_notifier_chain_unregister" },
	{ 0xc89b2272, "netdev_lower_get_next" },
	{ 0x88c5ef1e, "flow_block_cb_lookup" },
	{ 0xc60d0612, "switchdev_handle_port_obj_add_foreign" },
	{ 0x16c591a4, "devlink_resource_occ_get_unregister" },
	{ 0x44465aeb, "dev_set_mtu" },
	{ 0xd783d861, "br_vlan_enabled" },
	{ 0x42e5f7b5, "__skb_pad" },
	{ 0x18f58619, "try_module_get" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x567d845a, "skb_ensure_writable_head_tail" },
	{ 0x6048275b, "bpf_trace_run4" },
	{ 0x7ccafd2c, "devlink_unregister" },
	{ 0xac7da2f2, "__nlmsg_put" },
	{ 0xa851973a, "raw_notifier_call_chain" },
	{ 0xa410a295, "devlink_region_destroy" },
	{ 0xff910d36, "br_port_flag_is_set" },
	{ 0xb6f5a1f2, "devm_kmalloc" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x40336464, "call_switchdev_notifiers" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x6f6a25ce, "br_port_get_stp_state" },
	{ 0x9a25806b, "consume_skb" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xb0e602eb, "memmove" },
	{ 0x4a04c76c, "dev_add_pack" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x37aa794a, "is_hsr_master" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xbf9f77dc, "__netpoll_free" },
	{ 0x4c63d9dd, "trace_raw_output_prep" },
	{ 0x7705472, "br_vlan_get_proto" },
	{ 0x6142f792, "br_mst_get_state" },
	{ 0xfe71b7d9, "unregister_netdev" },
	{ 0x2b8ff6d1, "__trace_trigger_soft_disabled" },
	{ 0xb3e272c9, "trace_event_printf" },
	{ 0x537e2539, "dev_uc_del" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xad9e08f5, "netpoll_send_skb" },
	{ 0x39ec7d18, "rtnl_link_register" },
	{ 0x58b4645c, "dev_close_many" },
	{ 0xe2b3207a, "unregister_switchdev_notifier" },
	{ 0xa95842bc, "devlink_params_unregister" },
	{ 0xe86938b1, "devlink_port_attrs_set" },
	{ 0xc090c376, "net_selftest_get_strings" },
	{ 0x8959d336, "trace_event_raw_init" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x76abe870, "devlink_alloc_ns" },
	{ 0x583ba754, "dev_set_promiscuity" },
	{ 0xfa9bbe5b, "devlink_register" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x9f498574, "devlink_free" },
	{ 0x377f727b, "gro_cells_init" },
	{ 0xcf7b3b54, "bpf_trace_run2" },
	{ 0x1eff3830, "netdev_warn" },
	{ 0x38485abd, "unregister_netdevice_queue" },
	{ 0x1e1356e9, "get_device" },
	{ 0x75c8414a, "skb_pull_rcsum" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x52176b9e, "__dynamic_dev_dbg" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x89f8df2b, "ether_setup" },
	{ 0x2e901755, "switchdev_handle_fdb_event_to_device" },
	{ 0xdc9fa232, "raw_notifier_chain_register" },
	{ 0xeb6f6ea3, "netdev_err" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x2bdf1e29, "netdev_upper_dev_link" },
	{ 0xa2066eb8, "pskb_expand_head" },
	{ 0x3095c76, "switchdev_handle_port_attr_set" },
	{ 0xd495931, "phylink_create" },
	{ 0xd6585b1b, "vlan_for_each" },
	{ 0x459752a1, "netdev_port_same_parent_id" },
	{ 0xcc7c3ecf, "trace_event_buffer_commit" },
	{ 0x6178095e, "dev_addr_mod" },
	{ 0x28cca31b, "eth_type_trans" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x6373ea58, "alloc_netdev_mqs" },
	{ 0x122c3a7e, "_printk" },
	{ 0x3e7e39fa, "br_mst_get_info" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x857e23da, "vlan_dev_vlan_proto" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x56fa3780, "put_device" },
	{ 0x4edaf10d, "devlink_resource_register" },
	{ 0xe93a6e80, "netdev_upper_get_next_dev_rcu" },
	{ 0xa916b694, "strnlen" },
	{ 0x6fa426d2, "phylink_ethtool_nway_reset" },
	{ 0xfeb5bbc9, "netif_device_detach" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xfa575b03, "switchdev_bridge_port_offload" },
	{ 0x418fb0d8, "netif_device_attach" },
	{ 0x14f7bc5d, "phylink_ethtool_get_eee" },
	{ 0xd47a039c, "module_put" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x21fdfd3b, "ptp_classify_raw" },
	{ 0xb393284c, "dev_open" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xb19361bf, "devlink_region_create" },
	{ 0x59e8a6a1, "vlan_dev_real_dev" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0xe7f87e08, "__dev_get_by_index" },
	{ 0xd8dc1a8d, "rtnl_link_unregister" },
	{ 0xabcc6fb8, "perf_trace_run_bpf_submit" },
	{ 0x2f32e2d7, "devlink_port_unregister" },
	{ 0x56567557, "_dev_err" },
	{ 0xece43bce, "init_net" },
	{ 0x4f30f1bd, "noop_qdisc" },
	{ 0xf0c642a9, "phy_ethtool_get_strings" },
	{ 0x73559f81, "skb_vlan_untag" },
	{ 0x8677245d, "unregister_switchdev_blocking_notifier" },
	{ 0x742156c5, "dcb_ieee_getapp_mask" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0xe675d21a, "dev_remove_pack" },
	{ 0xa9563011, "bpf_trace_run5" },
	{ 0x983276da, "phylink_disconnect_phy" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xe7533c38, "gro_cells_receive" },
	{ 0xb55b74dc, "switchdev_handle_port_obj_del_foreign" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf8fe5642, "phylink_ethtool_get_pauseparam" },
	{ 0xe246278b, "skb_push" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x414ecb99, "netdev_upper_dev_unlink" },
	{ 0xd5a43273, "nla_put" },
	{ 0xccb7cf76, "dev_mc_del" },
	{ 0xa66f7ccc, "trace_event_reg" },
	{ 0x9b0a09f2, "br_vlan_get_info" },
	{ 0x589e0a2c, "free_netdev" },
	{ 0x911fcd6c, "phylink_start" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xaefe4a21, "mdiobus_free" },
	{ 0xe88633a5, "sysfs_create_group" },
	{ 0x501e0034, "devlink_resource_occ_get_register" },
	{ 0x15c4e3e2, "phylink_ethtool_set_pauseparam" },
	{ 0x12807459, "ethtool_op_get_link" },
	{ 0x5729625b, "device_find_child" },
	{ 0x6d294e43, "clock_t_to_jiffies" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd18ad2fd, "phylink_ethtool_set_eee" },
	{ 0x8213956, "phylink_ethtool_get_wol" },
	{ 0xb9ca4a34, "devlink_port_fini" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x3c1e9fa4, "switchdev_bridge_port_unoffload" },
	{ 0x5f821ccf, "_dev_warn" },
	{ 0x8a585fd9, "phy_ethtool_get_stats" },
	{ 0xdcb0a2c0, "phylink_stop" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xdfd8110c, "flow_block_cb_is_busy" },
	{ 0x7f153a93, "dev_get_tstats64" },
	{ 0xad645234, "register_switchdev_notifier" },
	{ 0x5cf52384, "netif_rx" },
	{ 0x6233c841, "dev_mc_add" },
	{ 0x9420e6a1, "flow_block_cb_alloc" },
	{ 0xd63c670, "br_vlan_get_pvid_rcu" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x4f4cb259, "__dynamic_netdev_dbg" },
	{ 0xaee35d50, "pv_ops" },
	{ 0xf37bc012, "sysfs_remove_group" },
	{ 0x5e682eb3, "net_selftest" },
	{ 0xfaf0475b, "bpf_trace_run3" },
	{ 0x46be59c8, "mdiobus_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa16449b4, "phylink_ethtool_ksettings_set" },
	{ 0xffa71cb8, "devlink_port_init" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x19e530c1, "__netpoll_setup" },
	{ 0x8e7a30bb, "__dev_queue_xmit" },
	{ 0x2aa79e96, "vlan_vid_add" },
	{ 0x6b9406ba, "devlink_params_register" },
	{ 0x2bc629e5, "trace_event_buffer_reserve" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x12135396, "phylink_mac_change" },
	{ 0x9e5aa58c, "vlan_vid_del" },
	{ 0xf96afcdc, "dev_set_allmulti" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xee38ef57, "register_switchdev_blocking_notifier" },
	{ 0x4361470e, "devlink_resources_unregister" },
	{ 0x24c9c75a, "netdev_master_upper_dev_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe10bc0d2, "netif_carrier_off" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xef428d13, "__vlan_find_dev_deep_rcu" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0x14bcc381, "devlink_port_region_create" },
	{ 0x8f72ae01, "devlink_priv" },
	{ 0x2db5a302, "skb_copy" },
	{ 0x971094d5, "__hw_addr_sync_dev" },
	{ 0x4373f3ce, "devlink_port_register_with_ops" },
	{ 0xf5ec568f, "mdiobus_get_phy" },
	{ 0x986d6241, "dst_release" },
	{ 0xf3083a1d, "phylink_destroy" },
	{ 0x2e3f1fc8, "__mdiobus_register" },
	{ 0x9616a255, "phylink_ethtool_ksettings_get" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xfdfa220e, "dev_uc_add" },
	{ 0x7edd3e6b, "vlan_dev_vlan_id" },
	{ 0x62104126, "phylink_ethtool_set_wol" },
	{ 0xba9ee018, "br_mst_enabled" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0xd2ef6a40, "phylink_mii_ioctl" },
	{ 0x6fcf49f6, "phylink_of_phy_connect" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x754d539c, "strlen" },
	{ 0x2eebc68d, "dev_kfree_skb_any_reason" },
	{ 0xd714641d, "dcb_ieee_delapp" },
	{ 0x8e6b1a9e, "net_selftest_get_count" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x6a344bf0, "device_link_add" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0xceab0311, "strchrnul" },
	{ 0xfc136204, "dsa_stubs" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0x2db33e6a, "dcb_ieee_setapp" },
	{ 0x94c2c8f1, "phy_ethtool_get_sset_count" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xc55e717d, "__skb_vlan_pop" },
	{ 0xe4baee94, "phylink_connect_phy" },
	{ 0xf701d462, "br_get_ageing_time" },
	{ 0x3c0dbc1e, "register_netdevice" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "bridge,hsr,phylink");


MODULE_INFO(srcversion, "F9B13DB99AAF84F09C74716");
