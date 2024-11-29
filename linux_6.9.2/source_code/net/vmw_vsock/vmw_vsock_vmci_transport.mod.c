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
	{ 0x288f25c8, "vsock_enqueue_accept" },
	{ 0xd4216927, "skb_free_datagram" },
	{ 0xde3abc2e, "vmci_datagram_create_handle_priv" },
	{ 0x5591b58e, "vmci_context_get_priv_flags" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6b984983, "vsock_insert_connected" },
	{ 0x1fd4782d, "vmci_qpair_get_produce_indexes" },
	{ 0x7c74d7a6, "vmci_qpair_consume_buf_ready" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x4852d7c9, "vsock_for_each_connected_socket" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3a22fa8a, "vmci_datagram_destroy_handle" },
	{ 0xd0b636e7, "vsock_remove_sock" },
	{ 0x69acdf38, "memcpy" },
	{ 0xea61eefe, "vmci_qpair_produce_buf_ready" },
	{ 0x37a0cba, "kfree" },
	{ 0x2449459d, "vmci_event_subscribe" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xea143610, "vmci_datagram_send" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x87a132ef, "sk_error_report" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x629c50fe, "vsock_remove_connected" },
	{ 0x8685b8f4, "vsock_find_bound_socket" },
	{ 0x122c3a7e, "_printk" },
	{ 0x24d14bc, "vmci_qpair_produce_free_space" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x3d4b0fca, "vsock_addr_init" },
	{ 0xe0757cc9, "vsock_remove_pending" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0x4b99648c, "vsock_addr_bound" },
	{ 0xc6cbbc89, "capable" },
	{ 0x21c148f4, "__sk_receive_skb" },
	{ 0xc04c7e84, "vmci_qpair_get_consume_indexes" },
	{ 0x36c091de, "sk_free" },
	{ 0xaf2674b5, "vsock_addr_equals_addr" },
	{ 0x676bd843, "vmci_qpair_consume_free_space" },
	{ 0x14ac8fe3, "vsock_core_unregister" },
	{ 0xe949d1da, "vmci_qpair_peekv" },
	{ 0xf3eaf8a7, "lock_sock_nested" },
	{ 0xc403cafe, "vmci_is_context_owner" },
	{ 0x46dd187, "vmci_datagram_create_handle" },
	{ 0xb713adfd, "vsock_stream_has_data" },
	{ 0x2e591177, "skb_copy_datagram_iter" },
	{ 0xef63afeb, "vsock_core_register" },
	{ 0xe0cc9c92, "vmci_qpair_alloc" },
	{ 0x787f0fe8, "vmci_register_vsock_callback" },
	{ 0x9acff7de, "vsock_find_connected_socket" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x3167f4fa, "vsock_stream_has_space" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x612df9ae, "vmci_qpair_detach" },
	{ 0x75f63f0d, "skb_recv_datagram" },
	{ 0xf9579f8b, "vmci_qpair_dequev" },
	{ 0x4c419781, "vsock_add_pending" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x2048af4b, "vmci_qpair_enquev" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x15bcc2d9, "_copy_from_iter" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x9c601371, "vsock_create_connected" },
	{ 0xe11895c1, "vmci_event_unsubscribe" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xf1c2408, "vsock_assign_transport" },
	{ 0x4d160fd7, "iov_iter_revert" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x56837fb, "vmci_get_context_id" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0xa5bdee8c, "release_sock" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd8702956, "vsock_data_ready" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "vsock,vmw_vmci");


MODULE_INFO(srcversion, "C050325360D9D77FDFF7EDB");
