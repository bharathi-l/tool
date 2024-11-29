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
	{ 0x84472e63, "vmbus_driver_unregister" },
	{ 0x288f25c8, "vsock_enqueue_accept" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xd657ce1f, "_copy_to_iter" },
	{ 0x6b984983, "vsock_insert_connected" },
	{ 0x4b2210b8, "vmbus_send_tl_connect_request" },
	{ 0xd0b636e7, "vsock_remove_sock" },
	{ 0x411139cf, "vmbus_sendpacket" },
	{ 0x7fa5acc8, "hv_pkt_iter_first" },
	{ 0x37a0cba, "kfree" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x2734935d, "vmbus_close" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x8685b8f4, "vsock_find_bound_socket" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x3d4b0fca, "vsock_addr_init" },
	{ 0x506011e3, "vmbus_open" },
	{ 0x36c091de, "sk_free" },
	{ 0x14ac8fe3, "vsock_core_unregister" },
	{ 0xf3eaf8a7, "lock_sock_nested" },
	{ 0x46a417ca, "vmbus_proto_version" },
	{ 0xb713adfd, "vsock_stream_has_data" },
	{ 0xef63afeb, "vsock_core_register" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x5abde233, "hv_pkt_iter_close" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc6f0608c, "vmbus_set_chn_rescind_callback" },
	{ 0x295514b4, "__vmbus_driver_register" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x15bcc2d9, "_copy_from_iter" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x9c601371, "vsock_create_connected" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xf1c2408, "vsock_assign_transport" },
	{ 0x4d160fd7, "iov_iter_revert" },
	{ 0xb38a61e, "__hv_pkt_iter_next" },
	{ 0x68f7044, "vmbus_hvsock_device_unregister" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0xa5bdee8c, "release_sock" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "hv_vmbus,vsock");


MODULE_INFO(srcversion, "DAD8F481A06983AE3DFBDD6");
