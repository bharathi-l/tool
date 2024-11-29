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

KSYMTAB_FUNC(tls_device_sk_destruct, "_gpl", "");
KSYMTAB_FUNC(tls_offload_tx_resync_request, "_gpl", "");
KSYMTAB_FUNC(tls_get_record, "", "");
KSYMTAB_FUNC(tls_validate_xmit_skb, "_gpl", "");
KSYMTAB_FUNC(tls_encrypt_skb, "_gpl", "");

SYMBOL_CRC(tls_device_sk_destruct, 0x97d611c0, "_gpl");
SYMBOL_CRC(tls_offload_tx_resync_request, 0x61271ea3, "_gpl");
SYMBOL_CRC(tls_get_record, 0x038f120b, "");
SYMBOL_CRC(tls_validate_xmit_skb, 0xe223804c, "_gpl");
SYMBOL_CRC(tls_encrypt_skb, 0x9006d692, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4a9c9d9f, "sk_msg_free" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x35a5a23d, "tcp_bpf_sendmsg_redir" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xad3ac9fc, "tcp_read_sock" },
	{ 0x6048275b, "bpf_trace_run4" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xd2fda55c, "sk_page_frag_refill" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x5c0a40a0, "tcp_sendmsg_locked" },
	{ 0x9a25806b, "consume_skb" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4c63d9dd, "trace_raw_output_prep" },
	{ 0xa85bbe00, "__SCT__tp_func_sk_data_ready" },
	{ 0x95d324d, "sk_psock_msg_verdict" },
	{ 0x91c81571, "bpf_trace_run6" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x2b8ff6d1, "__trace_trigger_soft_disabled" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xb3e272c9, "trace_event_printf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x402c3f50, "iov_iter_get_pages2" },
	{ 0x692ed195, "___pskb_trim" },
	{ 0x8959d336, "trace_event_raw_init" },
	{ 0xbfc1d1a, "check_zeroed_user" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x7a53770b, "__put_devmap_managed_page_refs" },
	{ 0xf0dd36d2, "clean_acked_data_enable" },
	{ 0x9d5fe588, "skb_splice_bits" },
	{ 0x666d1046, "crypto_alloc_aead" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0xdc0192a7, "__tracepoint_sk_data_ready" },
	{ 0xe2384317, "crypto_aead_setauthsize" },
	{ 0xc4fe251, "crypto_aead_decrypt" },
	{ 0xe2964344, "__wake_up" },
	{ 0xa12ee544, "sk_stream_error" },
	{ 0x1b274b23, "sk_msg_recvmsg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe2bfa4f8, "sk_msg_memcopy_from_iter" },
	{ 0x87a132ef, "sk_error_report" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0x8f099454, "put_cmsg" },
	{ 0x77e1509a, "__sk_flush_backlog" },
	{ 0xcc7c3ecf, "trace_event_buffer_commit" },
	{ 0x14fc6972, "crypto_destroy_tfm" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xd55c00c9, "sk_psock_tls_strp_read" },
	{ 0x3be39db4, "sk_msg_clone" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xb37bdb51, "tcp_unregister_ulp" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xeb3acd83, "iov_iter_extract_pages" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc2a814db, "tcp_memory_pressure" },
	{ 0xbe314cb8, "tcp_recv_skb" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0x44aeae89, "crypto_aead_setkey" },
	{ 0x33338211, "rcuref_get_slowpath" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0xabcc6fb8, "perf_trace_run_bpf_submit" },
	{ 0x57bc19d2, "down_write" },
	{ 0xa8e458b, "crypto_req_done" },
	{ 0xce807a25, "up_write" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xe94ef447, "crypto_aead_encrypt" },
	{ 0xda959b0f, "__SCK__tp_func_sk_data_ready" },
	{ 0xa9563011, "bpf_trace_run5" },
	{ 0x36c091de, "sk_free" },
	{ 0x126cbd68, "skb_store_bits" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7c53999, "__sk_mem_reclaim" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x543cf705, "sk_stream_wait_memory" },
	{ 0xd5a43273, "nla_put" },
	{ 0xa66f7ccc, "trace_event_reg" },
	{ 0x2a718f47, "iov_iter_kvec" },
	{ 0xeae0f496, "clean_acked_data_flush" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xd5d41543, "sock_recv_errqueue" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xf3eaf8a7, "lock_sock_nested" },
	{ 0xedf39c69, "sk_msg_return_zero" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x2e591177, "skb_copy_datagram_iter" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x66c4f5f8, "bpf_trace_run1" },
	{ 0x14b9592, "tcp_stream_memory_free" },
	{ 0x3dabf271, "memcg_sockets_enabled_key" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x844c5de4, "sock_efree" },
	{ 0x8c3f85ca, "iov_iter_bvec" },
	{ 0x3931717e, "kfree_skb_list_reason" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xf3bdc793, "clean_acked_data_disable" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xd7a69285, "sk_msg_free_partial" },
	{ 0x668b19a1, "down_read" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x1c972bd5, "alloc_skb_with_frags" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbaa9b8e8, "tcp_register_ulp" },
	{ 0xfaf0475b, "bpf_trace_run3" },
	{ 0xf2b33cb7, "memory_cgrp_subsys_on_dfl_key" },
	{ 0xca4b4b74, "sk_psock_drop" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x9f08c714, "scatterwalk_copychunks" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xbb59dffb, "skb_page_frag_refill" },
	{ 0x2bc629e5, "trace_event_buffer_reserve" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xb73d873d, "sk_msg_free_nocharge" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xf97a77c8, "alloc_pages" },
	{ 0xfbe215e4, "sg_next" },
	{ 0xf8641358, "__folio_put" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x63fd798c, "remove_proc_entry" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x13fe5644, "seq_printf" },
	{ 0x1e1661a6, "proc_create_net_single" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf1de5c0a, "skb_clone" },
	{ 0x986d6241, "dst_release" },
	{ 0x15bcc2d9, "_copy_from_iter" },
	{ 0x5e9f6a2b, "skb_copy_header" },
	{ 0x9d62ad44, "sk_msg_trim" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xdf9734a7, "sg_nents" },
	{ 0x72c4fdf1, "netdev_sk_get_lowest_dev" },
	{ 0x4dd3531d, "sk_msg_alloc" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x7b9c8b7, "_copy_from_iter_nocache" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x567fe8f8, "tcp_rate_check_app_limited" },
	{ 0xa3c284b3, "tcp_poll" },
	{ 0x4d160fd7, "iov_iter_revert" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x97c0011, "sk_msg_zerocopy_from_iter" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x81530595, "skb_to_sgvec" },
	{ 0x53b954a2, "up_read" },
	{ 0x62eceb9d, "iov_iter_npages" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0xfd6335a3, "tcp_read_done" },
	{ 0xa5bdee8c, "release_sock" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "85E1687F2E87830376EFFB0");
