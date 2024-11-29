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
	{ 0x18f58619, "try_module_get" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc551a41, "bt_procfs_cleanup" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x3bbc7a1a, "tty_wakeup" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xa85bbe00, "__SCT__tp_func_sk_data_ready" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0x2be6b37d, "tty_flip_buffer_push" },
	{ 0xb5f5c77e, "skb_dequeue" },
	{ 0xe93693fd, "bt_procfs_init" },
	{ 0xe0e86a04, "tty_kref_put" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x4bbbcb6f, "kernel_bind" },
	{ 0xde293f9e, "add_wait_queue_exclusive" },
	{ 0x4559fced, "set_user_nice" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2836b5ab, "hci_conn_switch_role" },
	{ 0x37a0cba, "kfree" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x80340e17, "seq_lseek" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xbd394d8, "tty_termios_baud_rate" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0x98d5b752, "__tty_alloc_driver" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0xdc0192a7, "__tracepoint_sk_data_ready" },
	{ 0xde6185eb, "dev_kfree_skb_irq_reason" },
	{ 0x6c13c2cc, "tty_port_tty_hangup" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xe2964344, "__wake_up" },
	{ 0x6e0388f3, "kernel_accept" },
	{ 0xdc2b2807, "__module_get" },
	{ 0xa2eba03, "tty_unregister_driver" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa298c8ad, "bt_sock_wait_ready" },
	{ 0x9262e632, "wake_up_process" },
	{ 0x8cb09cb0, "skb_queue_purge_reason" },
	{ 0xbfe20c7c, "tty_port_install" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe14fe3e6, "bt_sock_reclassify_lock" },
	{ 0xa14e6381, "hci_unregister_cb" },
	{ 0x7222c16a, "proto_unregister" },
	{ 0x8569637a, "bt_sock_stream_recvmsg" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x56fa3780, "put_device" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0xd80b0ef6, "bt_debugfs" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x8a77972a, "tty_unregister_device" },
	{ 0x910bb85d, "proto_register" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd6a7d5b2, "skb_queue_tail" },
	{ 0xd47a039c, "module_put" },
	{ 0x9597257b, "tty_port_tty_wakeup" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xb75bceb7, "device_create_file" },
	{ 0x5f4831da, "bt_sock_link" },
	{ 0xece43bce, "init_net" },
	{ 0xc084677a, "skb_pull" },
	{ 0xc75036ca, "tty_vhangup" },
	{ 0x8fea24bd, "bt_sock_unregister" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xda959b0f, "__SCK__tp_func_sk_data_ready" },
	{ 0x36c091de, "sk_free" },
	{ 0x9f6d188f, "device_move" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xeb0cc3df, "__tty_insert_flip_string_flags" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe246278b, "skb_push" },
	{ 0x15900e71, "tty_port_init" },
	{ 0x1840543b, "debugfs_remove" },
	{ 0x62b96759, "hci_conn_security" },
	{ 0xb086eb66, "tty_port_register_device" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xf3eaf8a7, "lock_sock_nested" },
	{ 0x1b9d54ff, "kthread_stop" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x86c9ab29, "tty_port_close" },
	{ 0xb09faf61, "bt_sock_alloc" },
	{ 0xa49408df, "kernel_connect" },
	{ 0xf4ba9908, "sock_no_socketpair" },
	{ 0x93b46a5a, "bt_accept_dequeue" },
	{ 0xdc8e7e20, "hci_get_route" },
	{ 0xff32a66c, "bt_accept_unlink" },
	{ 0xf594ee0c, "bt_sock_unlink" },
	{ 0x484ce119, "tty_port_put" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x352bae6a, "bt_accept_enqueue" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x1e54ba33, "sock_no_mmap" },
	{ 0xe06141e9, "security_sk_clone" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0x718b8b7, "bt_info" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4979384a, "bt_sock_wait_state" },
	{ 0x4b27709a, "kthread_create_on_node" },
	{ 0x2c402ac1, "seq_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6d2f9665, "hci_conn_check_secure" },
	{ 0xa940cb6c, "debugfs_create_file" },
	{ 0x9d70009c, "kernel_listen" },
	{ 0x70dca5cb, "bt_sock_register" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb3824a12, "sock_create_kern" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa3f425cf, "param_ops_bool" },
	{ 0x581b292d, "tty_register_driver" },
	{ 0x73da78ac, "sock_alloc_send_pskb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xaf559eea, "bt_sock_ioctl" },
	{ 0x89a18b1, "tty_port_hangup" },
	{ 0x13fe5644, "seq_printf" },
	{ 0x701b6b2b, "tty_port_open" },
	{ 0xb5f2cd61, "hci_register_cb" },
	{ 0x15bcc2d9, "_copy_from_iter" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x26ed65de, "sock_release" },
	{ 0xac9cb775, "bt_sock_poll" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x960990a1, "sock_gettstamp" },
	{ 0x14f55ccf, "single_release" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x47d0e073, "param_ops_int" },
	{ 0x4d160fd7, "iov_iter_revert" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0xf54b7f27, "single_open" },
	{ 0xf7607ba5, "kernel_sendmsg" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xc7aa8287, "tty_driver_kref_put" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0xa5bdee8c, "release_sock" },
	{ 0x1c5402a3, "skb_queue_head" },
	{ 0x5063970d, "tty_port_tty_get" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "B3F2EB98F782D99FB676A7A");
