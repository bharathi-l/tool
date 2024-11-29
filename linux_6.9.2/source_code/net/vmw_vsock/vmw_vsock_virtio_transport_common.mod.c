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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_MITIGATION_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

KSYMTAB_FUNC(virtio_transport_deliver_tap_pkt, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_inc_tx_pkt, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_get_credit, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_put_credit, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_stream_dequeue, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_seqpacket_dequeue, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_seqpacket_enqueue, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_dgram_dequeue, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_stream_has_data, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_seqpacket_has_data, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_stream_has_space, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_do_socket_init, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_notify_buffer_size, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_notify_poll_in, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_notify_poll_out, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_notify_recv_init, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_notify_recv_pre_block, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_notify_recv_pre_dequeue, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_notify_recv_post_dequeue, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_notify_send_init, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_notify_send_pre_block, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_notify_send_pre_enqueue, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_notify_send_post_enqueue, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_stream_rcvhiwat, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_stream_is_active, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_stream_allow, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_dgram_bind, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_dgram_allow, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_connect, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_shutdown, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_dgram_enqueue, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_stream_enqueue, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_destruct, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_release, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_recv_pkt, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_purge_skbs, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_read_skb, "_gpl", "");
KSYMTAB_FUNC(virtio_transport_notify_set_rcvlowat, "_gpl", "");

SYMBOL_CRC(virtio_transport_deliver_tap_pkt, 0xe9f206f6, "_gpl");
SYMBOL_CRC(virtio_transport_inc_tx_pkt, 0xcb292007, "_gpl");
SYMBOL_CRC(virtio_transport_get_credit, 0x1bed9d17, "_gpl");
SYMBOL_CRC(virtio_transport_put_credit, 0x054cc348, "_gpl");
SYMBOL_CRC(virtio_transport_stream_dequeue, 0x228bfc6a, "_gpl");
SYMBOL_CRC(virtio_transport_seqpacket_dequeue, 0xe50b869a, "_gpl");
SYMBOL_CRC(virtio_transport_seqpacket_enqueue, 0xbee48816, "_gpl");
SYMBOL_CRC(virtio_transport_dgram_dequeue, 0x1d9db2de, "_gpl");
SYMBOL_CRC(virtio_transport_stream_has_data, 0xf19f2d2f, "_gpl");
SYMBOL_CRC(virtio_transport_seqpacket_has_data, 0x0925800b, "_gpl");
SYMBOL_CRC(virtio_transport_stream_has_space, 0xfc2aa6bb, "_gpl");
SYMBOL_CRC(virtio_transport_do_socket_init, 0x5546a39b, "_gpl");
SYMBOL_CRC(virtio_transport_notify_buffer_size, 0x129ece4e, "_gpl");
SYMBOL_CRC(virtio_transport_notify_poll_in, 0xc9bdf7a8, "_gpl");
SYMBOL_CRC(virtio_transport_notify_poll_out, 0xbcc3ea2a, "_gpl");
SYMBOL_CRC(virtio_transport_notify_recv_init, 0x2c3ff3b0, "_gpl");
SYMBOL_CRC(virtio_transport_notify_recv_pre_block, 0x67d8cfe2, "_gpl");
SYMBOL_CRC(virtio_transport_notify_recv_pre_dequeue, 0xea4d6d78, "_gpl");
SYMBOL_CRC(virtio_transport_notify_recv_post_dequeue, 0xef285c04, "_gpl");
SYMBOL_CRC(virtio_transport_notify_send_init, 0xbc6bf087, "_gpl");
SYMBOL_CRC(virtio_transport_notify_send_pre_block, 0x93e89eef, "_gpl");
SYMBOL_CRC(virtio_transport_notify_send_pre_enqueue, 0x9c9cd660, "_gpl");
SYMBOL_CRC(virtio_transport_notify_send_post_enqueue, 0xee51b67b, "_gpl");
SYMBOL_CRC(virtio_transport_stream_rcvhiwat, 0x389931e2, "_gpl");
SYMBOL_CRC(virtio_transport_stream_is_active, 0xb885bab3, "_gpl");
SYMBOL_CRC(virtio_transport_stream_allow, 0x03a81e69, "_gpl");
SYMBOL_CRC(virtio_transport_dgram_bind, 0x79bc2a8e, "_gpl");
SYMBOL_CRC(virtio_transport_dgram_allow, 0xbabd30f5, "_gpl");
SYMBOL_CRC(virtio_transport_connect, 0xa2bb369e, "_gpl");
SYMBOL_CRC(virtio_transport_shutdown, 0x94993923, "_gpl");
SYMBOL_CRC(virtio_transport_dgram_enqueue, 0x6422bab6, "_gpl");
SYMBOL_CRC(virtio_transport_stream_enqueue, 0x0ce6b3ca, "_gpl");
SYMBOL_CRC(virtio_transport_destruct, 0xbcf4b209, "_gpl");
SYMBOL_CRC(virtio_transport_release, 0x15c775cb, "_gpl");
SYMBOL_CRC(virtio_transport_recv_pkt, 0x03970844, "_gpl");
SYMBOL_CRC(virtio_transport_purge_skbs, 0xbf1b08dc, "_gpl");
SYMBOL_CRC(virtio_transport_read_skb, 0xe462ae21, "_gpl");
SYMBOL_CRC(virtio_transport_notify_set_rcvlowat, 0x5d9bda1b, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x288f25c8, "vsock_enqueue_accept" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6b984983, "vsock_insert_connected" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x9a25806b, "consume_skb" },
	{ 0x4c63d9dd, "trace_raw_output_prep" },
	{ 0x2b8ff6d1, "__trace_trigger_soft_disabled" },
	{ 0xd0b636e7, "vsock_remove_sock" },
	{ 0xb3e272c9, "trace_event_printf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x5ee85f2c, "vsock_deliver_tap" },
	{ 0x8959d336, "trace_event_raw_init" },
	{ 0x8900d05a, "trace_print_symbols_seq" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x87a132ef, "sk_error_report" },
	{ 0xcc7c3ecf, "trace_event_buffer_commit" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x8685b8f4, "vsock_find_bound_socket" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x3d4b0fca, "vsock_addr_init" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0xabcc6fb8, "perf_trace_run_bpf_submit" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0x36c091de, "sk_free" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xa66f7ccc, "trace_event_reg" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x5223642d, "__skb_recv_datagram" },
	{ 0xf3eaf8a7, "lock_sock_nested" },
	{ 0xb713adfd, "vsock_stream_has_data" },
	{ 0x2e591177, "skb_copy_datagram_iter" },
	{ 0xc894bf60, "bpf_trace_run9" },
	{ 0x9acff7de, "vsock_find_connected_socket" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0x844c5de4, "sock_efree" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x18f9f31d, "bpf_trace_run10" },
	{ 0xd5051737, "vsock_core_get_transport" },
	{ 0xa45e5ad7, "__zerocopy_sg_from_iter" },
	{ 0x3167f4fa, "vsock_stream_has_space" },
	{ 0x1a8c0f81, "skb_set_owner_w" },
	{ 0x2bc629e5, "trace_event_buffer_reserve" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x56470118, "__warn_printk" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x15bcc2d9, "_copy_from_iter" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x3c7bac0a, "msg_zerocopy_realloc" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x9c601371, "vsock_create_connected" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xf1c2408, "vsock_assign_transport" },
	{ 0x4d160fd7, "iov_iter_revert" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x62eceb9d, "iov_iter_npages" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0xa5bdee8c, "release_sock" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd8702956, "vsock_data_ready" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "vsock");


MODULE_INFO(srcversion, "403DABB7F60250AC06AC582");
