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

KSYMTAB_FUNC(nfc_digital_allocate_device, "", "");
KSYMTAB_FUNC(nfc_digital_free_device, "", "");
KSYMTAB_FUNC(nfc_digital_register_device, "", "");
KSYMTAB_FUNC(nfc_digital_unregister_device, "", "");

SYMBOL_CRC(nfc_digital_allocate_device, 0xfc5bab82, "");
SYMBOL_CRC(nfc_digital_free_device, 0xc8b57060, "");
SYMBOL_CRC(nfc_digital_register_device, 0x06d5c986, "");
SYMBOL_CRC(nfc_digital_unregister_device, 0xbc7e0f9d, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x9a25806b, "consume_skb" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa935dd32, "nfc_unregister_device" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x7869d488, "nfc_allocate_device" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0xf254ea32, "nfc_tm_data_received" },
	{ 0x50b2b15, "__pskb_copy_fclone" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0xabe30107, "nfc_alloc_recv_skb" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x56fa3780, "put_device" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0xabb08c3a, "skb_copy_expand" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x23a87490, "nfc_get_local_general_bytes" },
	{ 0x849dc11, "nfc_set_remote_general_bytes" },
	{ 0xc084677a, "skb_pull" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe246278b, "skb_push" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xedb5525b, "nfc_tm_activated" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x1e1f3492, "nfc_targets_found" },
	{ 0x7eb428e0, "nfc_dep_link_is_up" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x9a34a2b, "crc_itu_t" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x7e3ee366, "nfc_register_device" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nfc,crc-itu-t");


MODULE_INFO(srcversion, "8B02576B3255C587CC22386");
