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
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xf2f726c, "p9_req_put" },
	{ 0x27fa66e1, "nr_free_buffer_pages" },
	{ 0xcb9be910, "sysfs_create_file_ns" },
	{ 0xa08b6b7a, "vmalloc_to_page" },
	{ 0x43179edc, "iov_iter_single_seg_count" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3ad845f0, "iov_iter_advance" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x580aab75, "sysfs_remove_file_ns" },
	{ 0x4e4e92b, "unregister_virtio_driver" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x56567557, "_dev_err" },
	{ 0xd0700275, "p9_release_pages" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x97885819, "virtqueue_add_sgs" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd4ff0dc0, "virtio_reset_device" },
	{ 0x41408a6c, "__register_virtio_driver" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x88fb1a41, "virtqueue_get_buf" },
	{ 0x4472a53d, "iov_iter_get_pages_alloc2" },
	{ 0xdb8ebd0a, "_dev_emerg" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xbf3241ea, "virtqueue_kick" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x90413ff5, "v9fs_register_trans" },
	{ 0xd67d9ad4, "virtio_check_driver_offered_feature" },
	{ 0x7e9a4b63, "kobject_uevent" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x7a2f4b59, "v9fs_unregister_trans" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xc1accc89, "p9_client_cb" },
	{ 0x754d539c, "strlen" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "9pnet");

MODULE_ALIAS("virtio:d00000009v*");

MODULE_INFO(srcversion, "287CD2E78DFD856D74698E1");
