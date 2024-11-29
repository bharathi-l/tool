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
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xe9f206f6, "virtio_transport_deliver_tap_pkt" },
	{ 0x3970844, "virtio_transport_recv_pkt" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x14ac8fe3, "vsock_core_unregister" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x5546a39b, "virtio_transport_do_socket_init" },
	{ 0xbcf4b209, "virtio_transport_destruct" },
	{ 0x15c775cb, "virtio_transport_release" },
	{ 0xa2bb369e, "virtio_transport_connect" },
	{ 0x79bc2a8e, "virtio_transport_dgram_bind" },
	{ 0x1d9db2de, "virtio_transport_dgram_dequeue" },
	{ 0x6422bab6, "virtio_transport_dgram_enqueue" },
	{ 0xbabd30f5, "virtio_transport_dgram_allow" },
	{ 0x228bfc6a, "virtio_transport_stream_dequeue" },
	{ 0xce6b3ca, "virtio_transport_stream_enqueue" },
	{ 0xf19f2d2f, "virtio_transport_stream_has_data" },
	{ 0xfc2aa6bb, "virtio_transport_stream_has_space" },
	{ 0x389931e2, "virtio_transport_stream_rcvhiwat" },
	{ 0xb885bab3, "virtio_transport_stream_is_active" },
	{ 0x3a81e69, "virtio_transport_stream_allow" },
	{ 0xe50b869a, "virtio_transport_seqpacket_dequeue" },
	{ 0xbee48816, "virtio_transport_seqpacket_enqueue" },
	{ 0x925800b, "virtio_transport_seqpacket_has_data" },
	{ 0xc9bdf7a8, "virtio_transport_notify_poll_in" },
	{ 0xbcc3ea2a, "virtio_transport_notify_poll_out" },
	{ 0x2c3ff3b0, "virtio_transport_notify_recv_init" },
	{ 0x67d8cfe2, "virtio_transport_notify_recv_pre_block" },
	{ 0xea4d6d78, "virtio_transport_notify_recv_pre_dequeue" },
	{ 0xef285c04, "virtio_transport_notify_recv_post_dequeue" },
	{ 0xbc6bf087, "virtio_transport_notify_send_init" },
	{ 0x93e89eef, "virtio_transport_notify_send_pre_block" },
	{ 0x9c9cd660, "virtio_transport_notify_send_pre_enqueue" },
	{ 0xee51b67b, "virtio_transport_notify_send_post_enqueue" },
	{ 0x129ece4e, "virtio_transport_notify_buffer_size" },
	{ 0x5d9bda1b, "virtio_transport_notify_set_rcvlowat" },
	{ 0x94993923, "virtio_transport_shutdown" },
	{ 0xe462ae21, "virtio_transport_read_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xef63afeb, "vsock_core_register" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xbf1b08dc, "virtio_transport_purge_skbs" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "vmw_vsock_virtio_transport_common,vsock");


MODULE_INFO(srcversion, "7B52F3ACF8209D18713A83E");
