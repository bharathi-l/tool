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

KSYMTAB_DATA(rxrpc_debug_id, "", "");
KSYMTAB_FUNC(rxrpc_kernel_lookup_peer, "", "");
KSYMTAB_FUNC(rxrpc_kernel_get_peer, "", "");
KSYMTAB_FUNC(rxrpc_kernel_put_peer, "", "");
KSYMTAB_FUNC(rxrpc_kernel_begin_call, "", "");
KSYMTAB_FUNC(rxrpc_kernel_shutdown_call, "", "");
KSYMTAB_FUNC(rxrpc_kernel_put_call, "", "");
KSYMTAB_FUNC(rxrpc_kernel_check_life, "", "");
KSYMTAB_FUNC(rxrpc_kernel_get_epoch, "", "");
KSYMTAB_FUNC(rxrpc_kernel_new_call_notification, "", "");
KSYMTAB_FUNC(rxrpc_kernel_set_max_life, "", "");
KSYMTAB_FUNC(rxrpc_sock_set_min_security_level, "", "");
KSYMTAB_FUNC(rxrpc_kernel_charge_accept, "", "");
KSYMTAB_DATA(key_type_rxrpc, "", "");
KSYMTAB_FUNC(rxrpc_get_server_data_key, "", "");
KSYMTAB_FUNC(rxrpc_get_null_key, "", "");
KSYMTAB_FUNC(rxrpc_kernel_get_call_peer, "", "");
KSYMTAB_FUNC(rxrpc_kernel_get_srtt, "", "");
KSYMTAB_FUNC(rxrpc_kernel_remote_srx, "", "");
KSYMTAB_FUNC(rxrpc_kernel_remote_addr, "", "");
KSYMTAB_FUNC(rxrpc_kernel_recv_data, "", "");
KSYMTAB_FUNC(rxrpc_kernel_send_data, "", "");
KSYMTAB_FUNC(rxrpc_kernel_abort_call, "", "");
KSYMTAB_FUNC(rxrpc_kernel_set_tx_length, "", "");
KSYMTAB_FUNC(rxrpc_sock_set_security_keyring, "", "");

SYMBOL_CRC(rxrpc_debug_id, 0x31bf3ca3, "");
SYMBOL_CRC(rxrpc_kernel_lookup_peer, 0x78d7fee3, "");
SYMBOL_CRC(rxrpc_kernel_get_peer, 0x8caf5b1d, "");
SYMBOL_CRC(rxrpc_kernel_put_peer, 0x85de9451, "");
SYMBOL_CRC(rxrpc_kernel_begin_call, 0x097c64fb, "");
SYMBOL_CRC(rxrpc_kernel_shutdown_call, 0xee6e7493, "");
SYMBOL_CRC(rxrpc_kernel_put_call, 0xd584b49a, "");
SYMBOL_CRC(rxrpc_kernel_check_life, 0x4150f887, "");
SYMBOL_CRC(rxrpc_kernel_get_epoch, 0x07ec17ed, "");
SYMBOL_CRC(rxrpc_kernel_new_call_notification, 0xd9feb6ad, "");
SYMBOL_CRC(rxrpc_kernel_set_max_life, 0x9f910298, "");
SYMBOL_CRC(rxrpc_sock_set_min_security_level, 0x2a17e794, "");
SYMBOL_CRC(rxrpc_kernel_charge_accept, 0x5424ebc2, "");
SYMBOL_CRC(key_type_rxrpc, 0x05a1c0ad, "");
SYMBOL_CRC(rxrpc_get_server_data_key, 0xe61d80d8, "");
SYMBOL_CRC(rxrpc_get_null_key, 0x55c20f6d, "");
SYMBOL_CRC(rxrpc_kernel_get_call_peer, 0xa139dd1f, "");
SYMBOL_CRC(rxrpc_kernel_get_srtt, 0x953550de, "");
SYMBOL_CRC(rxrpc_kernel_remote_srx, 0xe46b0b9c, "");
SYMBOL_CRC(rxrpc_kernel_remote_addr, 0x887f6b2d, "");
SYMBOL_CRC(rxrpc_kernel_recv_data, 0xa89fef19, "");
SYMBOL_CRC(rxrpc_kernel_send_data, 0x0b22cf48, "");
SYMBOL_CRC(rxrpc_kernel_abort_call, 0x71354e3e, "");
SYMBOL_CRC(rxrpc_kernel_set_tx_length, 0x29cace06, "");
SYMBOL_CRC(rxrpc_sock_set_security_keyring, 0x5d7642cb, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5c7569ec, "crypto_skcipher_encrypt" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xaee5875, "key_alloc" },
	{ 0x6048275b, "bpf_trace_run4" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0x20978fb9, "idr_find" },
	{ 0xd786c3ef, "param_ops_uint" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x9a25806b, "consume_skb" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4c63d9dd, "trace_raw_output_prep" },
	{ 0xa5cecfa, "udp_sock_create4" },
	{ 0x91c81571, "bpf_trace_run6" },
	{ 0xf346231f, "seq_list_start_head" },
	{ 0xb5f5c77e, "skb_dequeue" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x2b8ff6d1, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xb3e272c9, "trace_event_printf" },
	{ 0x67b78eb3, "seq_hlist_next_rcu" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xde293f9e, "add_wait_queue_exclusive" },
	{ 0x4559fced, "set_user_nice" },
	{ 0xcf2a6966, "up" },
	{ 0xd142c636, "udpv6_sendmsg" },
	{ 0xf2a9a34b, "unregister_key_type" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x8959d336, "trace_event_raw_init" },
	{ 0x8900d05a, "trace_print_symbols_seq" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x67176dae, "key_type_keyring" },
	{ 0x43babd19, "sg_init_one" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0xcf7b3b54, "bpf_trace_run2" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xe2964344, "__wake_up" },
	{ 0x5f4dab15, "crypto_skcipher_setkey" },
	{ 0x983836c5, "ip_route_output_flow" },
	{ 0x3754fb97, "kmem_cache_create" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xd242e453, "key_instantiate_and_link" },
	{ 0x479aac1, "seq_list_next_rcu" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xc84a0a7e, "seq_hlist_start_rcu" },
	{ 0x100b6bda, "register_key_type" },
	{ 0x65f11366, "proc_create_net_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8f099454, "put_cmsg" },
	{ 0x9262e632, "wake_up_process" },
	{ 0xcc7c3ecf, "trace_event_buffer_commit" },
	{ 0x9feed7ce, "timer_reduce" },
	{ 0xb3012895, "register_net_sysctl_sz" },
	{ 0x14fc6972, "crypto_destroy_tfm" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0x7222c16a, "proto_unregister" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x428692b9, "ipv6_icmp_error" },
	{ 0x3c90e235, "sock_register" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x6905d5f8, "crypto_skcipher_decrypt" },
	{ 0x1da035f6, "make_kuid" },
	{ 0x2b3cbef0, "ip6_route_output_flags" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x3cfdd46f, "kmem_cache_alloc" },
	{ 0x910bb85d, "proto_register" },
	{ 0x5d49aabc, "init_wait_var_entry" },
	{ 0xd6a7d5b2, "skb_queue_tail" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x5e332b52, "__var_waitqueue" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc2c5802, "work_busy" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x5ef32d9b, "__sock_recv_timestamp" },
	{ 0x851725d3, "key_put" },
	{ 0x4e547048, "__kmalloc_node_track_caller" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0xabcc6fb8, "perf_trace_run_bpf_submit" },
	{ 0xece43bce, "init_net" },
	{ 0xc084677a, "skb_pull" },
	{ 0x5968dc6d, "proc_doulongvec_ms_jiffies_minmax" },
	{ 0xa07a37f0, "memchr" },
	{ 0x945207a7, "sock_enable_timestamps" },
	{ 0xb3729b89, "ip_sock_set_mtu_discover" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6e068e63, "ip6_mtu" },
	{ 0x6626afca, "down" },
	{ 0xa9563011, "bpf_trace_run5" },
	{ 0x36c091de, "sk_free" },
	{ 0xdf9c13e8, "sock_wake_async" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x9604c6bb, "kernel_sock_shutdown" },
	{ 0xde85399, "sock_no_accept" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4ebf36a1, "kmem_cache_free" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x9092defd, "proc_doulongvec_minmax" },
	{ 0xa66f7ccc, "trace_event_reg" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x2a718f47, "iov_iter_kvec" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xeba8170b, "unregister_pernet_device" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xb1518e15, "cancel_work" },
	{ 0xf3eaf8a7, "lock_sock_nested" },
	{ 0x1b9d54ff, "kthread_stop" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x2e591177, "skb_copy_datagram_iter" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x91f44510, "idr_alloc_cyclic" },
	{ 0xf8f61ebc, "wake_up_var" },
	{ 0x1f5d32a8, "udp_sendmsg" },
	{ 0x11089ac7, "_ctype" },
	{ 0x5f258127, "sk_alloc" },
	{ 0x66c4f5f8, "bpf_trace_run1" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x26f0d865, "__sock_recv_wifi_status" },
	{ 0xf4ba9908, "sock_no_socketpair" },
	{ 0xfb578fc5, "memset" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0x850159b, "key_revoke" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x1e54ba33, "sock_no_mmap" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcf4fdd4d, "_atomic_dec_and_lock" },
	{ 0xb16af5c0, "key_validate" },
	{ 0x21adc399, "crypto_alloc_sync_skcipher" },
	{ 0xe6778d60, "setup_udp_tunnel_sock" },
	{ 0xcce9deba, "proc_remove" },
	{ 0x38f28782, "udp_sock_create6" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4b27709a, "kthread_create_on_node" },
	{ 0xfaf0475b, "bpf_trace_run3" },
	{ 0xd76a3397, "__page_frag_cache_drain" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x9c6690db, "ipv4_mtu" },
	{ 0x2bc629e5, "trace_event_buffer_reserve" },
	{ 0x4e61aeac, "keyring_search" },
	{ 0x8bf5c604, "ip_sock_set_recverr" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc622556f, "prepare_to_wait_exclusive" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x40628c4a, "request_key_tag" },
	{ 0x9fea17e7, "generic_key_instantiate" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x6d5f5b91, "radix_tree_tagged" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x9b8d9591, "sock_no_getname" },
	{ 0x56470118, "__warn_printk" },
	{ 0x13fe5644, "seq_printf" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x2db5a302, "skb_copy" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf1de5c0a, "skb_clone" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x986d6241, "dst_release" },
	{ 0x15bcc2d9, "_copy_from_iter" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x26ed65de, "sock_release" },
	{ 0x7adc0fbf, "rb_replace_node_rcu" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x8cf244f1, "seq_puts" },
	{ 0x62e9cfe4, "sock_no_ioctl" },
	{ 0x9cbd991d, "_proc_mkdir" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xb805d2b3, "unregister_net_sysctl_table" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x4ce0f44d, "__page_frag_alloc_align" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x754d539c, "strlen" },
	{ 0x5127e452, "bpf_trace_run7" },
	{ 0x54dc701, "ip_icmp_error" },
	{ 0x4d160fd7, "iov_iter_revert" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x50944630, "seq_list_start_head_rcu" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf7607ba5, "kernel_sendmsg" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x81530595, "skb_to_sgvec" },
	{ 0xa802aea8, "register_pernet_device" },
	{ 0x1166147f, "skb_condense" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x242851e9, "sock_init_data" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x560cd29a, "kmem_cache_destroy" },
	{ 0xa5bdee8c, "release_sock" },
	{ 0x1c5402a3, "skb_queue_head" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9aeb65c4, "proc_create_net_single_write" },
	{ 0xd3b2e056, "crypto_alloc_skcipher" },
	{ 0x2801a22f, "proc_dointvec_minmax" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "udp_tunnel,ip6_udp_tunnel");


MODULE_INFO(srcversion, "60A11F8AC326DBF979FBE69");
