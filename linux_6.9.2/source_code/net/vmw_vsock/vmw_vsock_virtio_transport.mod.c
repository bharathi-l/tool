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



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbf1b08dc, "virtio_transport_purge_skbs" },
	{ 0x2c3ff3b0, "virtio_transport_notify_recv_init" },
	{ 0x15c775cb, "virtio_transport_release" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xef28506e, "virtqueue_enable_cb" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x4852d7c9, "vsock_for_each_connected_socket" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x8e7e989c, "virtqueue_detach_unused_buf" },
	{ 0x9a25806b, "consume_skb" },
	{ 0xa2bb369e, "virtio_transport_connect" },
	{ 0x5d9bda1b, "virtio_transport_notify_set_rcvlowat" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf19f2d2f, "virtio_transport_stream_has_data" },
	{ 0x389931e2, "virtio_transport_stream_rcvhiwat" },
	{ 0x37a0cba, "kfree" },
	{ 0x43babd19, "sg_init_one" },
	{ 0x79bc2a8e, "virtio_transport_dgram_bind" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x87a132ef, "sk_error_report" },
	{ 0x67d8cfe2, "virtio_transport_notify_recv_pre_block" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x6422bab6, "virtio_transport_dgram_enqueue" },
	{ 0x94993923, "virtio_transport_shutdown" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xee51b67b, "virtio_transport_notify_send_post_enqueue" },
	{ 0x4e4e92b, "unregister_virtio_driver" },
	{ 0x1d9db2de, "virtio_transport_dgram_dequeue" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0x3a81e69, "virtio_transport_stream_allow" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x381c41c1, "virtqueue_get_vring_size" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xbc6bf087, "virtio_transport_notify_send_init" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x9c9cd660, "virtio_transport_notify_send_pre_enqueue" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xe50b869a, "virtio_transport_seqpacket_dequeue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xbee48816, "virtio_transport_seqpacket_enqueue" },
	{ 0x925800b, "virtio_transport_seqpacket_has_data" },
	{ 0xea4d6d78, "virtio_transport_notify_recv_pre_dequeue" },
	{ 0xce6b3ca, "virtio_transport_stream_enqueue" },
	{ 0x2f0bd28, "virtqueue_disable_cb" },
	{ 0x228bfc6a, "virtio_transport_stream_dequeue" },
	{ 0x14ac8fe3, "vsock_core_unregister" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xef63afeb, "vsock_core_register" },
	{ 0x97885819, "virtqueue_add_sgs" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd4ff0dc0, "virtio_reset_device" },
	{ 0xbcc3ea2a, "virtio_transport_notify_poll_out" },
	{ 0xef285c04, "virtio_transport_notify_recv_post_dequeue" },
	{ 0xbabd30f5, "virtio_transport_dgram_allow" },
	{ 0x41408a6c, "__register_virtio_driver" },
	{ 0x88fb1a41, "virtqueue_get_buf" },
	{ 0xe9f206f6, "virtio_transport_deliver_tap_pkt" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xe462ae21, "virtio_transport_read_skb" },
	{ 0xbf3241ea, "virtqueue_kick" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb885bab3, "virtio_transport_stream_is_active" },
	{ 0xb0ac613b, "virtqueue_add_inbuf" },
	{ 0x5546a39b, "virtio_transport_do_socket_init" },
	{ 0xc9bdf7a8, "virtio_transport_notify_poll_in" },
	{ 0xd67d9ad4, "virtio_check_driver_offered_feature" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xfc2aa6bb, "virtio_transport_stream_has_space" },
	{ 0x93e89eef, "virtio_transport_notify_send_pre_block" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x129ece4e, "virtio_transport_notify_buffer_size" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xbcf4b209, "virtio_transport_destruct" },
	{ 0x3970844, "virtio_transport_recv_pkt" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "vmw_vsock_virtio_transport_common,vsock");

MODULE_ALIAS("virtio:d00000013v*");

MODULE_INFO(srcversion, "D65BBFF7A7445FD6BEAD05E");
