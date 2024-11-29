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
	{ 0x7712771a, "unbind_from_irqhandler" },
	{ 0xf2f726c, "p9_req_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3362b03c, "xen_p2m_size" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x91ebb5bc, "xenbus_dev_fatal" },
	{ 0xc6572a90, "xenbus_read_unsigned" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0xecd8f23d, "xenbus_read" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x6aa2a877, "xenbus_printf" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x9f6eb6b7, "xenbus_switch_state" },
	{ 0xe2964344, "__wake_up" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4b1dc07e, "xenbus_alloc_evtchn" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1b9c6cd, "__xenbus_register_frontend" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x732852fe, "xenbus_transaction_end" },
	{ 0xae3301d3, "xenbus_unregister_driver" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0xb06f777d, "xenbus_free_evtchn" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x5fc72f0e, "alloc_pages_exact" },
	{ 0x5f821ccf, "_dev_warn" },
	{ 0x34eab46d, "bind_evtchn_to_irqhandler" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x86623fd7, "notify_remote_via_irq" },
	{ 0x8b587f29, "p9_tag_lookup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3a7d80f9, "xen_max_p2m_pfn" },
	{ 0x52431348, "xenbus_transaction_start" },
	{ 0x90413ff5, "v9fs_register_trans" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x57719632, "gnttab_grant_foreign_access" },
	{ 0xeb44339a, "free_pages_exact" },
	{ 0x4b931968, "xen_features" },
	{ 0xfe727411, "get_phys_to_machine" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x7a2f4b59, "v9fs_unregister_trans" },
	{ 0xc1accc89, "p9_client_cb" },
	{ 0x7bc7480d, "xenbus_frontend_closed" },
	{ 0x35b3ce0c, "gnttab_end_foreign_access" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x25f02c87, "xen_p2m_addr" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "9pnet");


MODULE_INFO(srcversion, "611DB702059873D661812BC");
