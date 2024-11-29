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

KSYMTAB_FUNC(nfc_fw_download_done, "", "");
KSYMTAB_FUNC(nfc_dep_link_is_up, "", "");
KSYMTAB_FUNC(nfc_find_se, "", "");
KSYMTAB_FUNC(nfc_set_remote_general_bytes, "", "");
KSYMTAB_FUNC(nfc_get_local_general_bytes, "", "");
KSYMTAB_FUNC(nfc_tm_data_received, "", "");
KSYMTAB_FUNC(nfc_tm_activated, "", "");
KSYMTAB_FUNC(nfc_tm_deactivated, "", "");
KSYMTAB_FUNC(nfc_alloc_recv_skb, "", "");
KSYMTAB_FUNC(nfc_targets_found, "", "");
KSYMTAB_FUNC(nfc_target_lost, "", "");
KSYMTAB_FUNC(nfc_driver_failure, "", "");
KSYMTAB_FUNC(nfc_add_se, "", "");
KSYMTAB_FUNC(nfc_remove_se, "", "");
KSYMTAB_FUNC(nfc_se_transaction, "", "");
KSYMTAB_FUNC(nfc_se_connectivity, "", "");
KSYMTAB_DATA(nfc_class, "", "");
KSYMTAB_FUNC(nfc_allocate_device, "", "");
KSYMTAB_FUNC(nfc_register_device, "", "");
KSYMTAB_FUNC(nfc_unregister_device, "", "");
KSYMTAB_FUNC(__nfc_alloc_vendor_cmd_reply_skb, "", "");
KSYMTAB_FUNC(nfc_vendor_cmd_reply, "", "");
KSYMTAB_FUNC(nfc_proto_register, "", "");
KSYMTAB_FUNC(nfc_proto_unregister, "", "");
KSYMTAB_FUNC(nfc_send_to_raw_sock, "", "");

SYMBOL_CRC(nfc_fw_download_done, 0x6f3a7b29, "");
SYMBOL_CRC(nfc_dep_link_is_up, 0x7eb428e0, "");
SYMBOL_CRC(nfc_find_se, 0x6d706a89, "");
SYMBOL_CRC(nfc_set_remote_general_bytes, 0x0849dc11, "");
SYMBOL_CRC(nfc_get_local_general_bytes, 0x23a87490, "");
SYMBOL_CRC(nfc_tm_data_received, 0xf254ea32, "");
SYMBOL_CRC(nfc_tm_activated, 0xedb5525b, "");
SYMBOL_CRC(nfc_tm_deactivated, 0xe73d317e, "");
SYMBOL_CRC(nfc_alloc_recv_skb, 0xabe30107, "");
SYMBOL_CRC(nfc_targets_found, 0x1e1f3492, "");
SYMBOL_CRC(nfc_target_lost, 0x3ccbc78a, "");
SYMBOL_CRC(nfc_driver_failure, 0xbe554184, "");
SYMBOL_CRC(nfc_add_se, 0xebb38958, "");
SYMBOL_CRC(nfc_remove_se, 0x37c681ca, "");
SYMBOL_CRC(nfc_se_transaction, 0x2d8fd04c, "");
SYMBOL_CRC(nfc_se_connectivity, 0x16bcd752, "");
SYMBOL_CRC(nfc_class, 0xafe27cc6, "");
SYMBOL_CRC(nfc_allocate_device, 0x7869d488, "");
SYMBOL_CRC(nfc_register_device, 0x7e3ee366, "");
SYMBOL_CRC(nfc_unregister_device, 0xa935dd32, "");
SYMBOL_CRC(__nfc_alloc_vendor_cmd_reply_skb, 0x5cc512e4, "");
SYMBOL_CRC(nfc_vendor_cmd_reply, 0x8dbedf1c, "");
SYMBOL_CRC(nfc_proto_register, 0x5dfb9626, "");
SYMBOL_CRC(nfc_proto_unregister, 0x9eb9cc2f, "");
SYMBOL_CRC(nfc_send_to_raw_sock, 0x9c45e76e, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xda10ec3, "security_sock_graft" },
	{ 0xd4216927, "skb_free_datagram" },
	{ 0x136b25da, "sock_queue_rcv_skb_reason" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x8e5f8916, "class_dev_iter_next" },
	{ 0x18f58619, "try_module_get" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xea4da57c, "dev_set_name" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb5f5c77e, "skb_dequeue" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xc0763484, "rfkill_blocked" },
	{ 0xde293f9e, "add_wait_queue_exclusive" },
	{ 0x7d10618c, "device_initialize" },
	{ 0x9f1bba9f, "sock_no_sendmsg" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xc760ce2d, "genlmsg_put" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x84b08e3b, "sock_no_connect" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x50b2b15, "__pskb_copy_fclone" },
	{ 0x2357245f, "netlink_broadcast_filtered" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x87a132ef, "sk_error_report" },
	{ 0x8cb09cb0, "skb_queue_purge_reason" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x14a415a8, "class_dev_iter_exit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x7222c16a, "proto_unregister" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x3c90e235, "sock_register" },
	{ 0x5a49628c, "datagram_poll" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x56fa3780, "put_device" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x910bb85d, "proto_register" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd6a7d5b2, "skb_queue_tail" },
	{ 0xd47a039c, "module_put" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x5ef32d9b, "__sock_recv_timestamp" },
	{ 0xafeaf674, "sock_no_shutdown" },
	{ 0x8c41b807, "devm_kfree" },
	{ 0xece43bce, "init_net" },
	{ 0xc084677a, "skb_pull" },
	{ 0xcc44e65b, "device_add" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0x8911bab3, "netlink_unicast" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x36c091de, "sk_free" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xde85399, "sock_no_accept" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe246278b, "skb_push" },
	{ 0x6f5598d1, "sock_no_listen" },
	{ 0x5a921311, "strncmp" },
	{ 0xd5a43273, "nla_put" },
	{ 0xffb7c514, "ida_free" },
	{ 0x325e698, "class_unregister" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x863b8d86, "ns_capable" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xf3eaf8a7, "lock_sock_nested" },
	{ 0xda733252, "sock_no_bind" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x2e591177, "skb_copy_datagram_iter" },
	{ 0x92e44c7f, "rfkill_alloc" },
	{ 0xaf8d9e02, "class_dev_iter_init" },
	{ 0x5f258127, "sk_alloc" },
	{ 0x7acfab09, "device_del" },
	{ 0x26f0d865, "__sock_recv_wifi_status" },
	{ 0xf4ba9908, "sock_no_socketpair" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x1e54ba33, "sock_no_mmap" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x11ed6da9, "skb_unlink" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xff282521, "rfkill_register" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0x75f63f0d, "skb_recv_datagram" },
	{ 0x73da78ac, "sock_alloc_send_pskb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x9b8d9591, "sock_no_getname" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x2db5a302, "skb_copy" },
	{ 0xf1de5c0a, "skb_clone" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x15bcc2d9, "_copy_from_iter" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x62e9cfe4, "sock_no_ioctl" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0xc01b7698, "genl_unregister_family" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x754d539c, "strlen" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x4d160fd7, "iov_iter_revert" },
	{ 0xf20b36c9, "genl_register_family" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x1e980173, "class_register" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x242851e9, "sock_init_data" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0xa5bdee8c, "release_sock" },
	{ 0x1c5402a3, "skb_queue_head" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1bc3d710, "class_find_device" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "68D337757157647CECEFC45");
