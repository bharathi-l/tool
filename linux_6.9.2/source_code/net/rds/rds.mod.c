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

KSYMTAB_FUNC(rds_cong_map_updated, "_gpl", "");
KSYMTAB_FUNC(rds_conn_create, "_gpl", "");
KSYMTAB_FUNC(rds_conn_create_outgoing, "_gpl", "");
KSYMTAB_FUNC(rds_conn_destroy, "_gpl", "");
KSYMTAB_FUNC(rds_for_each_conn_info, "_gpl", "");
KSYMTAB_FUNC(rds_conn_path_drop, "_gpl", "");
KSYMTAB_FUNC(rds_conn_drop, "_gpl", "");
KSYMTAB_FUNC(rds_conn_path_connect_if_down, "_gpl", "");
KSYMTAB_FUNC(rds_conn_connect_if_down, "_gpl", "");
KSYMTAB_FUNC(rds_info_register_func, "_gpl", "");
KSYMTAB_FUNC(rds_info_deregister_func, "_gpl", "");
KSYMTAB_FUNC(rds_info_copy, "_gpl", "");
KSYMTAB_FUNC(rds_message_addref, "_gpl", "");
KSYMTAB_FUNC(rds_message_put, "_gpl", "");
KSYMTAB_FUNC(rds_message_populate_header, "_gpl", "");
KSYMTAB_FUNC(rds_message_add_extension, "_gpl", "");
KSYMTAB_FUNC(rds_message_add_rdma_dest_extension, "_gpl", "");
KSYMTAB_FUNC(rds_message_unmapped, "_gpl", "");
KSYMTAB_FUNC(rds_inc_init, "_gpl", "");
KSYMTAB_FUNC(rds_inc_path_init, "_gpl", "");
KSYMTAB_FUNC(rds_inc_put, "_gpl", "");
KSYMTAB_FUNC(rds_recv_incoming, "_gpl", "");
KSYMTAB_FUNC(rds_send_path_reset, "_gpl", "");
KSYMTAB_FUNC(rds_send_xmit, "_gpl", "");
KSYMTAB_FUNC(rds_rdma_send_complete, "_gpl", "");
KSYMTAB_FUNC(rds_atomic_send_complete, "_gpl", "");
KSYMTAB_FUNC(rds_send_path_drop_acked, "_gpl", "");
KSYMTAB_FUNC(rds_send_drop_acked, "_gpl", "");
KSYMTAB_FUNC(rds_send_ping, "_gpl", "");
KSYMTAB_DATA(rds_stats, "_gpl", "");
KSYMTAB_FUNC(rds_stats_info_copy, "_gpl", "");
KSYMTAB_DATA(rds_wq, "_gpl", "");
KSYMTAB_FUNC(rds_connect_path_complete, "_gpl", "");
KSYMTAB_FUNC(rds_connect_complete, "_gpl", "");
KSYMTAB_FUNC(rds_addr_cmp, "_gpl", "");
KSYMTAB_FUNC(rds_trans_register, "_gpl", "");
KSYMTAB_FUNC(rds_trans_unregister, "_gpl", "");
KSYMTAB_FUNC(rds_page_remainder_alloc, "_gpl", "");

SYMBOL_CRC(rds_cong_map_updated, 0x20c5e653, "_gpl");
SYMBOL_CRC(rds_conn_create, 0x6aeec60f, "_gpl");
SYMBOL_CRC(rds_conn_create_outgoing, 0x83730e82, "_gpl");
SYMBOL_CRC(rds_conn_destroy, 0x1a791bd3, "_gpl");
SYMBOL_CRC(rds_for_each_conn_info, 0xc8e592b6, "_gpl");
SYMBOL_CRC(rds_conn_path_drop, 0xa483ddbe, "_gpl");
SYMBOL_CRC(rds_conn_drop, 0xd2798000, "_gpl");
SYMBOL_CRC(rds_conn_path_connect_if_down, 0x38615932, "_gpl");
SYMBOL_CRC(rds_conn_connect_if_down, 0x8472b830, "_gpl");
SYMBOL_CRC(rds_info_register_func, 0x3844c783, "_gpl");
SYMBOL_CRC(rds_info_deregister_func, 0x4c37f22a, "_gpl");
SYMBOL_CRC(rds_info_copy, 0xc2dab779, "_gpl");
SYMBOL_CRC(rds_message_addref, 0x5c016a91, "_gpl");
SYMBOL_CRC(rds_message_put, 0xaf70e31d, "_gpl");
SYMBOL_CRC(rds_message_populate_header, 0x585f567b, "_gpl");
SYMBOL_CRC(rds_message_add_extension, 0x2b0d543c, "_gpl");
SYMBOL_CRC(rds_message_add_rdma_dest_extension, 0x582fe5cf, "_gpl");
SYMBOL_CRC(rds_message_unmapped, 0xd0c0a2a2, "_gpl");
SYMBOL_CRC(rds_inc_init, 0x73705cf1, "_gpl");
SYMBOL_CRC(rds_inc_path_init, 0x01927fe9, "_gpl");
SYMBOL_CRC(rds_inc_put, 0xe8883527, "_gpl");
SYMBOL_CRC(rds_recv_incoming, 0xbe7430ee, "_gpl");
SYMBOL_CRC(rds_send_path_reset, 0x0208910a, "_gpl");
SYMBOL_CRC(rds_send_xmit, 0x556e7f1d, "_gpl");
SYMBOL_CRC(rds_rdma_send_complete, 0x18a25839, "_gpl");
SYMBOL_CRC(rds_atomic_send_complete, 0xd65648e8, "_gpl");
SYMBOL_CRC(rds_send_path_drop_acked, 0xffbf0424, "_gpl");
SYMBOL_CRC(rds_send_drop_acked, 0x611ddfd4, "_gpl");
SYMBOL_CRC(rds_send_ping, 0x2781650b, "_gpl");
SYMBOL_CRC(rds_stats, 0x36087aa4, "_gpl");
SYMBOL_CRC(rds_stats_info_copy, 0x85e4e520, "_gpl");
SYMBOL_CRC(rds_wq, 0x00a467af, "_gpl");
SYMBOL_CRC(rds_connect_path_complete, 0x2024cb06, "_gpl");
SYMBOL_CRC(rds_connect_complete, 0x585cc044, "_gpl");
SYMBOL_CRC(rds_addr_cmp, 0x45a4781e, "_gpl");
SYMBOL_CRC(rds_trans_register, 0xf8d5c5a1, "_gpl");
SYMBOL_CRC(rds_trans_unregister, 0xc4179983, "_gpl");
SYMBOL_CRC(rds_page_remainder_alloc, 0x9dcbbbf0, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x6a8067, "pin_user_pages_fast" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x200b2041, "in6addr_any" },
	{ 0xa2e9dc6a, "__do_once_done" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x18f58619, "try_module_get" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0x6875d8e9, "unpin_user_pages_dirty_lock" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x99ff92b3, "unpin_user_pages" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x402c3f50, "iov_iter_get_pages2" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x44f0ad9, "get_random_u16" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x7a53770b, "__put_devmap_managed_page_refs" },
	{ 0x4b5acf74, "rhashtable_init" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3754fb97, "kmem_cache_create" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8f099454, "put_cmsg" },
	{ 0xb3012895, "register_net_sysctl_sz" },
	{ 0xdf2ebb87, "_raw_read_unlock_irqrestore" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x6b853d06, "ns_to_kernel_old_timeval" },
	{ 0x7222c16a, "proto_unregister" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x3c90e235, "sock_register" },
	{ 0xad395dd9, "mm_account_pinned_pages" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xa916b694, "strnlen" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x3e0d2746, "__free_pages" },
	{ 0xb1342cdb, "_raw_read_lock_irqsave" },
	{ 0x3cfdd46f, "kmem_cache_alloc" },
	{ 0x910bb85d, "proto_register" },
	{ 0xd47a039c, "module_put" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0xafeaf674, "sock_no_shutdown" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x57bc19d2, "down_write" },
	{ 0xece43bce, "init_net" },
	{ 0xce807a25, "up_write" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x5968dc6d, "proc_doulongvec_ms_jiffies_minmax" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0x36c091de, "sk_free" },
	{ 0xde85399, "sock_no_accept" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x4ebf36a1, "kmem_cache_free" },
	{ 0x715a5ed0, "vprintk" },
	{ 0x6f5598d1, "sock_no_listen" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x9166fada, "strncpy" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xd5d41543, "sock_recv_errqueue" },
	{ 0x459e6151, "mm_unaccount_pinned_pages" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xeba8170b, "unregister_pernet_device" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xf3eaf8a7, "lock_sock_nested" },
	{ 0x657dcbf5, "copy_page_to_iter" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x5f258127, "sk_alloc" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xf4ba9908, "sock_no_socketpair" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0xb202f0d7, "rht_bucket_nested_insert" },
	{ 0x6a0e59cb, "unpin_user_page" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x1e54ba33, "sock_no_mmap" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xece784c2, "rb_first" },
	{ 0x2a5ea9ef, "rhashtable_destroy" },
	{ 0xeb078aee, "_raw_write_unlock_irqrestore" },
	{ 0x668b19a1, "down_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x49bd951e, "copy_page_from_iter" },
	{ 0xaee35d50, "pv_ops" },
	{ 0xe0313d71, "rhashtable_insert_slow" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa2a427b5, "sock_i_ino" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf97a77c8, "alloc_pages" },
	{ 0xf8641358, "__folio_put" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x56470118, "__warn_printk" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xf94536c2, "proc_dointvec" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xb805d2b3, "unregister_net_sysctl_table" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x5021bd81, "_raw_write_lock_irqsave" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x754d539c, "strlen" },
	{ 0x47d0e073, "param_ops_int" },
	{ 0x4d160fd7, "iov_iter_revert" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0x53b954a2, "up_read" },
	{ 0xcc5d22d9, "can_do_mlock" },
	{ 0xa802aea8, "register_pernet_device" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x62eceb9d, "iov_iter_npages" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x242851e9, "sock_init_data" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x7ac1254b, "local_clock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x560cd29a, "kmem_cache_destroy" },
	{ 0xa5bdee8c, "release_sock" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7B7FFB9935DFA03C419F6EB");
