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

KSYMTAB_FUNC(nfc_hci_result_to_errno, "", "");
KSYMTAB_FUNC(nfc_hci_reset_pipes, "", "");
KSYMTAB_FUNC(nfc_hci_reset_pipes_per_host, "", "");
KSYMTAB_FUNC(nfc_hci_sak_to_protocol, "", "");
KSYMTAB_FUNC(nfc_hci_target_discovered, "", "");
KSYMTAB_FUNC(nfc_hci_allocate_device, "", "");
KSYMTAB_FUNC(nfc_hci_free_device, "", "");
KSYMTAB_FUNC(nfc_hci_register_device, "", "");
KSYMTAB_FUNC(nfc_hci_unregister_device, "", "");
KSYMTAB_FUNC(nfc_hci_set_clientdata, "", "");
KSYMTAB_FUNC(nfc_hci_get_clientdata, "", "");
KSYMTAB_FUNC(nfc_hci_driver_failure, "", "");
KSYMTAB_FUNC(nfc_hci_recv_frame, "", "");
KSYMTAB_FUNC(nfc_hci_send_event, "", "");
KSYMTAB_FUNC(nfc_hci_send_cmd, "", "");
KSYMTAB_FUNC(nfc_hci_send_cmd_async, "", "");
KSYMTAB_FUNC(nfc_hci_set_param, "", "");
KSYMTAB_FUNC(nfc_hci_get_param, "", "");
KSYMTAB_FUNC(nfc_hci_disconnect_gate, "", "");
KSYMTAB_FUNC(nfc_hci_disconnect_all_gates, "", "");
KSYMTAB_FUNC(nfc_hci_connect_gate, "", "");
KSYMTAB_FUNC(nfc_llc_start, "", "");
KSYMTAB_FUNC(nfc_llc_stop, "", "");

SYMBOL_CRC(nfc_hci_result_to_errno, 0x74fe3670, "");
SYMBOL_CRC(nfc_hci_reset_pipes, 0x7115cf41, "");
SYMBOL_CRC(nfc_hci_reset_pipes_per_host, 0x02cacf2c, "");
SYMBOL_CRC(nfc_hci_sak_to_protocol, 0xdd231c55, "");
SYMBOL_CRC(nfc_hci_target_discovered, 0xcbb8912b, "");
SYMBOL_CRC(nfc_hci_allocate_device, 0x1e96802c, "");
SYMBOL_CRC(nfc_hci_free_device, 0x1a19c030, "");
SYMBOL_CRC(nfc_hci_register_device, 0x3c5562b0, "");
SYMBOL_CRC(nfc_hci_unregister_device, 0xb38b611e, "");
SYMBOL_CRC(nfc_hci_set_clientdata, 0x79562bed, "");
SYMBOL_CRC(nfc_hci_get_clientdata, 0xca97e01d, "");
SYMBOL_CRC(nfc_hci_driver_failure, 0x37298653, "");
SYMBOL_CRC(nfc_hci_recv_frame, 0xb10fd11e, "");
SYMBOL_CRC(nfc_hci_send_event, 0xd4ebd571, "");
SYMBOL_CRC(nfc_hci_send_cmd, 0xe6985370, "");
SYMBOL_CRC(nfc_hci_send_cmd_async, 0xbc0f40c6, "");
SYMBOL_CRC(nfc_hci_set_param, 0x0a8b7301, "");
SYMBOL_CRC(nfc_hci_get_param, 0x5835aa0e, "");
SYMBOL_CRC(nfc_hci_disconnect_gate, 0xb3439c39, "");
SYMBOL_CRC(nfc_hci_disconnect_all_gates, 0x5d204633, "");
SYMBOL_CRC(nfc_hci_connect_gate, 0x56064677, "");
SYMBOL_CRC(nfc_llc_start, 0x02764aa9, "");
SYMBOL_CRC(nfc_llc_stop, 0x5f7c076f, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb5f5c77e, "skb_dequeue" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xa935dd32, "nfc_unregister_device" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xe2964344, "__wake_up" },
	{ 0x7869d488, "nfc_allocate_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8cb09cb0, "skb_queue_purge_reason" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0xabe30107, "nfc_alloc_recv_skb" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x56fa3780, "put_device" },
	{ 0xa916b694, "strnlen" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xd6a7d5b2, "skb_queue_tail" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x365e7911, "kstrdup_const" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc084677a, "skb_pull" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe246278b, "skb_push" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0x91d606de, "skb_dequeue_tail" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0xf474fdcb, "kfree_const" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0x1e1f3492, "nfc_targets_found" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0xbe554184, "nfc_driver_failure" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x7e3ee366, "nfc_register_device" },
	{ 0x1c5402a3, "skb_queue_head" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nfc");


MODULE_INFO(srcversion, "04C8699622E961E39E6C61F");
