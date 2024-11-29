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
	{ 0xa6257a2f, "complete" },
	{ 0x8ac251f6, "__ib_alloc_pd" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x2ded980a, "dma_unmap_page_attrs" },
	{ 0xaf5bbd82, "rdma_resolve_addr" },
	{ 0xcf2a6966, "up" },
	{ 0x37a0cba, "kfree" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x35c5232d, "rdma_disconnect" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x287d6d9f, "dev_driver_string" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x82e39187, "dma_map_page_attrs" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe0bfc747, "__rdma_create_kernel_id" },
	{ 0x4f337bd, "rdma_resolve_route" },
	{ 0x584f9aa8, "rdma_bind_addr" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x1cebc5e8, "rdma_create_qp" },
	{ 0xece43bce, "init_net" },
	{ 0x6d1a433e, "__ib_alloc_cq_any" },
	{ 0x4e3567f7, "match_int" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6dd64ade, "ib_destroy_qp_user" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x8b587f29, "p9_tag_lookup" },
	{ 0x6bf6f64b, "rdma_connect" },
	{ 0x761cad64, "p9_parse_header" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x85df9b6c, "strsep" },
	{ 0xefc0606b, "ib_free_cq" },
	{ 0xeb5bbbd6, "rdma_destroy_id" },
	{ 0x90413ff5, "v9fs_register_trans" },
	{ 0x44e9a829, "match_token" },
	{ 0x56470118, "__warn_printk" },
	{ 0x13fe5644, "seq_printf" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x8cf244f1, "seq_puts" },
	{ 0x1b6314fd, "in_aton" },
	{ 0x89c087ae, "ib_dealloc_pd_user" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x7a2f4b59, "v9fs_unregister_trans" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xc1accc89, "p9_client_cb" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x4ba99359, "p9_fcall_fini" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "9pnet,ib_core,rdma_cm");


MODULE_INFO(srcversion, "C7A7B4C5CA33D148D072BDC");
