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
	{ 0xfc52a345, "__sock_create" },
	{ 0xf2f726c, "p9_req_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5fe44041, "fget" },
	{ 0x4bbbcb6f, "kernel_bind" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x39ee2480, "sock_alloc_file" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xff63bab, "fput" },
	{ 0x4e3567f7, "match_int" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x1966800, "kernel_read" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x8b587f29, "p9_tag_lookup" },
	{ 0x761cad64, "p9_parse_header" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x85df9b6c, "strsep" },
	{ 0x90413ff5, "v9fs_register_trans" },
	{ 0x44e9a829, "match_token" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x13fe5644, "seq_printf" },
	{ 0x26ed65de, "sock_release" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x1b6314fd, "in_aton" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x7a2f4b59, "v9fs_unregister_trans" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xc1accc89, "p9_client_cb" },
	{ 0x754d539c, "strlen" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x1ab6aecc, "kernel_write" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "9pnet");


MODULE_INFO(srcversion, "EE619AE77626A52EF195101");
