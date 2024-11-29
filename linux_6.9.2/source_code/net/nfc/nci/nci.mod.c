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

KSYMTAB_FUNC(nci_get_conn_info_by_dest_type_params, "", "");
KSYMTAB_FUNC(nci_req_complete, "", "");
KSYMTAB_FUNC(nci_prop_cmd, "", "");
KSYMTAB_FUNC(nci_core_cmd, "", "");
KSYMTAB_FUNC(nci_core_reset, "", "");
KSYMTAB_FUNC(nci_core_init, "", "");
KSYMTAB_FUNC(nci_nfcc_loopback, "", "");
KSYMTAB_FUNC(nci_set_config, "", "");
KSYMTAB_FUNC(nci_nfcee_discover, "", "");
KSYMTAB_FUNC(nci_nfcee_mode_set, "", "");
KSYMTAB_FUNC(nci_core_conn_create, "", "");
KSYMTAB_FUNC(nci_core_conn_close, "", "");
KSYMTAB_FUNC(nci_allocate_device, "", "");
KSYMTAB_FUNC(nci_free_device, "", "");
KSYMTAB_FUNC(nci_register_device, "", "");
KSYMTAB_FUNC(nci_unregister_device, "", "");
KSYMTAB_FUNC(nci_recv_frame, "", "");
KSYMTAB_FUNC(nci_send_frame, "", "");
KSYMTAB_FUNC(nci_send_cmd, "", "");
KSYMTAB_FUNC(nci_conn_max_data_pkt_payload_size, "", "");
KSYMTAB_FUNC(nci_send_data, "", "");
KSYMTAB_FUNC(nci_to_errno, "", "");
KSYMTAB_FUNC(nci_hci_send_event, "", "");
KSYMTAB_FUNC(nci_hci_send_cmd, "", "");
KSYMTAB_FUNC(nci_hci_clear_all_pipes, "", "");
KSYMTAB_FUNC(nci_hci_open_pipe, "", "");
KSYMTAB_FUNC(nci_hci_set_param, "", "");
KSYMTAB_FUNC(nci_hci_get_param, "", "");
KSYMTAB_FUNC(nci_hci_connect_gate, "", "");
KSYMTAB_FUNC(nci_hci_dev_session_init, "", "");

SYMBOL_CRC(nci_get_conn_info_by_dest_type_params, 0x9d611048, "");
SYMBOL_CRC(nci_req_complete, 0xfcfe8e56, "");
SYMBOL_CRC(nci_prop_cmd, 0x168721d7, "");
SYMBOL_CRC(nci_core_cmd, 0xefb3ca7d, "");
SYMBOL_CRC(nci_core_reset, 0xf808bec4, "");
SYMBOL_CRC(nci_core_init, 0x85907cf0, "");
SYMBOL_CRC(nci_nfcc_loopback, 0x284cec05, "");
SYMBOL_CRC(nci_set_config, 0xb3ae0ee0, "");
SYMBOL_CRC(nci_nfcee_discover, 0x47a3709b, "");
SYMBOL_CRC(nci_nfcee_mode_set, 0xe52b8c14, "");
SYMBOL_CRC(nci_core_conn_create, 0xa4a837a6, "");
SYMBOL_CRC(nci_core_conn_close, 0x563ebd85, "");
SYMBOL_CRC(nci_allocate_device, 0x4460f921, "");
SYMBOL_CRC(nci_free_device, 0x9d1b8f3e, "");
SYMBOL_CRC(nci_register_device, 0xf990f0ca, "");
SYMBOL_CRC(nci_unregister_device, 0x4a6a0944, "");
SYMBOL_CRC(nci_recv_frame, 0x6136f190, "");
SYMBOL_CRC(nci_send_frame, 0x9ed4f832, "");
SYMBOL_CRC(nci_send_cmd, 0x8d0d2a4d, "");
SYMBOL_CRC(nci_conn_max_data_pkt_payload_size, 0xabaade86, "");
SYMBOL_CRC(nci_send_data, 0xd5f7183a, "");
SYMBOL_CRC(nci_to_errno, 0xba490602, "");
SYMBOL_CRC(nci_hci_send_event, 0x70e14688, "");
SYMBOL_CRC(nci_hci_send_cmd, 0x381cd358, "");
SYMBOL_CRC(nci_hci_clear_all_pipes, 0x17929c31, "");
SYMBOL_CRC(nci_hci_open_pipe, 0xaadeaaef, "");
SYMBOL_CRC(nci_hci_set_param, 0xc3146192, "");
SYMBOL_CRC(nci_hci_get_param, 0x9a456ace, "");
SYMBOL_CRC(nci_hci_connect_gate, 0x7dbf3387, "");
SYMBOL_CRC(nci_hci_dev_session_init, 0xa92faa7b, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xb6f5a1f2, "devm_kmalloc" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb5f5c77e, "skb_dequeue" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa935dd32, "nfc_unregister_device" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x7869d488, "nfc_allocate_device" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xf254ea32, "nfc_tm_data_received" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa2066eb8, "pskb_expand_head" },
	{ 0x8cb09cb0, "skb_queue_purge_reason" },
	{ 0xe73d317e, "nfc_tm_deactivated" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0xabe30107, "nfc_alloc_recv_skb" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x56fa3780, "put_device" },
	{ 0xa916b694, "strnlen" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xd6a7d5b2, "skb_queue_tail" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x23a87490, "nfc_get_local_general_bytes" },
	{ 0x849dc11, "nfc_set_remote_general_bytes" },
	{ 0x8c41b807, "devm_kfree" },
	{ 0xc084677a, "skb_pull" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe246278b, "skb_push" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xedb5525b, "nfc_tm_activated" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x56470118, "__warn_printk" },
	{ 0x1e1f3492, "nfc_targets_found" },
	{ 0x7eb428e0, "nfc_dep_link_is_up" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x9c45e76e, "nfc_send_to_raw_sock" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x7e3ee366, "nfc_register_device" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nfc");


MODULE_INFO(srcversion, "A77FC8C2F65F1462B77CCBF");
