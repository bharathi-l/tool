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

KSYMTAB_DATA(nf_conntrack_locks, "_gpl", "");
KSYMTAB_DATA(nf_conntrack_expect_lock, "_gpl", "");
KSYMTAB_DATA(nf_conntrack_hash, "_gpl", "");
KSYMTAB_FUNC(nf_conntrack_lock, "_gpl", "");
KSYMTAB_DATA(nf_conntrack_htable_size, "_gpl", "");
KSYMTAB_DATA(nf_conntrack_max, "_gpl", "");
KSYMTAB_FUNC(nf_ct_get_tuplepr, "_gpl", "");
KSYMTAB_FUNC(nf_ct_invert_tuple, "_gpl", "");
KSYMTAB_FUNC(nf_ct_get_id, "_gpl", "");
KSYMTAB_FUNC(nf_ct_tmpl_alloc, "_gpl", "");
KSYMTAB_FUNC(nf_ct_tmpl_free, "_gpl", "");
KSYMTAB_FUNC(nf_ct_destroy, "", "");
KSYMTAB_FUNC(nf_ct_delete, "_gpl", "");
KSYMTAB_FUNC(nf_conntrack_find_get, "_gpl", "");
KSYMTAB_FUNC(nf_conntrack_hash_check_insert, "_gpl", "");
KSYMTAB_FUNC(nf_ct_acct_add, "_gpl", "");
KSYMTAB_FUNC(__nf_conntrack_confirm, "_gpl", "");
KSYMTAB_FUNC(nf_conntrack_tuple_taken, "_gpl", "");
KSYMTAB_FUNC(nf_conntrack_alloc, "_gpl", "");
KSYMTAB_FUNC(nf_conntrack_free, "_gpl", "");
KSYMTAB_FUNC(nf_conntrack_in, "_gpl", "");
KSYMTAB_FUNC(__nf_ct_refresh_acct, "_gpl", "");
KSYMTAB_FUNC(nf_ct_kill_acct, "_gpl", "");
KSYMTAB_FUNC(nf_ct_port_tuple_to_nlattr, "_gpl", "");
KSYMTAB_DATA(nf_ct_port_nla_policy, "_gpl", "");
KSYMTAB_FUNC(nf_ct_port_nlattr_to_tuple, "_gpl", "");
KSYMTAB_FUNC(nf_ct_port_nlattr_tuple_size, "_gpl", "");
KSYMTAB_FUNC(nf_ct_iterate_cleanup_net, "_gpl", "");
KSYMTAB_FUNC(nf_ct_iterate_destroy, "_gpl", "");
KSYMTAB_FUNC(nf_ct_alloc_hashtable, "_gpl", "");
KSYMTAB_FUNC(__nf_ct_change_timeout, "_gpl", "");
KSYMTAB_FUNC(__nf_ct_change_status, "_gpl", "");
KSYMTAB_FUNC(nf_ct_change_status_common, "_gpl", "");
KSYMTAB_FUNC(nf_conntrack_count, "_gpl", "");
KSYMTAB_DATA(nf_ct_expect_hsize, "_gpl", "");
KSYMTAB_DATA(nf_ct_expect_hash, "_gpl", "");
KSYMTAB_FUNC(nf_ct_unlink_expect_report, "_gpl", "");
KSYMTAB_FUNC(nf_ct_remove_expect, "_gpl", "");
KSYMTAB_FUNC(__nf_ct_expect_find, "_gpl", "");
KSYMTAB_FUNC(nf_ct_expect_find_get, "_gpl", "");
KSYMTAB_FUNC(nf_ct_remove_expectations, "_gpl", "");
KSYMTAB_FUNC(nf_ct_unexpect_related, "_gpl", "");
KSYMTAB_FUNC(nf_ct_expect_alloc, "_gpl", "");
KSYMTAB_FUNC(nf_ct_expect_init, "_gpl", "");
KSYMTAB_FUNC(nf_ct_expect_put, "_gpl", "");
KSYMTAB_FUNC(nf_ct_expect_related_report, "_gpl", "");
KSYMTAB_FUNC(nf_ct_expect_iterate_destroy, "_gpl", "");
KSYMTAB_FUNC(nf_ct_expect_iterate_net, "_gpl", "");
KSYMTAB_DATA(nf_ct_helper_hash, "_gpl", "");
KSYMTAB_DATA(nf_ct_helper_hsize, "_gpl", "");
KSYMTAB_FUNC(__nf_conntrack_helper_find, "_gpl", "");
KSYMTAB_FUNC(nf_conntrack_helper_try_module_get, "_gpl", "");
KSYMTAB_FUNC(nf_conntrack_helper_put, "_gpl", "");
KSYMTAB_FUNC(nf_nat_helper_try_module_get, "_gpl", "");
KSYMTAB_FUNC(nf_nat_helper_put, "_gpl", "");
KSYMTAB_FUNC(nf_ct_helper_ext_add, "_gpl", "");
KSYMTAB_FUNC(__nf_ct_try_assign_helper, "_gpl", "");
KSYMTAB_FUNC(nf_ct_helper_expectfn_register, "_gpl", "");
KSYMTAB_FUNC(nf_ct_helper_expectfn_unregister, "_gpl", "");
KSYMTAB_FUNC(nf_ct_helper_expectfn_find_by_name, "_gpl", "");
KSYMTAB_FUNC(nf_ct_helper_expectfn_find_by_symbol, "_gpl", "");
KSYMTAB_FUNC(nf_ct_helper_log, "_gpl", "");
KSYMTAB_FUNC(nf_conntrack_helper_register, "_gpl", "");
KSYMTAB_FUNC(nf_conntrack_helper_unregister, "_gpl", "");
KSYMTAB_FUNC(nf_ct_helper_init, "_gpl", "");
KSYMTAB_FUNC(nf_conntrack_helpers_register, "_gpl", "");
KSYMTAB_FUNC(nf_conntrack_helpers_unregister, "_gpl", "");
KSYMTAB_FUNC(nf_nat_helper_register, "_gpl", "");
KSYMTAB_FUNC(nf_nat_helper_unregister, "_gpl", "");
KSYMTAB_FUNC(nf_l4proto_log_invalid, "_gpl", "");
KSYMTAB_FUNC(nf_ct_l4proto_log_invalid, "_gpl", "");
KSYMTAB_FUNC(nf_ct_l4proto_find, "_gpl", "");
KSYMTAB_FUNC(nf_confirm, "_gpl", "");
KSYMTAB_FUNC(nf_ct_netns_get, "_gpl", "");
KSYMTAB_FUNC(nf_ct_netns_put, "_gpl", "");
KSYMTAB_FUNC(nf_ct_bridge_register, "_gpl", "");
KSYMTAB_FUNC(nf_ct_bridge_unregister, "_gpl", "");
KSYMTAB_FUNC(nf_ct_ext_add, "", "");
KSYMTAB_FUNC(__nf_ct_ext_find, "", "");
KSYMTAB_FUNC(nf_ct_seqadj_init, "_gpl", "");
KSYMTAB_FUNC(nf_ct_seqadj_set, "_gpl", "");
KSYMTAB_FUNC(nf_ct_tcp_seqadj_set, "_gpl", "");
KSYMTAB_FUNC(nf_ct_seq_adjust, "_gpl", "");
KSYMTAB_FUNC(nf_ct_seq_offset, "_gpl", "");
KSYMTAB_DATA(nf_ct_timeout_hook, "_gpl", "");
KSYMTAB_FUNC(nf_ct_untimeout, "_gpl", "");
KSYMTAB_FUNC(nf_ct_set_timeout, "_gpl", "");
KSYMTAB_FUNC(nf_ct_destroy_timeout, "_gpl", "");
KSYMTAB_FUNC(nf_conn_pernet_ecache, "_gpl", "");
KSYMTAB_FUNC(nf_conntrack_eventmask_report, "_gpl", "");
KSYMTAB_FUNC(nf_ct_deliver_cached_events, "_gpl", "");
KSYMTAB_FUNC(nf_conntrack_register_notifier, "_gpl", "");
KSYMTAB_FUNC(nf_conntrack_unregister_notifier, "_gpl", "");
KSYMTAB_FUNC(nf_ct_ecache_ext_add, "_gpl", "");
KSYMTAB_FUNC(nf_connlabels_replace, "_gpl", "");
KSYMTAB_FUNC(nf_connlabels_get, "_gpl", "");
KSYMTAB_FUNC(nf_connlabels_put, "_gpl", "");
KSYMTAB_FUNC(nf_ct_helper, "_gpl", "");
KSYMTAB_FUNC(nf_ct_add_helper, "_gpl", "");
KSYMTAB_FUNC(nf_ct_skb_network_trim, "_gpl", "");
KSYMTAB_FUNC(nf_ct_handle_fragments, "_gpl", "");
KSYMTAB_FUNC(nf_ct_gre_keymap_add, "_gpl", "");
KSYMTAB_FUNC(nf_ct_gre_keymap_destroy, "_gpl", "");

SYMBOL_CRC(nf_conntrack_locks, 0xaf0847f0, "_gpl");
SYMBOL_CRC(nf_conntrack_expect_lock, 0x9adb7399, "_gpl");
SYMBOL_CRC(nf_conntrack_hash, 0x28eff409, "_gpl");
SYMBOL_CRC(nf_conntrack_lock, 0xdba7326b, "_gpl");
SYMBOL_CRC(nf_conntrack_htable_size, 0x8ffe7e89, "_gpl");
SYMBOL_CRC(nf_conntrack_max, 0xf38bcdf3, "_gpl");
SYMBOL_CRC(nf_ct_get_tuplepr, 0xb08e88e2, "_gpl");
SYMBOL_CRC(nf_ct_invert_tuple, 0x0460ec0f, "_gpl");
SYMBOL_CRC(nf_ct_get_id, 0xcfca0a65, "_gpl");
SYMBOL_CRC(nf_ct_tmpl_alloc, 0x8e2e56fa, "_gpl");
SYMBOL_CRC(nf_ct_tmpl_free, 0xa0a6bd19, "_gpl");
SYMBOL_CRC(nf_ct_destroy, 0x3b08a8f0, "");
SYMBOL_CRC(nf_ct_delete, 0xa6ee3b65, "_gpl");
SYMBOL_CRC(nf_conntrack_find_get, 0x57848526, "_gpl");
SYMBOL_CRC(nf_conntrack_hash_check_insert, 0x91b5472f, "_gpl");
SYMBOL_CRC(nf_ct_acct_add, 0x268f4d4b, "_gpl");
SYMBOL_CRC(__nf_conntrack_confirm, 0x641b8663, "_gpl");
SYMBOL_CRC(nf_conntrack_tuple_taken, 0xa7b8c381, "_gpl");
SYMBOL_CRC(nf_conntrack_alloc, 0x1f7f3888, "_gpl");
SYMBOL_CRC(nf_conntrack_free, 0x090d4b20, "_gpl");
SYMBOL_CRC(nf_conntrack_in, 0x0f46fa4b, "_gpl");
SYMBOL_CRC(__nf_ct_refresh_acct, 0xaf9ba12f, "_gpl");
SYMBOL_CRC(nf_ct_kill_acct, 0x6a639cd7, "_gpl");
SYMBOL_CRC(nf_ct_port_tuple_to_nlattr, 0x8cda6e14, "_gpl");
SYMBOL_CRC(nf_ct_port_nla_policy, 0xeb0ab313, "_gpl");
SYMBOL_CRC(nf_ct_port_nlattr_to_tuple, 0x752f0aa2, "_gpl");
SYMBOL_CRC(nf_ct_port_nlattr_tuple_size, 0xd505c3e0, "_gpl");
SYMBOL_CRC(nf_ct_iterate_cleanup_net, 0xcf98cd6a, "_gpl");
SYMBOL_CRC(nf_ct_iterate_destroy, 0xd8ee4caf, "_gpl");
SYMBOL_CRC(nf_ct_alloc_hashtable, 0x289c3714, "_gpl");
SYMBOL_CRC(__nf_ct_change_timeout, 0x9337058d, "_gpl");
SYMBOL_CRC(__nf_ct_change_status, 0xe324588c, "_gpl");
SYMBOL_CRC(nf_ct_change_status_common, 0x3a2b49cf, "_gpl");
SYMBOL_CRC(nf_conntrack_count, 0x89d0bb01, "_gpl");
SYMBOL_CRC(nf_ct_expect_hsize, 0xc18ac88d, "_gpl");
SYMBOL_CRC(nf_ct_expect_hash, 0xec8beba6, "_gpl");
SYMBOL_CRC(nf_ct_unlink_expect_report, 0x576471dd, "_gpl");
SYMBOL_CRC(nf_ct_remove_expect, 0x62a90113, "_gpl");
SYMBOL_CRC(__nf_ct_expect_find, 0x289502a7, "_gpl");
SYMBOL_CRC(nf_ct_expect_find_get, 0x5fa587e5, "_gpl");
SYMBOL_CRC(nf_ct_remove_expectations, 0x93faf02b, "_gpl");
SYMBOL_CRC(nf_ct_unexpect_related, 0x56cc812a, "_gpl");
SYMBOL_CRC(nf_ct_expect_alloc, 0xc28997d7, "_gpl");
SYMBOL_CRC(nf_ct_expect_init, 0xadb85c52, "_gpl");
SYMBOL_CRC(nf_ct_expect_put, 0x286b5af5, "_gpl");
SYMBOL_CRC(nf_ct_expect_related_report, 0x00641eb8, "_gpl");
SYMBOL_CRC(nf_ct_expect_iterate_destroy, 0xed674400, "_gpl");
SYMBOL_CRC(nf_ct_expect_iterate_net, 0xf082677d, "_gpl");
SYMBOL_CRC(nf_ct_helper_hash, 0x693c3961, "_gpl");
SYMBOL_CRC(nf_ct_helper_hsize, 0xc40f284c, "_gpl");
SYMBOL_CRC(__nf_conntrack_helper_find, 0x0984a595, "_gpl");
SYMBOL_CRC(nf_conntrack_helper_try_module_get, 0x1faa3a2c, "_gpl");
SYMBOL_CRC(nf_conntrack_helper_put, 0x6b23f894, "_gpl");
SYMBOL_CRC(nf_nat_helper_try_module_get, 0x0bc00f80, "_gpl");
SYMBOL_CRC(nf_nat_helper_put, 0x3ddfbad3, "_gpl");
SYMBOL_CRC(nf_ct_helper_ext_add, 0x67806dce, "_gpl");
SYMBOL_CRC(__nf_ct_try_assign_helper, 0xa71e9567, "_gpl");
SYMBOL_CRC(nf_ct_helper_expectfn_register, 0x424d8e34, "_gpl");
SYMBOL_CRC(nf_ct_helper_expectfn_unregister, 0x9fe89a7c, "_gpl");
SYMBOL_CRC(nf_ct_helper_expectfn_find_by_name, 0x890f844c, "_gpl");
SYMBOL_CRC(nf_ct_helper_expectfn_find_by_symbol, 0xa6e1b7b2, "_gpl");
SYMBOL_CRC(nf_ct_helper_log, 0xa15cbb7c, "_gpl");
SYMBOL_CRC(nf_conntrack_helper_register, 0xf3bdd7e9, "_gpl");
SYMBOL_CRC(nf_conntrack_helper_unregister, 0xa6c05bfb, "_gpl");
SYMBOL_CRC(nf_ct_helper_init, 0x602f99c4, "_gpl");
SYMBOL_CRC(nf_conntrack_helpers_register, 0x354e16f1, "_gpl");
SYMBOL_CRC(nf_conntrack_helpers_unregister, 0x76bfda42, "_gpl");
SYMBOL_CRC(nf_nat_helper_register, 0x701c63be, "_gpl");
SYMBOL_CRC(nf_nat_helper_unregister, 0x369387c9, "_gpl");
SYMBOL_CRC(nf_l4proto_log_invalid, 0x91c1ca2c, "_gpl");
SYMBOL_CRC(nf_ct_l4proto_log_invalid, 0xf00b4dc6, "_gpl");
SYMBOL_CRC(nf_ct_l4proto_find, 0xecfdee8d, "_gpl");
SYMBOL_CRC(nf_confirm, 0x0881c3b3, "_gpl");
SYMBOL_CRC(nf_ct_netns_get, 0x3733777f, "_gpl");
SYMBOL_CRC(nf_ct_netns_put, 0x3ac4525b, "_gpl");
SYMBOL_CRC(nf_ct_bridge_register, 0x610c2d0c, "_gpl");
SYMBOL_CRC(nf_ct_bridge_unregister, 0x54b7d4c8, "_gpl");
SYMBOL_CRC(nf_ct_ext_add, 0x42f71abc, "");
SYMBOL_CRC(__nf_ct_ext_find, 0x89d99ee1, "");
SYMBOL_CRC(nf_ct_seqadj_init, 0x9666f97e, "_gpl");
SYMBOL_CRC(nf_ct_seqadj_set, 0xa93f2398, "_gpl");
SYMBOL_CRC(nf_ct_tcp_seqadj_set, 0xd71ec940, "_gpl");
SYMBOL_CRC(nf_ct_seq_adjust, 0x7b9bd8d0, "_gpl");
SYMBOL_CRC(nf_ct_seq_offset, 0x80880703, "_gpl");
SYMBOL_CRC(nf_ct_timeout_hook, 0x286ae79f, "_gpl");
SYMBOL_CRC(nf_ct_untimeout, 0xf41289fe, "_gpl");
SYMBOL_CRC(nf_ct_set_timeout, 0x4bf9f0fd, "_gpl");
SYMBOL_CRC(nf_ct_destroy_timeout, 0x7fdcb9c1, "_gpl");
SYMBOL_CRC(nf_conn_pernet_ecache, 0x4081abcf, "_gpl");
SYMBOL_CRC(nf_conntrack_eventmask_report, 0xdab0a027, "_gpl");
SYMBOL_CRC(nf_ct_deliver_cached_events, 0x1c8e0a09, "_gpl");
SYMBOL_CRC(nf_conntrack_register_notifier, 0xc92c753d, "_gpl");
SYMBOL_CRC(nf_conntrack_unregister_notifier, 0x304ffee1, "_gpl");
SYMBOL_CRC(nf_ct_ecache_ext_add, 0xb8f4ef9b, "_gpl");
SYMBOL_CRC(nf_connlabels_replace, 0x71ac2305, "_gpl");
SYMBOL_CRC(nf_connlabels_get, 0x19d8cdee, "_gpl");
SYMBOL_CRC(nf_connlabels_put, 0xd73f1c26, "_gpl");
SYMBOL_CRC(nf_ct_helper, 0x55f20972, "_gpl");
SYMBOL_CRC(nf_ct_add_helper, 0xa49761a9, "_gpl");
SYMBOL_CRC(nf_ct_skb_network_trim, 0x26ff9401, "_gpl");
SYMBOL_CRC(nf_ct_handle_fragments, 0x5b616f5a, "_gpl");
SYMBOL_CRC(nf_ct_gre_keymap_add, 0x77020149, "_gpl");
SYMBOL_CRC(nf_ct_gre_keymap_destroy, 0xd15d8756, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa2e9dc6a, "__do_once_done" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x18f58619, "try_module_get" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x84e75a83, "nf_defrag_ipv4_disable" },
	{ 0xa3bd064c, "nf_ip6_checksum" },
	{ 0x1afaa2fd, "proc_dou8vec_minmax" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0xd786c3ef, "param_ops_uint" },
	{ 0xe2bbfa56, "proc_dointvec_jiffies" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe8cc0195, "nf_register_sockopt" },
	{ 0xb7f54816, "nla_put_64bit" },
	{ 0xe1db12e1, "param_set_uint" },
	{ 0x88711deb, "nf_defrag_ipv4_enable" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0x46d615f1, "nf_ct_frag6_gather" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x3754fb97, "kmem_cache_create" },
	{ 0xabca843, "nf_ct_hook" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xb3012895, "register_net_sysctl_sz" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x1000e51, "schedule" },
	{ 0xaf4f0d7f, "nf_unregister_sockopt" },
	{ 0xa0a646f5, "param_get_uint" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc5e2fa93, "nf_defrag_ipv6_disable" },
	{ 0x398231f4, "ipv6_skip_exthdr" },
	{ 0x17d89efe, "nf_register_net_hooks" },
	{ 0xa916b694, "strnlen" },
	{ 0x3cfdd46f, "kmem_cache_alloc" },
	{ 0xd47a039c, "module_put" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xd7ac508b, "nf_checksum" },
	{ 0xa4e6e0a, "nf_hooks_lwtunnel_sysctl_handler" },
	{ 0xece43bce, "init_net" },
	{ 0xb37701bf, "nf_ip6_check_hbh_len" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x24d273d1, "add_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4ebf36a1, "kmem_cache_free" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0xd5a43273, "nla_put" },
	{ 0x59d4db87, "nf_checksum_partial" },
	{ 0xc9271504, "skb_ensure_writable" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xf4f62fa0, "nf_unregister_net_hooks" },
	{ 0xf3eaf8a7, "lock_sock_nested" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x944375db, "_totalram_pages" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0x6d2fc5a6, "net_namespace_list" },
	{ 0x2db35cf7, "ip_defrag" },
	{ 0x19f33626, "nf_ctnetlink_has_listener" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xae46ef22, "nf_log_packet" },
	{ 0xd2dce65, "nf_ip_checksum" },
	{ 0xe4262c6, "__siphash_unaligned" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x254ad00e, "nla_policy_len" },
	{ 0xb15b4109, "crc32c" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xe17678a, "siphash_4u64" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x6fcbf3b0, "__skb_checksum" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa3f425cf, "param_ops_bool" },
	{ 0x67377444, "inet_proto_csum_replace4" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x56470118, "__warn_printk" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x26460072, "nf_defrag_ipv6_enable" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xf94536c2, "proc_dointvec" },
	{ 0x4fbfd817, "nf_nat_hook" },
	{ 0xf44a904a, "net_ns_barrier" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0xb805d2b3, "unregister_net_sysctl_table" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x2154603b, "nf_queue_nf_hook_drop" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x86f6b99d, "synchronize_rcu_expedited" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xe5688684, "pskb_trim_rcsum_slow" },
	{ 0x53b954a2, "up_read" },
	{ 0xe1a8d7c9, "net_rwsem" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x9858f364, "get_random_u8" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x560cd29a, "kmem_cache_destroy" },
	{ 0xa5bdee8c, "release_sock" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nf_defrag_ipv4,nf_defrag_ipv6,libcrc32c");


MODULE_INFO(srcversion, "A40CCCD10BF71DFC9916F69");
