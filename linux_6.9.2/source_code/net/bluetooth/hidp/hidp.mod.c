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
	{ 0x3a914b0d, "input_allocate_device" },
	{ 0xeac7a431, "l2cap_unregister_user" },
	{ 0xf812cff6, "memscan" },
	{ 0xc551a41, "bt_procfs_cleanup" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xb5f5c77e, "skb_dequeue" },
	{ 0xe93693fd, "bt_procfs_init" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x4559fced, "set_user_nice" },
	{ 0x9f1bba9f, "sock_no_sendmsg" },
	{ 0x34a183fb, "input_unregister_device" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x84b08e3b, "sock_no_connect" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xe2964344, "__wake_up" },
	{ 0xdc2b2807, "__module_get" },
	{ 0x1e1356e9, "get_device" },
	{ 0xba67951c, "l2cap_conn_get" },
	{ 0x60c5441, "hid_allocate_device" },
	{ 0x5aa6b0a8, "hid_destroy_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9262e632, "wake_up_process" },
	{ 0x8cb09cb0, "skb_queue_purge_reason" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe3333bf3, "l2cap_register_user" },
	{ 0x7222c16a, "proto_unregister" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x5ee9853c, "input_register_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x56fa3780, "put_device" },
	{ 0xa916b694, "strnlen" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x910bb85d, "proto_register" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd6a7d5b2, "skb_queue_tail" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x5f4831da, "bt_sock_link" },
	{ 0xafeaf674, "sock_no_shutdown" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xff63bab, "fput" },
	{ 0x57bc19d2, "down_write" },
	{ 0xece43bce, "init_net" },
	{ 0xce807a25, "up_write" },
	{ 0xc084677a, "skb_pull" },
	{ 0x8fea24bd, "bt_sock_unregister" },
	{ 0x674a4cc, "__module_put_and_kthread_exit" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x36c091de, "sk_free" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xde85399, "sock_no_accept" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6f5598d1, "sock_no_listen" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0xda733252, "sock_no_bind" },
	{ 0x7e74bce, "l2cap_is_socket" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xb09faf61, "bt_sock_alloc" },
	{ 0x661615b5, "l2cap_conn_put" },
	{ 0xf4ba9908, "sock_no_socketpair" },
	{ 0xf594ee0c, "bt_sock_unlink" },
	{ 0xc5a3d011, "sock_no_recvmsg" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x1e54ba33, "sock_no_mmap" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfd5505d3, "input_event" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0x718b8b7, "bt_info" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x668b19a1, "down_read" },
	{ 0x3c813aa4, "hid_input_report" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4b27709a, "kthread_create_on_node" },
	{ 0x70dca5cb, "bt_sock_register" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x9b8d9591, "sock_no_getname" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x55c123f1, "hid_parse_report" },
	{ 0xe4724a20, "sockfd_lookup" },
	{ 0xf7607ba5, "kernel_sendmsg" },
	{ 0x53b954a2, "up_read" },
	{ 0xd3c6606e, "hid_ignore" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xb4efd684, "hid_add_device" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1c5402a3, "skb_queue_head" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "bluetooth,hid");


MODULE_INFO(srcversion, "CAF2B115B5F4D05D5E29056");
