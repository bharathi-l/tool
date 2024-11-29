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

KSYMTAB_FUNC(bt_sock_reclassify_lock, "", "");
KSYMTAB_FUNC(bt_sock_register, "", "");
KSYMTAB_FUNC(bt_sock_unregister, "", "");
KSYMTAB_FUNC(bt_sock_alloc, "", "");
KSYMTAB_FUNC(bt_sock_link, "", "");
KSYMTAB_FUNC(bt_sock_unlink, "", "");
KSYMTAB_FUNC(bt_accept_enqueue, "", "");
KSYMTAB_FUNC(bt_accept_unlink, "", "");
KSYMTAB_FUNC(bt_accept_dequeue, "", "");
KSYMTAB_FUNC(bt_sock_recvmsg, "", "");
KSYMTAB_FUNC(bt_sock_stream_recvmsg, "", "");
KSYMTAB_FUNC(bt_sock_poll, "", "");
KSYMTAB_FUNC(bt_sock_ioctl, "", "");
KSYMTAB_FUNC(bt_sock_wait_state, "", "");
KSYMTAB_FUNC(bt_sock_wait_ready, "", "");
KSYMTAB_FUNC(bt_procfs_init, "", "");
KSYMTAB_FUNC(bt_procfs_cleanup, "", "");
KSYMTAB_DATA(bt_debugfs, "_gpl", "");
KSYMTAB_FUNC(hci_alloc_dev_priv, "", "");
KSYMTAB_FUNC(hci_free_dev, "", "");
KSYMTAB_FUNC(hci_register_dev, "", "");
KSYMTAB_FUNC(hci_unregister_dev, "", "");
KSYMTAB_FUNC(hci_release_dev, "", "");
KSYMTAB_FUNC(hci_suspend_dev, "", "");
KSYMTAB_FUNC(hci_resume_dev, "", "");
KSYMTAB_FUNC(hci_reset_dev, "", "");
KSYMTAB_FUNC(hci_recv_frame, "", "");
KSYMTAB_FUNC(hci_recv_diag, "", "");
KSYMTAB_FUNC(hci_set_hw_info, "", "");
KSYMTAB_FUNC(hci_set_fw_info, "", "");
KSYMTAB_FUNC(hci_register_cb, "", "");
KSYMTAB_FUNC(hci_unregister_cb, "", "");
KSYMTAB_FUNC(__hci_cmd_send, "", "");
KSYMTAB_FUNC(hci_get_route, "", "");
KSYMTAB_FUNC(hci_conn_security, "", "");
KSYMTAB_FUNC(hci_conn_check_secure, "", "");
KSYMTAB_FUNC(hci_conn_switch_role, "", "");
KSYMTAB_FUNC(hci_mgmt_chan_register, "", "");
KSYMTAB_FUNC(hci_mgmt_chan_unregister, "", "");
KSYMTAB_FUNC(l2cap_add_psm, "_gpl", "");
KSYMTAB_FUNC(l2cap_chan_create, "_gpl", "");
KSYMTAB_FUNC(l2cap_chan_put, "_gpl", "");
KSYMTAB_FUNC(l2cap_chan_set_defaults, "_gpl", "");
KSYMTAB_FUNC(l2cap_chan_del, "_gpl", "");
KSYMTAB_FUNC(l2cap_chan_list, "_gpl", "");
KSYMTAB_FUNC(l2cap_chan_close, "", "");
KSYMTAB_FUNC(l2cap_register_user, "", "");
KSYMTAB_FUNC(l2cap_unregister_user, "", "");
KSYMTAB_FUNC(l2cap_conn_get, "", "");
KSYMTAB_FUNC(l2cap_conn_put, "", "");
KSYMTAB_FUNC(l2cap_chan_send, "_gpl", "");
KSYMTAB_FUNC(l2cap_chan_connect, "_gpl", "");
KSYMTAB_FUNC(l2cap_is_socket, "", "");
KSYMTAB_FUNC(baswap, "", "");
KSYMTAB_FUNC(bt_to_errno, "", "");
KSYMTAB_FUNC(bt_status, "", "");
KSYMTAB_FUNC(bt_info, "", "");
KSYMTAB_FUNC(bt_warn, "", "");
KSYMTAB_FUNC(bt_err, "", "");
KSYMTAB_FUNC(bt_warn_ratelimited, "", "");
KSYMTAB_FUNC(bt_err_ratelimited, "", "");
KSYMTAB_FUNC(__hci_cmd_sync_sk, "", "");
KSYMTAB_FUNC(__hci_cmd_sync, "", "");
KSYMTAB_FUNC(hci_cmd_sync, "", "");
KSYMTAB_FUNC(__hci_cmd_sync_ev, "", "");
KSYMTAB_FUNC(__hci_cmd_sync_status_sk, "", "");
KSYMTAB_FUNC(__hci_cmd_sync_status, "", "");
KSYMTAB_FUNC(hci_cmd_sync_cancel, "", "");
KSYMTAB_FUNC(hci_cmd_sync_cancel_sync, "", "");
KSYMTAB_FUNC(hci_cmd_sync_submit, "", "");
KSYMTAB_FUNC(hci_cmd_sync_queue, "", "");
KSYMTAB_FUNC(hci_cmd_sync_queue_once, "", "");
KSYMTAB_FUNC(hci_cmd_sync_lookup_entry, "", "");
KSYMTAB_FUNC(hci_cmd_sync_cancel_entry, "", "");
KSYMTAB_FUNC(hci_cmd_sync_dequeue_once, "", "");
KSYMTAB_FUNC(hci_cmd_sync_dequeue, "", "");
KSYMTAB_FUNC(hci_devcd_rx, "", "");
KSYMTAB_FUNC(hci_devcd_timeout, "", "");
KSYMTAB_FUNC(hci_devcd_register, "", "");
KSYMTAB_FUNC(hci_devcd_init, "", "");
KSYMTAB_FUNC(hci_devcd_append, "", "");
KSYMTAB_FUNC(hci_devcd_append_pattern, "", "");
KSYMTAB_FUNC(hci_devcd_complete, "", "");
KSYMTAB_FUNC(hci_devcd_abort, "", "");

SYMBOL_CRC(bt_sock_reclassify_lock, 0xe14fe3e6, "");
SYMBOL_CRC(bt_sock_register, 0x70dca5cb, "");
SYMBOL_CRC(bt_sock_unregister, 0x8fea24bd, "");
SYMBOL_CRC(bt_sock_alloc, 0xb09faf61, "");
SYMBOL_CRC(bt_sock_link, 0x5f4831da, "");
SYMBOL_CRC(bt_sock_unlink, 0xf594ee0c, "");
SYMBOL_CRC(bt_accept_enqueue, 0x352bae6a, "");
SYMBOL_CRC(bt_accept_unlink, 0xff32a66c, "");
SYMBOL_CRC(bt_accept_dequeue, 0x93b46a5a, "");
SYMBOL_CRC(bt_sock_recvmsg, 0x978b3334, "");
SYMBOL_CRC(bt_sock_stream_recvmsg, 0x8569637a, "");
SYMBOL_CRC(bt_sock_poll, 0xac9cb775, "");
SYMBOL_CRC(bt_sock_ioctl, 0xaf559eea, "");
SYMBOL_CRC(bt_sock_wait_state, 0x4979384a, "");
SYMBOL_CRC(bt_sock_wait_ready, 0xa298c8ad, "");
SYMBOL_CRC(bt_procfs_init, 0xe93693fd, "");
SYMBOL_CRC(bt_procfs_cleanup, 0x0c551a41, "");
SYMBOL_CRC(bt_debugfs, 0xd80b0ef6, "_gpl");
SYMBOL_CRC(hci_alloc_dev_priv, 0x3f791971, "");
SYMBOL_CRC(hci_free_dev, 0x7b0dca24, "");
SYMBOL_CRC(hci_register_dev, 0xf0a87e13, "");
SYMBOL_CRC(hci_unregister_dev, 0x9af035c9, "");
SYMBOL_CRC(hci_release_dev, 0x90c081e9, "");
SYMBOL_CRC(hci_suspend_dev, 0xac27ef17, "");
SYMBOL_CRC(hci_resume_dev, 0x686bb2c5, "");
SYMBOL_CRC(hci_reset_dev, 0xc8e8324f, "");
SYMBOL_CRC(hci_recv_frame, 0xe92f32c5, "");
SYMBOL_CRC(hci_recv_diag, 0x48e7c4cb, "");
SYMBOL_CRC(hci_set_hw_info, 0x23a1f1f1, "");
SYMBOL_CRC(hci_set_fw_info, 0xc21ab8c7, "");
SYMBOL_CRC(hci_register_cb, 0xb5f2cd61, "");
SYMBOL_CRC(hci_unregister_cb, 0xa14e6381, "");
SYMBOL_CRC(__hci_cmd_send, 0xd6f70aeb, "");
SYMBOL_CRC(hci_get_route, 0xdc8e7e20, "");
SYMBOL_CRC(hci_conn_security, 0x62b96759, "");
SYMBOL_CRC(hci_conn_check_secure, 0x6d2f9665, "");
SYMBOL_CRC(hci_conn_switch_role, 0x2836b5ab, "");
SYMBOL_CRC(hci_mgmt_chan_register, 0x87100c2c, "");
SYMBOL_CRC(hci_mgmt_chan_unregister, 0x3f3e2e58, "");
SYMBOL_CRC(l2cap_add_psm, 0xb3b02e5a, "_gpl");
SYMBOL_CRC(l2cap_chan_create, 0xba661157, "_gpl");
SYMBOL_CRC(l2cap_chan_put, 0x0b434840, "_gpl");
SYMBOL_CRC(l2cap_chan_set_defaults, 0x56e2b818, "_gpl");
SYMBOL_CRC(l2cap_chan_del, 0x1340f709, "_gpl");
SYMBOL_CRC(l2cap_chan_list, 0x50413a19, "_gpl");
SYMBOL_CRC(l2cap_chan_close, 0x26733679, "");
SYMBOL_CRC(l2cap_register_user, 0xe3333bf3, "");
SYMBOL_CRC(l2cap_unregister_user, 0xeac7a431, "");
SYMBOL_CRC(l2cap_conn_get, 0xba67951c, "");
SYMBOL_CRC(l2cap_conn_put, 0x661615b5, "");
SYMBOL_CRC(l2cap_chan_send, 0x5d0849db, "_gpl");
SYMBOL_CRC(l2cap_chan_connect, 0x8605e7ae, "_gpl");
SYMBOL_CRC(l2cap_is_socket, 0x07e74bce, "");
SYMBOL_CRC(baswap, 0x7b5ce5c3, "");
SYMBOL_CRC(bt_to_errno, 0x7aad008b, "");
SYMBOL_CRC(bt_status, 0x7bd9427a, "");
SYMBOL_CRC(bt_info, 0x0718b8b7, "");
SYMBOL_CRC(bt_warn, 0x214e4265, "");
SYMBOL_CRC(bt_err, 0x7b8c32f1, "");
SYMBOL_CRC(bt_warn_ratelimited, 0xddacccf6, "");
SYMBOL_CRC(bt_err_ratelimited, 0xd7613212, "");
SYMBOL_CRC(__hci_cmd_sync_sk, 0x503dcfc5, "");
SYMBOL_CRC(__hci_cmd_sync, 0x422c4e69, "");
SYMBOL_CRC(hci_cmd_sync, 0x70ee38e3, "");
SYMBOL_CRC(__hci_cmd_sync_ev, 0x5d578a66, "");
SYMBOL_CRC(__hci_cmd_sync_status_sk, 0xdf1a87ff, "");
SYMBOL_CRC(__hci_cmd_sync_status, 0x5f29260c, "");
SYMBOL_CRC(hci_cmd_sync_cancel, 0x7c57c548, "");
SYMBOL_CRC(hci_cmd_sync_cancel_sync, 0x9aab84e3, "");
SYMBOL_CRC(hci_cmd_sync_submit, 0xe28b35ff, "");
SYMBOL_CRC(hci_cmd_sync_queue, 0x0ca0826f, "");
SYMBOL_CRC(hci_cmd_sync_queue_once, 0xd5ba8ab0, "");
SYMBOL_CRC(hci_cmd_sync_lookup_entry, 0xf03d22f5, "");
SYMBOL_CRC(hci_cmd_sync_cancel_entry, 0xa2c99c85, "");
SYMBOL_CRC(hci_cmd_sync_dequeue_once, 0x27a53e03, "");
SYMBOL_CRC(hci_cmd_sync_dequeue, 0x72b63f04, "");
SYMBOL_CRC(hci_devcd_rx, 0xa36d67be, "");
SYMBOL_CRC(hci_devcd_timeout, 0xa60137a1, "");
SYMBOL_CRC(hci_devcd_register, 0xb1ca65d0, "");
SYMBOL_CRC(hci_devcd_init, 0x8a15fb06, "");
SYMBOL_CRC(hci_devcd_append, 0xa0535dad, "");
SYMBOL_CRC(hci_devcd_append_pattern, 0x27fbd601, "");
SYMBOL_CRC(hci_devcd_complete, 0x5df0afce, "");
SYMBOL_CRC(hci_devcd_abort, 0xd913ca1e, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xda10ec3, "security_sock_graft" },
	{ 0xd4216927, "skb_free_datagram" },
	{ 0x136b25da, "sock_queue_rcv_skb_reason" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x18f58619, "try_module_get" },
	{ 0x4914275a, "sock_i_uid" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x28a445b3, "simple_attr_open" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x7475be8e, "crypto_ecdh_key_len" },
	{ 0x78b887ed, "vsprintf" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x20978fb9, "idr_find" },
	{ 0x2f850adc, "debugfs_attr_write" },
	{ 0xfba7a5f5, "__get_random_u32_below" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xb6f5a1f2, "devm_kmalloc" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa38602cd, "drain_workqueue" },
	{ 0xea4da57c, "dev_set_name" },
	{ 0x355a4cb4, "scm_detach_fds" },
	{ 0x97c3d9f5, "crypto_shash_tfm_digest" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0x7f17ae37, "device_unregister" },
	{ 0xb5f5c77e, "skb_dequeue" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x23967225, "debugfs_create_u16" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xac9d8cfe, "led_trigger_register_simple" },
	{ 0x96848186, "scnprintf" },
	{ 0xc0763484, "rfkill_blocked" },
	{ 0x4c236f6f, "__x86_indirect_thunk_r15" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0xde293f9e, "add_wait_queue_exclusive" },
	{ 0x7d10618c, "device_initialize" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x43babd19, "sg_init_one" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x80340e17, "seq_lseek" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x84b08e3b, "sock_no_connect" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xde6185eb, "dev_kfree_skb_irq_reason" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x697ed5f0, "memcpy_and_pad" },
	{ 0xc2b9ff8, "led_trigger_unregister_simple" },
	{ 0xe2964344, "__wake_up" },
	{ 0xdc2b2807, "__module_get" },
	{ 0x148653, "vsnprintf" },
	{ 0x1e1356e9, "get_device" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x248efd3, "kstrtobool_from_user" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x558b281d, "aes_expandkey" },
	{ 0x50b2b15, "__pskb_copy_fclone" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6a1e0cf0, "__put_cred" },
	{ 0x8f099454, "put_cmsg" },
	{ 0x8cb09cb0, "skb_queue_purge_reason" },
	{ 0x14fc6972, "crypto_destroy_tfm" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x122c3a7e, "_printk" },
	{ 0x42098192, "crypto_alloc_kpp" },
	{ 0x6b853d06, "ns_to_kernel_old_timeval" },
	{ 0x7222c16a, "proto_unregister" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x3c90e235, "sock_register" },
	{ 0x5a49628c, "datagram_poll" },
	{ 0x2d34b705, "__sock_recv_cmsgs" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x56fa3780, "put_device" },
	{ 0xa916b694, "strnlen" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xf44d53da, "security_secid_to_secctx" },
	{ 0x910bb85d, "proto_register" },
	{ 0x16e297c3, "bit_wait" },
	{ 0xed61f6b3, "security_release_secctx" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd6a7d5b2, "skb_queue_tail" },
	{ 0xd47a039c, "module_put" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xb67eddb7, "debugfs_attr_read" },
	{ 0x5ef32d9b, "__sock_recv_timestamp" },
	{ 0xafeaf674, "sock_no_shutdown" },
	{ 0x23f650d8, "sk_filter_trim_cap" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c41b807, "devm_kfree" },
	{ 0xa8e458b, "crypto_req_done" },
	{ 0xece43bce, "init_net" },
	{ 0x5a5266, "crypto_shash_setkey" },
	{ 0x35cad296, "simple_open" },
	{ 0xc084677a, "skb_pull" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xcc44e65b, "device_add" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x67b08877, "simple_attr_release" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0xfa6977b9, "init_uts_ns" },
	{ 0x36c091de, "sk_free" },
	{ 0x9f6d188f, "device_move" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xde85399, "sock_no_accept" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe246278b, "skb_push" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x6f5598d1, "sock_no_listen" },
	{ 0x1840543b, "debugfs_remove" },
	{ 0x5a921311, "strncmp" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0x4be84ba, "seq_putc" },
	{ 0xbd6841d4, "crc16" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x2a718f47, "iov_iter_kvec" },
	{ 0xffb7c514, "ida_free" },
	{ 0x3dfc897c, "seq_hlist_start_head" },
	{ 0x325e698, "class_unregister" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xb1518e15, "cancel_work" },
	{ 0xf3eaf8a7, "lock_sock_nested" },
	{ 0x5729625b, "device_find_child" },
	{ 0x12bdaa7b, "dev_coredumpv" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x2e591177, "skb_copy_datagram_iter" },
	{ 0x92e44c7f, "rfkill_alloc" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xb230d2ec, "crypto_ecdh_encode_key" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x5f258127, "sk_alloc" },
	{ 0x7acfab09, "device_del" },
	{ 0xbaf18ed0, "__sock_queue_rcv_skb" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x525951f6, "default_llseek" },
	{ 0x26f0d865, "__sock_recv_wifi_status" },
	{ 0x8dbdd0ba, "from_kuid" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xf4ba9908, "sock_no_socketpair" },
	{ 0xfb578fc5, "memset" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xf044cbcd, "__get_task_comm" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x1e54ba33, "sock_no_mmap" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe06141e9, "security_sk_clone" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0x129cf0b, "__scm_destroy" },
	{ 0x9164d2c3, "from_kgid_munged" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0xf474fdcb, "kfree_const" },
	{ 0x11ed6da9, "skb_unlink" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x34d8a7d0, "devm_kasprintf" },
	{ 0x2c402ac1, "seq_read" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xa2a427b5, "sock_i_ino" },
	{ 0xa940cb6c, "debugfs_create_file" },
	{ 0x98f39bb6, "devm_led_trigger_register" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x999e8297, "vfree" },
	{ 0xff282521, "rfkill_register" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x8afd1a4b, "sk_capable" },
	{ 0x1632bc21, "kvasprintf_const" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa3f425cf, "param_ops_bool" },
	{ 0x75bda77a, "seq_hlist_next" },
	{ 0x75f63f0d, "skb_recv_datagram" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x73da78ac, "sock_alloc_send_pskb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x63fd798c, "remove_proc_entry" },
	{ 0x6d5f5b91, "radix_tree_tagged" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x13fe5644, "seq_printf" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2db5a302, "skb_copy" },
	{ 0xf1de5c0a, "skb_clone" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x15bcc2d9, "_copy_from_iter" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xe8631ea4, "skb_pull_data" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x8cf244f1, "seq_puts" },
	{ 0x960990a1, "sock_gettstamp" },
	{ 0x14f55ccf, "single_release" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x58022dd5, "pid_vnr" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0x2788847d, "from_kuid_munged" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x4744e7c6, "led_trigger_event" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x4d160fd7, "iov_iter_revert" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xf1e1c4c6, "proc_create_seq_private" },
	{ 0xbf968baa, "debugfs_create_u8" },
	{ 0xf54b7f27, "single_open" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x148d5a95, "crypto_alloc_shash" },
	{ 0xfe67de01, "debugfs_create_dir" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x8545d10c, "fwnode_property_read_u8_array" },
	{ 0x5b787605, "put_pid" },
	{ 0x1e980173, "class_register" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x242851e9, "sock_init_data" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x492f888f, "__dev_fwnode" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xa5bdee8c, "release_sock" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1c5402a3, "skb_queue_head" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x77e9eb37, "aes_encrypt" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "ecdh_generic");


MODULE_INFO(srcversion, "F2B92D269EBF88AA4FE758B");
