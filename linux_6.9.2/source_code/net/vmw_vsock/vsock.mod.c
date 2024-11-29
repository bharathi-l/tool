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

KSYMTAB_DATA(vsock_bind_table, "_gpl", "");
KSYMTAB_DATA(vsock_connected_table, "_gpl", "");
KSYMTAB_DATA(vsock_table_lock, "_gpl", "");
KSYMTAB_FUNC(vsock_insert_connected, "_gpl", "");
KSYMTAB_FUNC(vsock_remove_bound, "_gpl", "");
KSYMTAB_FUNC(vsock_remove_connected, "_gpl", "");
KSYMTAB_FUNC(vsock_find_bound_socket, "_gpl", "");
KSYMTAB_FUNC(vsock_find_connected_socket, "_gpl", "");
KSYMTAB_FUNC(vsock_remove_sock, "_gpl", "");
KSYMTAB_FUNC(vsock_for_each_connected_socket, "_gpl", "");
KSYMTAB_FUNC(vsock_add_pending, "_gpl", "");
KSYMTAB_FUNC(vsock_remove_pending, "_gpl", "");
KSYMTAB_FUNC(vsock_enqueue_accept, "_gpl", "");
KSYMTAB_FUNC(vsock_assign_transport, "_gpl", "");
KSYMTAB_FUNC(vsock_find_cid, "_gpl", "");
KSYMTAB_FUNC(vsock_create_connected, "_gpl", "");
KSYMTAB_FUNC(vsock_stream_has_data, "_gpl", "");
KSYMTAB_FUNC(vsock_connectible_has_data, "_gpl", "");
KSYMTAB_FUNC(vsock_stream_has_space, "_gpl", "");
KSYMTAB_FUNC(vsock_data_ready, "_gpl", "");
KSYMTAB_FUNC(vsock_dgram_recvmsg, "_gpl", "");
KSYMTAB_FUNC(vsock_connectible_recvmsg, "_gpl", "");
KSYMTAB_FUNC(vsock_core_get_transport, "_gpl", "");
KSYMTAB_FUNC(vsock_core_register, "_gpl", "");
KSYMTAB_FUNC(vsock_core_unregister, "_gpl", "");
KSYMTAB_FUNC(vsock_add_tap, "_gpl", "");
KSYMTAB_FUNC(vsock_remove_tap, "_gpl", "");
KSYMTAB_FUNC(vsock_deliver_tap, "_gpl", "");
KSYMTAB_FUNC(vsock_addr_init, "_gpl", "");
KSYMTAB_FUNC(vsock_addr_validate, "_gpl", "");
KSYMTAB_FUNC(vsock_addr_bound, "_gpl", "");
KSYMTAB_FUNC(vsock_addr_unbind, "_gpl", "");
KSYMTAB_FUNC(vsock_addr_equals_addr, "_gpl", "");
KSYMTAB_FUNC(vsock_addr_cast, "_gpl", "");

SYMBOL_CRC(vsock_bind_table, 0x284e07d8, "_gpl");
SYMBOL_CRC(vsock_connected_table, 0x9bb6fd09, "_gpl");
SYMBOL_CRC(vsock_table_lock, 0xc92f7f50, "_gpl");
SYMBOL_CRC(vsock_insert_connected, 0x6b984983, "_gpl");
SYMBOL_CRC(vsock_remove_bound, 0x58bd3509, "_gpl");
SYMBOL_CRC(vsock_remove_connected, 0x629c50fe, "_gpl");
SYMBOL_CRC(vsock_find_bound_socket, 0x8685b8f4, "_gpl");
SYMBOL_CRC(vsock_find_connected_socket, 0x9acff7de, "_gpl");
SYMBOL_CRC(vsock_remove_sock, 0xd0b636e7, "_gpl");
SYMBOL_CRC(vsock_for_each_connected_socket, 0x4852d7c9, "_gpl");
SYMBOL_CRC(vsock_add_pending, 0x4c419781, "_gpl");
SYMBOL_CRC(vsock_remove_pending, 0xe0757cc9, "_gpl");
SYMBOL_CRC(vsock_enqueue_accept, 0x288f25c8, "_gpl");
SYMBOL_CRC(vsock_assign_transport, 0x0f1c2408, "_gpl");
SYMBOL_CRC(vsock_find_cid, 0x90aa8549, "_gpl");
SYMBOL_CRC(vsock_create_connected, 0x9c601371, "_gpl");
SYMBOL_CRC(vsock_stream_has_data, 0xb713adfd, "_gpl");
SYMBOL_CRC(vsock_connectible_has_data, 0x8f44900e, "_gpl");
SYMBOL_CRC(vsock_stream_has_space, 0x3167f4fa, "_gpl");
SYMBOL_CRC(vsock_data_ready, 0xd8702956, "_gpl");
SYMBOL_CRC(vsock_dgram_recvmsg, 0x4d18f2ec, "_gpl");
SYMBOL_CRC(vsock_connectible_recvmsg, 0xc89555b2, "_gpl");
SYMBOL_CRC(vsock_core_get_transport, 0xd5051737, "_gpl");
SYMBOL_CRC(vsock_core_register, 0xef63afeb, "_gpl");
SYMBOL_CRC(vsock_core_unregister, 0x14ac8fe3, "_gpl");
SYMBOL_CRC(vsock_add_tap, 0xdac52d69, "_gpl");
SYMBOL_CRC(vsock_remove_tap, 0x8ce6fcd7, "_gpl");
SYMBOL_CRC(vsock_deliver_tap, 0x5ee85f2c, "_gpl");
SYMBOL_CRC(vsock_addr_init, 0x3d4b0fca, "_gpl");
SYMBOL_CRC(vsock_addr_validate, 0xec96eadf, "_gpl");
SYMBOL_CRC(vsock_addr_bound, 0x4b99648c, "_gpl");
SYMBOL_CRC(vsock_addr_unbind, 0x0e9bc9b6, "_gpl");
SYMBOL_CRC(vsock_addr_equals_addr, 0xaf2674b5, "_gpl");
SYMBOL_CRC(vsock_addr_cast, 0xb0d7bda7, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xda10ec3, "security_sock_graft" },
	{ 0x138aa4ac, "sock_map_close" },
	{ 0x136b25da, "sock_queue_rcv_skb_reason" },
	{ 0x18f58619, "try_module_get" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x5538f563, "misc_deregister" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x9a25806b, "consume_skb" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x6d1ee8e5, "sock_map_unhash" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0xdc2b2807, "__module_get" },
	{ 0xa12ee544, "sk_stream_error" },
	{ 0x1b274b23, "sk_msg_recvmsg" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xf4e5cf55, "ns_capable_noaudit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6a1e0cf0, "__put_cred" },
	{ 0x87a132ef, "sk_error_report" },
	{ 0x8cb09cb0, "skb_queue_purge_reason" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x7222c16a, "proto_unregister" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x3c90e235, "sock_register" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x910bb85d, "proto_register" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd47a039c, "module_put" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xc715497b, "sk_msg_is_readable" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x36c091de, "sk_free" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xde85399, "sock_no_accept" },
	{ 0xedd17b31, "sock_get_timeout" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x6f5598d1, "sock_no_listen" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xd5d41543, "sock_recv_errqueue" },
	{ 0xf3eaf8a7, "lock_sock_nested" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x5f258127, "sk_alloc" },
	{ 0xf4ba9908, "sock_no_socketpair" },
	{ 0x28eef5e8, "misc_register" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x1e54ba33, "sock_no_mmap" },
	{ 0xe06141e9, "security_sk_clone" },
	{ 0x5bdb7603, "sock_copy_user_timeval" },
	{ 0x9f76258d, "nonseekable_open" },
	{ 0xca4b4b74, "sk_psock_drop" },
	{ 0x8e7a30bb, "__dev_queue_xmit" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x65441f22, "init_user_ns" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf1de5c0a, "skb_clone" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x62e9cfe4, "sock_no_ioctl" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x33b197c8, "sock_setsockopt" },
	{ 0x242851e9, "sock_init_data" },
	{ 0xa5bdee8c, "release_sock" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "39BA75A7626B9DD0340926A");
