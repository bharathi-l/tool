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

KSYMTAB_FUNC(nft_do_chain, "_gpl", "");
KSYMTAB_FUNC(nft_reg_track_update, "_gpl", "");
KSYMTAB_FUNC(nft_reg_track_cancel, "_gpl", "");
KSYMTAB_FUNC(__nft_reg_track_cancel, "_gpl", "");
KSYMTAB_FUNC(nft_request_module, "_gpl", "");
KSYMTAB_FUNC(nft_register_chain_type, "_gpl", "");
KSYMTAB_FUNC(nft_unregister_chain_type, "_gpl", "");
KSYMTAB_FUNC(nft_register_expr, "_gpl", "");
KSYMTAB_FUNC(nft_unregister_expr, "_gpl", "");
KSYMTAB_FUNC(nft_chain_validate, "_gpl", "");
KSYMTAB_FUNC(nft_set_lookup_global, "_gpl", "");
KSYMTAB_FUNC(nf_tables_bind_set, "_gpl", "");
KSYMTAB_FUNC(nf_tables_activate_set, "_gpl", "");
KSYMTAB_FUNC(nf_tables_deactivate_set, "_gpl", "");
KSYMTAB_FUNC(nf_tables_destroy_set, "_gpl", "");
KSYMTAB_FUNC(nft_set_elem_destroy, "_gpl", "");
KSYMTAB_FUNC(nft_set_catchall_lookup, "_gpl", "");
KSYMTAB_FUNC(nft_register_obj, "_gpl", "");
KSYMTAB_FUNC(nft_unregister_obj, "_gpl", "");
KSYMTAB_FUNC(nft_obj_lookup, "_gpl", "");
KSYMTAB_FUNC(nft_obj_notify, "_gpl", "");
KSYMTAB_FUNC(nft_register_flowtable_type, "_gpl", "");
KSYMTAB_FUNC(nft_unregister_flowtable_type, "_gpl", "");
KSYMTAB_FUNC(nft_flowtable_lookup, "_gpl", "");
KSYMTAB_FUNC(nf_tables_deactivate_flowtable, "_gpl", "");
KSYMTAB_FUNC(nf_tables_trans_destroy_flush_work, "_gpl", "");
KSYMTAB_FUNC(nft_chain_validate_dependency, "_gpl", "");
KSYMTAB_FUNC(nft_chain_validate_hooks, "_gpl", "");
KSYMTAB_FUNC(nft_parse_u32_check, "_gpl", "");
KSYMTAB_FUNC(nft_dump_register, "_gpl", "");
KSYMTAB_FUNC(nft_parse_register_load, "_gpl", "");
KSYMTAB_FUNC(nft_parse_register_store, "_gpl", "");
KSYMTAB_FUNC(nft_data_init, "_gpl", "");
KSYMTAB_FUNC(nft_data_release, "_gpl", "");
KSYMTAB_FUNC(nft_data_dump, "_gpl", "");
KSYMTAB_FUNC(__nft_release_basechain, "_gpl", "");
KSYMTAB_DATA(nft_trace_enabled, "_gpl", "");
KSYMTAB_FUNC(nft_expr_reduce_bitwise, "_gpl", "");
KSYMTAB_FUNC(nft_set_do_lookup, "_gpl", "");
KSYMTAB_FUNC(nft_meta_get_eval, "_gpl", "");
KSYMTAB_FUNC(nft_meta_set_eval, "_gpl", "");
KSYMTAB_DATA(nft_meta_policy, "_gpl", "");
KSYMTAB_FUNC(nft_meta_get_init, "_gpl", "");
KSYMTAB_FUNC(nft_meta_set_validate, "_gpl", "");
KSYMTAB_FUNC(nft_meta_set_init, "_gpl", "");
KSYMTAB_FUNC(nft_meta_get_dump, "_gpl", "");
KSYMTAB_FUNC(nft_meta_set_dump, "_gpl", "");
KSYMTAB_FUNC(nft_meta_set_destroy, "_gpl", "");
KSYMTAB_FUNC(nft_meta_get_reduce, "_gpl", "");
KSYMTAB_FUNC(nft_meta_inner_eval, "_gpl", "");
KSYMTAB_FUNC(nft_ct_get_fast_eval, "_gpl", "");

SYMBOL_CRC(nft_do_chain, 0x97d072c1, "_gpl");
SYMBOL_CRC(nft_reg_track_update, 0x148d3baa, "_gpl");
SYMBOL_CRC(nft_reg_track_cancel, 0xfdf0a921, "_gpl");
SYMBOL_CRC(__nft_reg_track_cancel, 0x0263596a, "_gpl");
SYMBOL_CRC(nft_request_module, 0xdabd605c, "_gpl");
SYMBOL_CRC(nft_register_chain_type, 0xc8535993, "_gpl");
SYMBOL_CRC(nft_unregister_chain_type, 0x9e67180f, "_gpl");
SYMBOL_CRC(nft_register_expr, 0x6e984c22, "_gpl");
SYMBOL_CRC(nft_unregister_expr, 0x94d0fab8, "_gpl");
SYMBOL_CRC(nft_chain_validate, 0xb4936065, "_gpl");
SYMBOL_CRC(nft_set_lookup_global, 0xfe63ec91, "_gpl");
SYMBOL_CRC(nf_tables_bind_set, 0x7278b413, "_gpl");
SYMBOL_CRC(nf_tables_activate_set, 0x9ab21f27, "_gpl");
SYMBOL_CRC(nf_tables_deactivate_set, 0xaa3c9c64, "_gpl");
SYMBOL_CRC(nf_tables_destroy_set, 0x7fe414aa, "_gpl");
SYMBOL_CRC(nft_set_elem_destroy, 0x1dccefe6, "_gpl");
SYMBOL_CRC(nft_set_catchall_lookup, 0x2e3ac1c5, "_gpl");
SYMBOL_CRC(nft_register_obj, 0xa56ba964, "_gpl");
SYMBOL_CRC(nft_unregister_obj, 0x5d7cd524, "_gpl");
SYMBOL_CRC(nft_obj_lookup, 0xab78e33c, "_gpl");
SYMBOL_CRC(nft_obj_notify, 0xcb935f8f, "_gpl");
SYMBOL_CRC(nft_register_flowtable_type, 0x55430ba4, "_gpl");
SYMBOL_CRC(nft_unregister_flowtable_type, 0x65b994be, "_gpl");
SYMBOL_CRC(nft_flowtable_lookup, 0x1b9c5972, "_gpl");
SYMBOL_CRC(nf_tables_deactivate_flowtable, 0x6330052f, "_gpl");
SYMBOL_CRC(nf_tables_trans_destroy_flush_work, 0x3251d762, "_gpl");
SYMBOL_CRC(nft_chain_validate_dependency, 0x3acacbd6, "_gpl");
SYMBOL_CRC(nft_chain_validate_hooks, 0x0a3b6d95, "_gpl");
SYMBOL_CRC(nft_parse_u32_check, 0xde57b5f5, "_gpl");
SYMBOL_CRC(nft_dump_register, 0x89d28d24, "_gpl");
SYMBOL_CRC(nft_parse_register_load, 0xe2b8cc13, "_gpl");
SYMBOL_CRC(nft_parse_register_store, 0xb818ba4d, "_gpl");
SYMBOL_CRC(nft_data_init, 0xe508e821, "_gpl");
SYMBOL_CRC(nft_data_release, 0xed84fe5b, "_gpl");
SYMBOL_CRC(nft_data_dump, 0xef6fa3a4, "_gpl");
SYMBOL_CRC(__nft_release_basechain, 0xa31de24d, "_gpl");
SYMBOL_CRC(nft_trace_enabled, 0x41b71e65, "_gpl");
SYMBOL_CRC(nft_expr_reduce_bitwise, 0xc72b74b5, "_gpl");
SYMBOL_CRC(nft_set_do_lookup, 0x418a1153, "_gpl");
SYMBOL_CRC(nft_meta_get_eval, 0x607cde01, "_gpl");
SYMBOL_CRC(nft_meta_set_eval, 0xd1f80e06, "_gpl");
SYMBOL_CRC(nft_meta_policy, 0xe2c74001, "_gpl");
SYMBOL_CRC(nft_meta_get_init, 0x65bc6733, "_gpl");
SYMBOL_CRC(nft_meta_set_validate, 0x4c1d5a54, "_gpl");
SYMBOL_CRC(nft_meta_set_init, 0xc214f247, "_gpl");
SYMBOL_CRC(nft_meta_get_dump, 0x04829c1c, "_gpl");
SYMBOL_CRC(nft_meta_set_dump, 0x82f0a832, "_gpl");
SYMBOL_CRC(nft_meta_set_destroy, 0x1023ab31, "_gpl");
SYMBOL_CRC(nft_meta_get_reduce, 0x4a68807f, "_gpl");
SYMBOL_CRC(nft_meta_inner_eval, 0x7ac26198, "_gpl");
SYMBOL_CRC(nft_ct_get_fast_eval, 0xcf69d922, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa2e9dc6a, "__do_once_done" },
	{ 0x5de24966, "__netlink_dump_start" },
	{ 0xd7fa33c7, "flow_rule_alloc" },
	{ 0x18f58619, "try_module_get" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0x5afc722e, "__audit_log_nfcfg" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0xac7da2f2, "__nlmsg_put" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2c834418, "static_key_slow_inc" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xedbaee5e, "nla_strcmp" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xb0e602eb, "memmove" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xca9e776c, "nla_reserve" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x73dd54eb, "irq_fpu_usable" },
	{ 0x7a53a06d, "flow_indr_dev_exists" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0xb7f54816, "nla_put_64bit" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xca9360b5, "rb_next" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x2c82c36a, "security_secmark_relabel_packet" },
	{ 0xdd5faa42, "nfnetlink_set_err" },
	{ 0x75d0deb9, "nsecs_to_jiffies64" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x6d7c7dcc, "bitmap_cut" },
	{ 0xf27aee89, "flow_block_cb_free" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x21c04549, "nfnetlink_subsys_register" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x62c503a1, "ip6_route_me_harder" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0xeca957d1, "__bitmap_and" },
	{ 0x4b5acf74, "rhashtable_init" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xdc2b2807, "__module_get" },
	{ 0x148653, "vsnprintf" },
	{ 0xe5ce1a56, "rhashtable_walk_enter" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x6114cf8a, "__dev_get_by_name" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0x2f4880df, "static_key_slow_dec" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x46c5b2f4, "__ip_options_compile" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xf82ec573, "rb_prev" },
	{ 0xed5113af, "nf_route" },
	{ 0x4129f5ee, "kernel_fpu_begin_mask" },
	{ 0xa916b694, "strnlen" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0x618911fc, "numa_node" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xd47a039c, "module_put" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xad5a6079, "nf_unregister_net_hook" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0xaff42d14, "nf_register_net_hook" },
	{ 0xb65b063c, "__skb_get_hash" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x19bd383b, "security_secmark_refcount_dec" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0x6e068e63, "ip6_mtu" },
	{ 0x816dfe80, "ip_route_me_harder" },
	{ 0x126cbd68, "skb_store_bits" },
	{ 0x7990f761, "dev_get_by_index_rcu" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x144dfedb, "nfnetlink_unicast" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0xd5a43273, "nla_put" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xc9271504, "skb_ensure_writable" },
	{ 0xc0ff12fb, "nla_strdup" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x9a5dce5c, "rhashtable_walk_start_check" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x3eb8d1ad, "flow_indr_dev_setup_offload" },
	{ 0x9cd7551a, "rhashtable_walk_stop" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0x838d2bc8, "siphash_3u32" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x7f6cee89, "rhashtable_free_and_destroy" },
	{ 0x201b4e4b, "skb_checksum" },
	{ 0xfb578fc5, "memset" },
	{ 0x92ec510d, "jiffies64_to_msecs" },
	{ 0xb202f0d7, "rht_bucket_nested_insert" },
	{ 0x715447a0, "nfnetlink_send" },
	{ 0xf044cbcd, "__get_task_comm" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0xece784c2, "rb_first" },
	{ 0x3c8dabba, "nfnetlink_subsys_unregister" },
	{ 0x9164d2c3, "from_kgid_munged" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xaee35d50, "pv_ops" },
	{ 0xa8b21c85, "__put_net" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xe0313d71, "rhashtable_insert_slow" },
	{ 0x32779b9, "ipv6_find_hdr" },
	{ 0xb15b4109, "crc32c" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x9c6690db, "ipv4_mtu" },
	{ 0x2f03fc4b, "security_secmark_refcount_inc" },
	{ 0x6fcbf3b0, "__skb_checksum" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67377444, "inet_proto_csum_replace4" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3ac3feba, "rhltable_init" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0x986d6241, "dst_release" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xb42c505, "boot_cpu_data" },
	{ 0x54651f9b, "rhashtable_walk_next" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0x2788847d, "from_kuid_munged" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0xf9c1f9ab, "security_secctx_to_secid" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x754d539c, "strlen" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x349cba85, "strchr" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0xf188a662, "rhashtable_walk_exit" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x18e60984, "__do_once_start" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc11cbc0, "nfnetlink_has_listeners" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x6b2b69f7, "static_key_enable" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nfnetlink,libcrc32c");


MODULE_INFO(srcversion, "1F87A7EC110E3877E77A214");
