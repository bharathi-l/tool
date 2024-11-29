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

KSYMTAB_FUNC(dccp_feat_list_purge, "_gpl", "");
KSYMTAB_FUNC(dccp_feat_nn_get, "_gpl", "");
KSYMTAB_FUNC(dccp_feat_signal_nn_change, "_gpl", "");
KSYMTAB_FUNC(dccp_rcv_established, "_gpl", "");
KSYMTAB_FUNC(dccp_rcv_state_process, "_gpl", "");
KSYMTAB_DATA(dccp_death_row, "_gpl", "");
KSYMTAB_FUNC(dccp_create_openreq_child, "_gpl", "");
KSYMTAB_FUNC(dccp_check_req, "_gpl", "");
KSYMTAB_FUNC(dccp_child_process, "_gpl", "");
KSYMTAB_FUNC(dccp_reqsk_send_ack, "_gpl", "");
KSYMTAB_FUNC(dccp_reqsk_init, "_gpl", "");
KSYMTAB_FUNC(dccp_parse_options, "_gpl", "");
KSYMTAB_FUNC(dccp_insert_option, "_gpl", "");
KSYMTAB_FUNC(dccp_sync_mss, "_gpl", "");
KSYMTAB_FUNC(dccp_make_response, "_gpl", "");
KSYMTAB_FUNC(dccp_ctl_make_reset, "_gpl", "");
KSYMTAB_FUNC(dccp_connect, "_gpl", "");
KSYMTAB_FUNC(dccp_send_ack, "_gpl", "");
KSYMTAB_FUNC(dccp_send_sync, "_gpl", "");
KSYMTAB_DATA(dccp_statistics, "_gpl", "");
KSYMTAB_DATA(dccp_orphan_count, "_gpl", "");
KSYMTAB_DATA(dccp_hashinfo, "_gpl", "");
KSYMTAB_FUNC(dccp_set_state, "_gpl", "");
KSYMTAB_FUNC(dccp_done, "_gpl", "");
KSYMTAB_FUNC(dccp_packet_name, "_gpl", "");
KSYMTAB_FUNC(dccp_destruct_common, "_gpl", "");
KSYMTAB_FUNC(dccp_init_sock, "_gpl", "");
KSYMTAB_FUNC(dccp_destroy_sock, "_gpl", "");
KSYMTAB_FUNC(dccp_disconnect, "_gpl", "");
KSYMTAB_FUNC(dccp_poll, "_gpl", "");
KSYMTAB_FUNC(dccp_ioctl, "_gpl", "");
KSYMTAB_FUNC(dccp_setsockopt, "_gpl", "");
KSYMTAB_FUNC(dccp_getsockopt, "_gpl", "");
KSYMTAB_FUNC(dccp_sendmsg, "_gpl", "");
KSYMTAB_FUNC(dccp_recvmsg, "_gpl", "");
KSYMTAB_FUNC(inet_dccp_listen, "_gpl", "");
KSYMTAB_FUNC(dccp_close, "_gpl", "");
KSYMTAB_FUNC(dccp_shutdown, "_gpl", "");
KSYMTAB_FUNC(dccp_timestamp, "_gpl", "");
KSYMTAB_FUNC(dccp_ackvec_parsed_add, "_gpl", "");
KSYMTAB_FUNC(dccp_ackvec_parsed_cleanup, "_gpl", "");

SYMBOL_CRC(dccp_feat_list_purge, 0x4cdd391d, "_gpl");
SYMBOL_CRC(dccp_feat_nn_get, 0xd560631d, "_gpl");
SYMBOL_CRC(dccp_feat_signal_nn_change, 0x0791e320, "_gpl");
SYMBOL_CRC(dccp_rcv_established, 0x557f9790, "_gpl");
SYMBOL_CRC(dccp_rcv_state_process, 0x1b02f62d, "_gpl");
SYMBOL_CRC(dccp_death_row, 0x8171199a, "_gpl");
SYMBOL_CRC(dccp_create_openreq_child, 0x27bbe710, "_gpl");
SYMBOL_CRC(dccp_check_req, 0xd8040259, "_gpl");
SYMBOL_CRC(dccp_child_process, 0xc9db1b5d, "_gpl");
SYMBOL_CRC(dccp_reqsk_send_ack, 0x32d3b027, "_gpl");
SYMBOL_CRC(dccp_reqsk_init, 0xcbe3af45, "_gpl");
SYMBOL_CRC(dccp_parse_options, 0x7ed73fa6, "_gpl");
SYMBOL_CRC(dccp_insert_option, 0x9e90a95e, "_gpl");
SYMBOL_CRC(dccp_sync_mss, 0x745d9a0c, "_gpl");
SYMBOL_CRC(dccp_make_response, 0xabbb2310, "_gpl");
SYMBOL_CRC(dccp_ctl_make_reset, 0x0a3a2eff, "_gpl");
SYMBOL_CRC(dccp_connect, 0x0005d39c, "_gpl");
SYMBOL_CRC(dccp_send_ack, 0x49a28c36, "_gpl");
SYMBOL_CRC(dccp_send_sync, 0xeacdc051, "_gpl");
SYMBOL_CRC(dccp_statistics, 0x59814a84, "_gpl");
SYMBOL_CRC(dccp_orphan_count, 0xd75b7072, "_gpl");
SYMBOL_CRC(dccp_hashinfo, 0xd7cdb975, "_gpl");
SYMBOL_CRC(dccp_set_state, 0x30bfdeb6, "_gpl");
SYMBOL_CRC(dccp_done, 0xcf8c33a4, "_gpl");
SYMBOL_CRC(dccp_packet_name, 0x86be7924, "_gpl");
SYMBOL_CRC(dccp_destruct_common, 0xf0ef1225, "_gpl");
SYMBOL_CRC(dccp_init_sock, 0x20039d5d, "_gpl");
SYMBOL_CRC(dccp_destroy_sock, 0xac2b3161, "_gpl");
SYMBOL_CRC(dccp_disconnect, 0x6e993426, "_gpl");
SYMBOL_CRC(dccp_poll, 0x236a6e89, "_gpl");
SYMBOL_CRC(dccp_ioctl, 0xcc72ca5e, "_gpl");
SYMBOL_CRC(dccp_setsockopt, 0xd2115e9a, "_gpl");
SYMBOL_CRC(dccp_getsockopt, 0xb080cd1b, "_gpl");
SYMBOL_CRC(dccp_sendmsg, 0x67ea18eb, "_gpl");
SYMBOL_CRC(dccp_recvmsg, 0xe5b67eab, "_gpl");
SYMBOL_CRC(inet_dccp_listen, 0xf30c6ca2, "_gpl");
SYMBOL_CRC(dccp_close, 0x555c1b5c, "_gpl");
SYMBOL_CRC(dccp_shutdown, 0x9fbf5caa, "_gpl");
SYMBOL_CRC(dccp_timestamp, 0x80993155, "_gpl");
SYMBOL_CRC(dccp_ackvec_parsed_add, 0x182ec2bf, "_gpl");
SYMBOL_CRC(dccp_ackvec_parsed_cleanup, 0x9598d24d, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3e0a087f, "inet_hashinfo2_init_mod" },
	{ 0x27f5781b, "inet_bhash2_reset_saddr" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x174e6c46, "inet_ehash_locks_alloc" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9a25806b, "consume_skb" },
	{ 0xd2937cf2, "sock_wmalloc" },
	{ 0x4c63d9dd, "trace_raw_output_prep" },
	{ 0xb5f5c77e, "skb_dequeue" },
	{ 0x2b8ff6d1, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xb3e272c9, "trace_event_printf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x4c236f6f, "__x86_indirect_thunk_r15" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x8959d336, "trace_event_raw_init" },
	{ 0x100bddf8, "proc_dointvec_ms_jiffies" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0xcf7b3b54, "bpf_trace_run2" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe2964344, "__wake_up" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x794fecca, "inet_csk_clear_xmit_timers" },
	{ 0x148653, "vsnprintf" },
	{ 0x3754fb97, "kmem_cache_create" },
	{ 0x7e17212f, "inet_twsk_alloc" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x87a132ef, "sk_error_report" },
	{ 0xcc7c3ecf, "trace_event_buffer_commit" },
	{ 0xb3012895, "register_net_sysctl_sz" },
	{ 0xb54c88de, "inet_sock_destruct" },
	{ 0xb0d5f773, "inet_put_port" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x122c3a7e, "_printk" },
	{ 0xfdc944fa, "inet_csk_init_xmit_timers" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x5bdc508f, "sk_reset_timer" },
	{ 0x3cfdd46f, "kmem_cache_alloc" },
	{ 0xd6a7d5b2, "skb_queue_tail" },
	{ 0xf49f4640, "sk_stream_wait_close" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xf924a3, "inet_twsk_hashdance" },
	{ 0x4e547048, "__kmalloc_node_track_caller" },
	{ 0x33338211, "rcuref_get_slowpath" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0xabcc6fb8, "perf_trace_run_bpf_submit" },
	{ 0xece43bce, "init_net" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6e068e63, "ip6_mtu" },
	{ 0x36c091de, "sk_free" },
	{ 0xdf9c13e8, "sock_wake_async" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xe246278b, "skb_push" },
	{ 0x4ebf36a1, "kmem_cache_free" },
	{ 0x9092defd, "proc_doulongvec_minmax" },
	{ 0xa66f7ccc, "trace_event_reg" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0xf3eaf8a7, "lock_sock_nested" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x944375db, "_totalram_pages" },
	{ 0x2e591177, "skb_copy_datagram_iter" },
	{ 0x14b9592, "tcp_stream_memory_free" },
	{ 0x201b4e4b, "skb_checksum" },
	{ 0xfb578fc5, "memset" },
	{ 0x790c3085, "sk_wait_data" },
	{ 0xff9cfbb9, "inet_csk_clone_lock" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x11ed6da9, "skb_unlink" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x71abc211, "inet_csk_listen_start" },
	{ 0xc8d2011d, "sk_free_unlock_clone" },
	{ 0x1fad1a56, "sock_rfree" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x9c6690db, "ipv4_mtu" },
	{ 0x1a8c0f81, "skb_set_owner_w" },
	{ 0x2bc629e5, "trace_event_buffer_reserve" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa3f425cf, "param_ops_bool" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x73da78ac, "sock_alloc_send_pskb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xf1de5c0a, "skb_clone" },
	{ 0x1e712e46, "inet_sk_set_state" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x986d6241, "dst_release" },
	{ 0x9a87163a, "sk_stream_wait_connect" },
	{ 0x15bcc2d9, "_copy_from_iter" },
	{ 0x36b58995, "inet_csk_destroy_sock" },
	{ 0xa3794ec3, "sk_stop_timer" },
	{ 0xb805d2b3, "unregister_net_sysctl_table" },
	{ 0xf881a015, "inet_rtx_syn_ack" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x47d0e073, "param_ops_int" },
	{ 0x4d160fd7, "iov_iter_revert" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xa0cacffb, "inet_csk_listen_stop" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0xe7352373, "__kfree_skb" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x560cd29a, "kmem_cache_destroy" },
	{ 0xdb4f0f73, "inet_csk_complete_hashdance" },
	{ 0xa5bdee8c, "release_sock" },
	{ 0x70b071eb, "inet_csk_reqsk_queue_drop" },
	{ 0xf818a6cf, "__inet_twsk_schedule" },
	{ 0x2801a22f, "proc_dointvec_minmax" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6C7F6F98779F70B573EF329");
