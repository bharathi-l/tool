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

KSYMTAB_FUNC(qrtr_endpoint_post, "_gpl", "");
KSYMTAB_FUNC(qrtr_endpoint_register, "_gpl", "");
KSYMTAB_FUNC(qrtr_endpoint_unregister, "_gpl", "");
KSYMTAB_FUNC(qrtr_ns_init, "_gpl", "");
KSYMTAB_FUNC(qrtr_ns_remove, "_gpl", "");

SYMBOL_CRC(qrtr_endpoint_post, 0x87921a1a, "_gpl");
SYMBOL_CRC(qrtr_endpoint_register, 0x9e48e724, "_gpl");
SYMBOL_CRC(qrtr_endpoint_unregister, 0x25f674bf, "_gpl");
SYMBOL_CRC(qrtr_ns_init, 0xa47e91ba, "_gpl");
SYMBOL_CRC(qrtr_ns_remove, 0x8d25501f, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd4216927, "skb_free_datagram" },
	{ 0x136b25da, "sock_queue_rcv_skb_reason" },
	{ 0x42e5f7b5, "__skb_pad" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x6048275b, "bpf_trace_run4" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0x6fbc6a00, "radix_tree_insert" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x9a25806b, "consume_skb" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4c63d9dd, "trace_raw_output_prep" },
	{ 0xa85bbe00, "__SCT__tp_func_sk_data_ready" },
	{ 0x80816f26, "get_user_ifreq" },
	{ 0x2b8ff6d1, "__trace_trigger_soft_disabled" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xb3e272c9, "trace_event_printf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x4bbbcb6f, "kernel_bind" },
	{ 0x99f7371c, "refcount_dec_and_mutex_lock" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x8959d336, "trace_event_raw_init" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0xdc0192a7, "__tracepoint_sk_data_ready" },
	{ 0xe2964344, "__wake_up" },
	{ 0x857987f3, "kernel_recvmsg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x87a132ef, "sk_error_report" },
	{ 0x8cb09cb0, "skb_queue_purge_reason" },
	{ 0x6dc35b25, "radix_tree_iter_delete" },
	{ 0xcc7c3ecf, "trace_event_buffer_commit" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x7222c16a, "proto_unregister" },
	{ 0x3c90e235, "sock_register" },
	{ 0x5a49628c, "datagram_poll" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x910bb85d, "proto_register" },
	{ 0xc6cbbc89, "capable" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x9114b616, "__xa_alloc" },
	{ 0xafeaf674, "sock_no_shutdown" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0xabcc6fb8, "perf_trace_run_bpf_submit" },
	{ 0xece43bce, "init_net" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2c541e7b, "radix_tree_next_chunk" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0xda959b0f, "__SCK__tp_func_sk_data_ready" },
	{ 0xf9283947, "kernel_getsockname" },
	{ 0x5102a30b, "do_wait_intr_irq" },
	{ 0x36c091de, "sk_free" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xde85399, "sock_no_accept" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe246278b, "skb_push" },
	{ 0x6f5598d1, "sock_no_listen" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xa66f7ccc, "trace_event_reg" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xf3eaf8a7, "lock_sock_nested" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x2e591177, "skb_copy_datagram_iter" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x5f258127, "sk_alloc" },
	{ 0xf4ba9908, "sock_no_socketpair" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x1e54ba33, "sock_no_mmap" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdece0e7e, "__netdev_alloc_skb" },
	{ 0x7dcf4135, "__xa_insert" },
	{ 0x745a981, "xa_erase" },
	{ 0xfaf0475b, "bpf_trace_run3" },
	{ 0x1a8c0f81, "skb_set_owner_w" },
	{ 0x2bc629e5, "trace_event_buffer_reserve" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb3824a12, "sock_create_kern" },
	{ 0x8fa25c24, "xa_find" },
	{ 0x75f63f0d, "skb_recv_datagram" },
	{ 0x73da78ac, "sock_alloc_send_pskb" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x5b3e282f, "xa_store" },
	{ 0xf1de5c0a, "skb_clone" },
	{ 0x15bcc2d9, "_copy_from_iter" },
	{ 0x26ed65de, "sock_release" },
	{ 0x960990a1, "sock_gettstamp" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x754d539c, "strlen" },
	{ 0x4d160fd7, "iov_iter_revert" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf7607ba5, "kernel_sendmsg" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x242851e9, "sock_init_data" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x87809aeb, "put_user_ifreq" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0xa5bdee8c, "release_sock" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "755AB614AD4A741C79A68E0");
