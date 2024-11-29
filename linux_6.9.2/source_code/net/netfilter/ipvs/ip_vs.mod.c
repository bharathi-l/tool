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

KSYMTAB_FUNC(ip_vs_conn_in_get_proto, "_gpl", "");
KSYMTAB_FUNC(ip_vs_conn_out_get_proto, "_gpl", "");
KSYMTAB_FUNC(register_ip_vs_scheduler, "", "");
KSYMTAB_FUNC(unregister_ip_vs_scheduler, "", "");
KSYMTAB_FUNC(ip_vs_proto_name, "", "");
KSYMTAB_FUNC(ip_vs_conn_new, "", "");
KSYMTAB_FUNC(ip_vs_conn_in_get, "", "");
KSYMTAB_FUNC(ip_vs_conn_out_get, "", "");
KSYMTAB_FUNC(ip_vs_tcp_conn_listen, "", "");
KSYMTAB_FUNC(ip_vs_conn_put, "", "");
KSYMTAB_FUNC(ip_vs_new_conn_out, "", "");
KSYMTAB_FUNC(ip_vs_scheduler_err, "", "");
KSYMTAB_FUNC(register_ip_vs_app, "", "");
KSYMTAB_FUNC(unregister_ip_vs_app, "", "");
KSYMTAB_FUNC(register_ip_vs_app_inc, "", "");
KSYMTAB_FUNC(ip_vs_proto_get, "", "");
KSYMTAB_FUNC(ip_vs_proto_data_get, "", "");
KSYMTAB_FUNC(register_ip_vs_pe, "_gpl", "");
KSYMTAB_FUNC(unregister_ip_vs_pe, "_gpl", "");
KSYMTAB_FUNC(ip_vs_nfct_expect_related, "", "");

SYMBOL_CRC(ip_vs_conn_in_get_proto, 0x8ca52919, "_gpl");
SYMBOL_CRC(ip_vs_conn_out_get_proto, 0xae730a35, "_gpl");
SYMBOL_CRC(register_ip_vs_scheduler, 0xbadc9a69, "");
SYMBOL_CRC(unregister_ip_vs_scheduler, 0x8366190e, "");
SYMBOL_CRC(ip_vs_proto_name, 0xd831a1a2, "");
SYMBOL_CRC(ip_vs_conn_new, 0x4e7ebb26, "");
SYMBOL_CRC(ip_vs_conn_in_get, 0x7e0635b1, "");
SYMBOL_CRC(ip_vs_conn_out_get, 0x9cbe49e5, "");
SYMBOL_CRC(ip_vs_tcp_conn_listen, 0xd59d5b37, "");
SYMBOL_CRC(ip_vs_conn_put, 0xd06611fd, "");
SYMBOL_CRC(ip_vs_new_conn_out, 0x2c7f8897, "");
SYMBOL_CRC(ip_vs_scheduler_err, 0x5974124a, "");
SYMBOL_CRC(register_ip_vs_app, 0xe183ce99, "");
SYMBOL_CRC(unregister_ip_vs_app, 0xfaf57845, "");
SYMBOL_CRC(register_ip_vs_app_inc, 0x460b928b, "");
SYMBOL_CRC(ip_vs_proto_get, 0xf22b99ad, "");
SYMBOL_CRC(ip_vs_proto_data_get, 0xb1bb7028, "");
SYMBOL_CRC(register_ip_vs_pe, 0x3fb2bc5c, "_gpl");
SYMBOL_CRC(unregister_ip_vs_pe, 0x737af5d8, "_gpl");
SYMBOL_CRC(ip_vs_nfct_expect_related, 0x0367983c, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x42f71abc, "nf_ct_ext_add" },
	{ 0x1b015d25, "bitmap_parselist" },
	{ 0x57848526, "nf_conntrack_find_get" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x18f58619, "try_module_get" },
	{ 0x77cb34c6, "__ip_select_ident" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x17feaa56, "icmp6_send" },
	{ 0x27fa66e1, "nr_free_buffer_pages" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0xa629c6cf, "xfrm_lookup" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xe2bbfa56, "proc_dointvec_jiffies" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xae9852a0, "housekeeping_cpumask" },
	{ 0x9a25806b, "consume_skb" },
	{ 0xa5c10cfa, "ip6_local_out" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x1e0a0c24, "mod_timer_pending" },
	{ 0xeff25db6, "ip_output" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe8cc0195, "nf_register_sockopt" },
	{ 0xb7f54816, "nla_put_64bit" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x3733777f, "nf_ct_netns_get" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x89d99ee1, "__nf_ct_ext_find" },
	{ 0x96848186, "scnprintf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x4bbbcb6f, "kernel_bind" },
	{ 0x4559fced, "set_user_nice" },
	{ 0xc760ce2d, "genlmsg_put" },
	{ 0x32a66e33, "udp_set_csum" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xe23b37f, "alloc_cpumask_var_node" },
	{ 0xff0bd83a, "ip6_output" },
	{ 0x62c503a1, "ip6_route_me_harder" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0xeca957d1, "__bitmap_and" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xdc2b2807, "__module_get" },
	{ 0x983836c5, "ip_route_output_flow" },
	{ 0x3754fb97, "kmem_cache_create" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x69778625, "iptunnel_handle_offloads" },
	{ 0xac3201b0, "udp_flow_hashrnd" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x6114cf8a, "__dev_get_by_name" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x65f11366, "proc_create_net_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa2066eb8, "pskb_expand_head" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0x9262e632, "wake_up_process" },
	{ 0x9ae47436, "_find_last_bit" },
	{ 0xb3012895, "register_net_sysctl_sz" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xaf4f0d7f, "nf_unregister_sockopt" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x17d89efe, "nf_register_net_hooks" },
	{ 0x2b3cbef0, "ip6_route_output_flags" },
	{ 0xa916b694, "strnlen" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x3cfdd46f, "kmem_cache_alloc" },
	{ 0xb325479b, "ipv6_sock_mc_join" },
	{ 0xd47a039c, "module_put" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xfac8865f, "sysctl_wmem_max" },
	{ 0xb05fc310, "sysctl_rmem_max" },
	{ 0x49029e4b, "ipv6_dev_get_saddr" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb65b063c, "__skb_get_hash" },
	{ 0xece43bce, "init_net" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6e068e63, "ip6_mtu" },
	{ 0xc6f3b3fc, "refcount_dec_if_one" },
	{ 0x8911bab3, "netlink_unicast" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x641eb8, "nf_ct_expect_related_report" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0x816dfe80, "ip_route_me_harder" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe246278b, "skb_push" },
	{ 0x4ebf36a1, "kmem_cache_free" },
	{ 0x37a56662, "set_cpus_allowed_ptr" },
	{ 0x4be84ba, "seq_putc" },
	{ 0xd5a43273, "nla_put" },
	{ 0x9092defd, "proc_doulongvec_minmax" },
	{ 0xc28997d7, "nf_ct_expect_alloc" },
	{ 0xc9271504, "skb_ensure_writable" },
	{ 0x2a718f47, "iov_iter_kvec" },
	{ 0x8878842f, "ip_mc_join_group" },
	{ 0x286b5af5, "nf_ct_expect_put" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x863b8d86, "ns_capable" },
	{ 0xf4f62fa0, "nf_unregister_net_hooks" },
	{ 0x9e615eaf, "inet_select_addr" },
	{ 0xeba8170b, "unregister_pernet_device" },
	{ 0xf3eaf8a7, "lock_sock_nested" },
	{ 0xc507dcd9, "inet_addr_type" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x944375db, "_totalram_pages" },
	{ 0x1b9d54ff, "kthread_stop" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x641b8663, "__nf_conntrack_confirm" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xa49408df, "kernel_connect" },
	{ 0x201b4e4b, "skb_checksum" },
	{ 0x2db35cf7, "ip_defrag" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0xa6ee3b65, "nf_ct_delete" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x32bffce8, "nf_hook_slow" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4b27709a, "kthread_create_on_node" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0xd83898d5, "nf_hooks_needed" },
	{ 0x1c8e0a09, "nf_ct_deliver_cached_events" },
	{ 0xb6983911, "skb_realloc_headroom" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x32779b9, "ipv6_find_hdr" },
	{ 0xb15b4109, "crc32c" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x2041fe35, "__icmp_send" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x9c6690db, "ipv4_mtu" },
	{ 0x1a8c0f81, "skb_set_owner_w" },
	{ 0x6fcbf3b0, "__skb_checksum" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xb3824a12, "sock_create_kern" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x65441f22, "init_user_ns" },
	{ 0xadb85c52, "nf_ct_expect_init" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x63fd798c, "remove_proc_entry" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x13fe5644, "seq_printf" },
	{ 0xa6645c69, "sock_recvmsg" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0x5089f45f, "ip_send_check" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0x1e1661a6, "proc_create_net_single" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb5e7370, "ipv4_update_pmtu" },
	{ 0x26460072, "nf_defrag_ipv6_enable" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x986d6241, "dst_release" },
	{ 0x26ed65de, "sock_release" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf94536c2, "proc_dointvec" },
	{ 0x8cf244f1, "seq_puts" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0xb805d2b3, "unregister_net_sysctl_table" },
	{ 0xe3d1897d, "ip_local_out" },
	{ 0xc01b7698, "genl_unregister_family" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x754d539c, "strlen" },
	{ 0x1783724b, "udp6_set_csum" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x47d0e073, "param_ops_int" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xf20b36c9, "genl_register_family" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf7607ba5, "kernel_sendmsg" },
	{ 0x3ac4525b, "nf_ct_netns_put" },
	{ 0xa802aea8, "register_pernet_device" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x560cd29a, "kmem_cache_destroy" },
	{ 0xa5bdee8c, "release_sock" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2801a22f, "proc_dointvec_minmax" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack,libcrc32c,nf_defrag_ipv6");


MODULE_INFO(srcversion, "B0487CA1434211DA0E128AF");
