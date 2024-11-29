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

KSYMTAB_DATA(nf_br_ops, "_gpl", "");
KSYMTAB_FUNC(br_fdb_find_port, "_gpl", "");
KSYMTAB_FUNC(br_fdb_clear_offload, "_gpl", "");
KSYMTAB_FUNC(br_dev_queue_push_xmit, "_gpl", "");
KSYMTAB_FUNC(br_forward_finish, "_gpl", "");
KSYMTAB_FUNC(br_forward, "_gpl", "");
KSYMTAB_FUNC(br_port_flag_is_set, "_gpl", "");
KSYMTAB_FUNC(br_handle_frame_finish, "_gpl", "");
KSYMTAB_FUNC(br_port_get_stp_state, "_gpl", "");
KSYMTAB_FUNC(br_get_ageing_time, "_gpl", "");
KSYMTAB_FUNC(br_multicast_enabled, "_gpl", "");
KSYMTAB_FUNC(br_multicast_router, "_gpl", "");
KSYMTAB_FUNC(br_multicast_list_adjacent, "_gpl", "");
KSYMTAB_FUNC(br_multicast_has_querier_anywhere, "_gpl", "");
KSYMTAB_FUNC(br_multicast_has_querier_adjacent, "_gpl", "");
KSYMTAB_FUNC(br_multicast_has_router_adjacent, "_gpl", "");
KSYMTAB_FUNC(br_vlan_enabled, "_gpl", "");
KSYMTAB_FUNC(br_vlan_get_proto, "_gpl", "");
KSYMTAB_FUNC(br_vlan_get_pvid, "_gpl", "");
KSYMTAB_FUNC(br_vlan_get_pvid_rcu, "_gpl", "");
KSYMTAB_FUNC(br_vlan_get_info, "_gpl", "");
KSYMTAB_FUNC(br_vlan_get_info_rcu, "_gpl", "");
KSYMTAB_FUNC(br_mst_enabled, "_gpl", "");
KSYMTAB_FUNC(br_mst_get_info, "_gpl", "");
KSYMTAB_FUNC(br_mst_get_state, "_gpl", "");

SYMBOL_CRC(nf_br_ops, 0x6e52ff7e, "_gpl");
SYMBOL_CRC(br_fdb_find_port, 0x0918e68a, "_gpl");
SYMBOL_CRC(br_fdb_clear_offload, 0x5d1bdf50, "_gpl");
SYMBOL_CRC(br_dev_queue_push_xmit, 0x8143aa3f, "_gpl");
SYMBOL_CRC(br_forward_finish, 0x1ede5775, "_gpl");
SYMBOL_CRC(br_forward, 0x56f813c6, "_gpl");
SYMBOL_CRC(br_port_flag_is_set, 0xff910d36, "_gpl");
SYMBOL_CRC(br_handle_frame_finish, 0x8bc96d1c, "_gpl");
SYMBOL_CRC(br_port_get_stp_state, 0x6f6a25ce, "_gpl");
SYMBOL_CRC(br_get_ageing_time, 0xf701d462, "_gpl");
SYMBOL_CRC(br_multicast_enabled, 0x9f62a368, "_gpl");
SYMBOL_CRC(br_multicast_router, 0xeadcf088, "_gpl");
SYMBOL_CRC(br_multicast_list_adjacent, 0x84317a71, "_gpl");
SYMBOL_CRC(br_multicast_has_querier_anywhere, 0x89145eb6, "_gpl");
SYMBOL_CRC(br_multicast_has_querier_adjacent, 0x818139aa, "_gpl");
SYMBOL_CRC(br_multicast_has_router_adjacent, 0xaad116f2, "_gpl");
SYMBOL_CRC(br_vlan_enabled, 0xd783d861, "_gpl");
SYMBOL_CRC(br_vlan_get_proto, 0x07705472, "_gpl");
SYMBOL_CRC(br_vlan_get_pvid, 0x8f6182b5, "_gpl");
SYMBOL_CRC(br_vlan_get_pvid_rcu, 0x0d63c670, "_gpl");
SYMBOL_CRC(br_vlan_get_info, 0x9b0a09f2, "_gpl");
SYMBOL_CRC(br_vlan_get_info_rcu, 0xdcfe2703, "_gpl");
SYMBOL_CRC(br_mst_enabled, 0xba9ee018, "_gpl");
SYMBOL_CRC(br_mst_get_info, 0x3e7e39fa, "_gpl");
SYMBOL_CRC(br_mst_get_state, 0x6142f792, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc89b2272, "netdev_lower_get_next" },
	{ 0x44465aeb, "dev_set_mtu" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe0944576, "dev_pre_changeaddr_notify" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0xac7da2f2, "__nlmsg_put" },
	{ 0xcd12ef04, "switchdev_port_attr_set" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x9e844b48, "ipv6_mc_check_mld" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x916aefbe, "__percpu_counter_init_many" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x40336464, "call_switchdev_notifiers" },
	{ 0xcb9be910, "sysfs_create_file_ns" },
	{ 0x2c834418, "static_key_slow_inc" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xa529e434, "netdev_update_features" },
	{ 0x9a25806b, "consume_skb" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xb0e602eb, "memmove" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xbf9f77dc, "__netpoll_free" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0xb7f54816, "nla_put_64bit" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x19e0ae50, "__SCT__tp_func_br_fdb_external_learn_add" },
	{ 0x733ec33e, "__SCT__tp_func_fdb_delete" },
	{ 0x537e2539, "dev_uc_del" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xad9e08f5, "netpoll_send_skb" },
	{ 0x39ec7d18, "rtnl_link_register" },
	{ 0xe2b3207a, "unregister_switchdev_notifier" },
	{ 0x586c7006, "sysfs_create_bin_file" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0xdb2e4f7d, "percpu_counter_destroy_many" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd9370c1d, "switchdev_port_obj_act_is_deferred" },
	{ 0x2895c3ea, "dev_get_iflink" },
	{ 0x37a0cba, "kfree" },
	{ 0x583ba754, "dev_set_promiscuity" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x4b5acf74, "rhashtable_init" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x38485abd, "unregister_netdevice_queue" },
	{ 0x3754fb97, "kmem_cache_create" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3abbdae8, "netdev_state_change" },
	{ 0x50b2b15, "__pskb_copy_fclone" },
	{ 0x6114cf8a, "__dev_get_by_name" },
	{ 0x89f8df2b, "ether_setup" },
	{ 0xeb6f6ea3, "netdev_err" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa2066eb8, "pskb_expand_head" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0x2f4880df, "static_key_slow_dec" },
	{ 0x259eb381, "brioctl_set" },
	{ 0x6178095e, "dev_addr_mod" },
	{ 0xb912560d, "static_key_disable" },
	{ 0x6f7f43b1, "arp_xmit" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x6373ea58, "alloc_netdev_mqs" },
	{ 0x19418a98, "passthru_features_check" },
	{ 0xb8f7350a, "nla_put_nohdr" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x927604c7, "netdev_rx_handler_unregister" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x2feb708f, "__SCK__tp_func_br_mdb_full" },
	{ 0x9447b7f4, "rtnl_af_register" },
	{ 0x914a8c39, "__tracepoint_br_mdb_full" },
	{ 0xb11cc43b, "__SCT__tp_func_br_fdb_update" },
	{ 0x7916343c, "__SCT__tp_func_br_mdb_full" },
	{ 0xa916b694, "strnlen" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x3cfdd46f, "kmem_cache_alloc" },
	{ 0x50314131, "rtnl_set_sk_err" },
	{ 0xbb436910, "skb_vlan_pop" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xbdb1ac9, "rtnl_unicast" },
	{ 0xfd315d92, "sysfs_create_link" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x49029e4b, "ipv6_dev_get_saddr" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x6350d90a, "nla_reserve_64bit" },
	{ 0x6e476bf6, "__ip_mc_dec_group" },
	{ 0x33338211, "rcuref_get_slowpath" },
	{ 0xe7f87e08, "__dev_get_by_index" },
	{ 0xd8dc1a8d, "rtnl_link_unregister" },
	{ 0x7e3191f6, "try_to_del_timer_sync" },
	{ 0x36242943, "switchdev_deferred_process" },
	{ 0xbc95ac31, "dev_get_port_parent_id" },
	{ 0xece43bce, "init_net" },
	{ 0x3ab5d439, "ipv6_stub" },
	{ 0x910e795b, "inet_confirm_addr" },
	{ 0xc084677a, "skb_pull" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xb05f0976, "sysfs_remove_link" },
	{ 0x73559f81, "skb_vlan_untag" },
	{ 0x8677245d, "unregister_switchdev_blocking_notifier" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xe18c1221, "__SCK__tp_func_br_fdb_add" },
	{ 0xfe856050, "rtnl_af_unregister" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xa7eedcc4, "call_usermodehelper" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0x49e05266, "arp_send" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x7990f761, "dev_get_by_index_rcu" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x4b60b453, "__tracepoint_br_fdb_add" },
	{ 0x652032cb, "mac_pton" },
	{ 0xe246278b, "skb_push" },
	{ 0x4ebf36a1, "kmem_cache_free" },
	{ 0x4c93359a, "br_fdb_test_addr_hook" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x3d7e4f94, "ndo_dflt_fdb_dump" },
	{ 0x5a921311, "strncmp" },
	{ 0x414ecb99, "netdev_upper_dev_unlink" },
	{ 0xd17e721e, "netif_receive_skb" },
	{ 0xd5a43273, "nla_put" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xbc74b7d, "llc_mac_hdr_init" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x589e0a2c, "free_netdev" },
	{ 0xcd279169, "nla_find" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x4fc20857, "__SCK__tp_func_fdb_delete" },
	{ 0x9bc818ae, "kobject_init_and_add" },
	{ 0xebc63a97, "__skb_warn_lro_forwarding" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x863b8d86, "ns_capable" },
	{ 0x9e615eaf, "inet_select_addr" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xe88633a5, "sysfs_create_group" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x12807459, "ethtool_op_get_link" },
	{ 0x6d294e43, "clock_t_to_jiffies" },
	{ 0x10a27429, "arp_create" },
	{ 0x57635f7a, "__ethtool_get_link_ksettings" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x913ccf1f, "stp_proto_register" },
	{ 0xadb3c445, "rtnl_register_module" },
	{ 0x4c2fbfa, "__tracepoint_br_fdb_update" },
	{ 0x5274738d, "sysfs_rename_link_ns" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xfb578fc5, "memset" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0xb202f0d7, "rht_bucket_nested_insert" },
	{ 0xdf237453, "timer_shutdown_sync" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xc3d27ee1, "switchdev_port_obj_add" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0x7f153a93, "dev_get_tstats64" },
	{ 0xad645234, "register_switchdev_notifier" },
	{ 0x5cf52384, "netif_rx" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xece784c2, "rb_first" },
	{ 0x49786071, "ip_mc_check_igmp" },
	{ 0xdece0e7e, "__netdev_alloc_skb" },
	{ 0x2a5ea9ef, "rhashtable_destroy" },
	{ 0xb1291508, "switchdev_port_obj_del" },
	{ 0xe56644ad, "netdev_master_upper_dev_link" },
	{ 0x131db64a, "system_long_wq" },
	{ 0x338be20a, "kobject_create_and_add" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x32bffce8, "nf_hook_slow" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x4f4cb259, "__dynamic_netdev_dbg" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6562e94e, "__ip_mc_inc_group" },
	{ 0x80b5b964, "netdev_walk_all_upper_dev_rcu" },
	{ 0xaee35d50, "pv_ops" },
	{ 0xf37bc012, "sysfs_remove_group" },
	{ 0xdee44b45, "in_dev_finish_destroy" },
	{ 0xd83898d5, "nf_hooks_needed" },
	{ 0xe0313d71, "rhashtable_insert_slow" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe52eae25, "__tracepoint_fdb_delete" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x19e530c1, "__netpoll_setup" },
	{ 0x8e7a30bb, "__dev_queue_xmit" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x2aa79e96, "vlan_vid_add" },
	{ 0x385e8aec, "neigh_destroy" },
	{ 0x96004af7, "__tracepoint_br_fdb_external_learn_add" },
	{ 0xa720c144, "kobject_del" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2d44be3b, "__SCT__tp_func_br_fdb_add" },
	{ 0x256f252, "__SCK__tp_func_br_fdb_update" },
	{ 0x960da8bf, "call_netdevice_notifiers" },
	{ 0xa1d6fab, "is_skb_forwardable" },
	{ 0x9e5aa58c, "vlan_vid_del" },
	{ 0xf96afcdc, "dev_set_allmulti" },
	{ 0x104bd207, "net_ns_get_ownership" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xee38ef57, "register_switchdev_blocking_notifier" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x24c9c75a, "netdev_master_upper_dev_get" },
	{ 0x6bdff520, "ipv6_dev_mc_inc" },
	{ 0x9d046b08, "rtnl_notify" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe10bc0d2, "netif_carrier_off" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xef428d13, "__vlan_find_dev_deep_rcu" },
	{ 0x5089f45f, "ip_send_check" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf1de5c0a, "skb_clone" },
	{ 0x28ede78d, "__SCK__tp_func_br_fdb_external_learn_add" },
	{ 0x2014dec3, "metadata_dst_alloc" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x986d6241, "dst_release" },
	{ 0xbc8054bd, "netif_carrier_on" },
	{ 0x7e9a4b63, "kobject_uevent" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xa68d0e4e, "arp_tbl" },
	{ 0xe0d65087, "ipv6_dev_mc_dec" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x65cd0c57, "netdev_rx_handler_register" },
	{ 0xfdfa220e, "dev_uc_add" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x9563a7cf, "netif_set_tso_max_size" },
	{ 0xc42aaabf, "dev_disable_lro" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0xfa1f9024, "ipv6_chk_addr" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xa58e11f7, "dev_get_flags" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x754d539c, "strlen" },
	{ 0x44154c6, "tc_skb_ext_tc" },
	{ 0x2eebc68d, "dev_kfree_skb_any_reason" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x42554c8e, "netdev_notice" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x7b52e38, "rtnl_unregister" },
	{ 0x6aba4631, "nf_queue" },
	{ 0x20eadeb6, "ip_compute_csum" },
	{ 0xc7aaba31, "netif_set_tso_max_segs" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x349cba85, "strchr" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x929856a9, "skb_ext_add" },
	{ 0x6414f0fb, "sysfs_remove_bin_file" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0x8889b7fe, "stp_proto_unregister" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x62f336d9, "neigh_lookup" },
	{ 0x560cd29a, "kmem_cache_destroy" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x259e618c, "kobject_put" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x3c0dbc1e, "register_netdevice" },
	{ 0x6b2b69f7, "static_key_enable" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "llc,stp");


MODULE_INFO(srcversion, "FBE4862BD9EC52EDE1AFC17");
