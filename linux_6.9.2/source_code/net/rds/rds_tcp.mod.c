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
	{ 0x5119042c, "tcp_sock_set_keepintvl" },
	{ 0x200b2041, "in6addr_any" },
	{ 0x20c5e653, "rds_cong_map_updated" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x222ce5ee, "tcp_sock_set_cork" },
	{ 0x208910a, "rds_send_path_reset" },
	{ 0xad3ac9fc, "tcp_read_sock" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0x38615932, "rds_conn_path_connect_if_down" },
	{ 0x45a4781e, "rds_addr_cmp" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa85bbe00, "__SCT__tp_func_sk_data_ready" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x4bbbcb6f, "kernel_bind" },
	{ 0xc4179983, "rds_trans_unregister" },
	{ 0x4c37f22a, "rds_info_deregister_func" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0xdc0192a7, "__tracepoint_sk_data_ready" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xdc2b2807, "__module_get" },
	{ 0x3754fb97, "kmem_cache_create" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8cb09cb0, "skb_queue_purge_reason" },
	{ 0xb3012895, "register_net_sysctl_sz" },
	{ 0x52f88d45, "tcp_sock_set_keepcnt" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0xa467af, "rds_wq" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x3cfdd46f, "kmem_cache_alloc" },
	{ 0xd6a7d5b2, "skb_queue_tail" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x1a791bd3, "rds_conn_destroy" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xece43bce, "init_net" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0xffbf0424, "rds_send_path_drop_acked" },
	{ 0xda959b0f, "__SCK__tp_func_sk_data_ready" },
	{ 0x7990f761, "dev_get_by_index_rcu" },
	{ 0x9604c6bb, "kernel_sock_shutdown" },
	{ 0xc2dab779, "rds_info_copy" },
	{ 0x85e4e520, "rds_stats_info_copy" },
	{ 0xe8883527, "rds_inc_put" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4ebf36a1, "kmem_cache_free" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x868de3a9, "sock_sendmsg" },
	{ 0x3844c783, "rds_info_register_func" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xeba8170b, "unregister_pernet_device" },
	{ 0xf3eaf8a7, "lock_sock_nested" },
	{ 0xc507dcd9, "inet_addr_type" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x2e591177, "skb_copy_datagram_iter" },
	{ 0x6f3dc11, "pskb_extract" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xa49408df, "kernel_connect" },
	{ 0x2024cb06, "rds_connect_path_complete" },
	{ 0x8c3f85ca, "iov_iter_bvec" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xbe7430ee, "rds_recv_incoming" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xb3824a12, "sock_create_kern" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x6aeec60f, "rds_conn_create" },
	{ 0x2781650b, "rds_send_ping" },
	{ 0x36087aa4, "rds_stats" },
	{ 0x1927fe9, "rds_inc_path_init" },
	{ 0x26ed65de, "sock_release" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xbfcc2a83, "tcp_sock_set_keepidle" },
	{ 0xf1d58f0, "tcp_sock_set_nodelay" },
	{ 0xa483ddbe, "rds_conn_path_drop" },
	{ 0xb805d2b3, "unregister_net_sysctl_table" },
	{ 0xfa1f9024, "ipv6_chk_addr" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x1054743e, "sock_create_lite" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf7607ba5, "kernel_sendmsg" },
	{ 0xf8d5c5a1, "rds_trans_register" },
	{ 0xa802aea8, "register_pernet_device" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x7ac1254b, "local_clock" },
	{ 0x560cd29a, "kmem_cache_destroy" },
	{ 0xa5bdee8c, "release_sock" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x55b31ea, "sock_no_linger" },
	{ 0x2801a22f, "proc_dointvec_minmax" },
	{ 0xbeb0397, "sock_set_keepalive" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "rds");


MODULE_INFO(srcversion, "94A7C02F6370BFB8EFFEA48");
