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

KSYMTAB_FUNC(smc_hash_sk, "_gpl", "");
KSYMTAB_FUNC(smc_unhash_sk, "_gpl", "");
KSYMTAB_DATA(smc_proto, "_gpl", "");
KSYMTAB_DATA(smc_proto6, "_gpl", "");
KSYMTAB_DATA(__tracepoint_smc_switch_to_fallback, "", "");
KSYMTAB_FUNC(__traceiter_smc_switch_to_fallback, "", "");
KSYMTAB_DATA(__SCK__tp_func_smc_switch_to_fallback, "", "");
KSYMTAB_FUNC(__SCT__tp_func_smc_switch_to_fallback, "", "");
KSYMTAB_DATA(__tracepoint_smc_tx_sendmsg, "", "");
KSYMTAB_FUNC(__traceiter_smc_tx_sendmsg, "", "");
KSYMTAB_DATA(__SCK__tp_func_smc_tx_sendmsg, "", "");
KSYMTAB_FUNC(__SCT__tp_func_smc_tx_sendmsg, "", "");
KSYMTAB_DATA(__tracepoint_smc_rx_recvmsg, "", "");
KSYMTAB_FUNC(__traceiter_smc_rx_recvmsg, "", "");
KSYMTAB_DATA(__SCK__tp_func_smc_rx_recvmsg, "", "");
KSYMTAB_FUNC(__SCT__tp_func_smc_rx_recvmsg, "", "");
KSYMTAB_DATA(__tracepoint_smcr_link_down, "", "");
KSYMTAB_FUNC(__traceiter_smcr_link_down, "", "");
KSYMTAB_DATA(__SCK__tp_func_smcr_link_down, "", "");
KSYMTAB_FUNC(__SCT__tp_func_smcr_link_down, "", "");

SYMBOL_CRC(smc_hash_sk, 0x79f334e0, "_gpl");
SYMBOL_CRC(smc_unhash_sk, 0x249d5f0f, "_gpl");
SYMBOL_CRC(smc_proto, 0x91f85a4e, "_gpl");
SYMBOL_CRC(smc_proto6, 0x6401ee5f, "_gpl");
SYMBOL_CRC(__tracepoint_smc_switch_to_fallback, 0xee3e6747, "");
SYMBOL_CRC(__traceiter_smc_switch_to_fallback, 0x72898136, "");
SYMBOL_CRC(__SCK__tp_func_smc_switch_to_fallback, 0xcf9d37fc, "");
SYMBOL_CRC(__SCT__tp_func_smc_switch_to_fallback, 0x1e612b77, "");
SYMBOL_CRC(__tracepoint_smc_tx_sendmsg, 0x034591fd, "");
SYMBOL_CRC(__traceiter_smc_tx_sendmsg, 0x979b2342, "");
SYMBOL_CRC(__SCK__tp_func_smc_tx_sendmsg, 0x595370ba, "");
SYMBOL_CRC(__SCT__tp_func_smc_tx_sendmsg, 0x87ccd0c7, "");
SYMBOL_CRC(__tracepoint_smc_rx_recvmsg, 0x81e48c1c, "");
SYMBOL_CRC(__traceiter_smc_rx_recvmsg, 0xa2a4d058, "");
SYMBOL_CRC(__SCK__tp_func_smc_rx_recvmsg, 0xdbf26d5b, "");
SYMBOL_CRC(__SCT__tp_func_smc_rx_recvmsg, 0x3ac4e1c7, "");
SYMBOL_CRC(__tracepoint_smcr_link_down, 0x576d8b03, "");
SYMBOL_CRC(__traceiter_smcr_link_down, 0xa692ac5f, "");
SYMBOL_CRC(__SCK__tp_func_smcr_link_down, 0x0d7b6a44, "");
SYMBOL_CRC(__SCT__tp_func_smcr_link_down, 0x3bcd3bb9, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xc89b2272, "netdev_lower_get_next" },
	{ 0xda10ec3, "security_sock_graft" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xa44e6221, "sk_send_sigurg" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x31dcb68d, "ib_unregister_client" },
	{ 0xd657ce1f, "_copy_to_iter" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xac7da2f2, "__nlmsg_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xe2bbfa56, "proc_dointvec_jiffies" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x77bc13a0, "strim" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xa08b6b7a, "vmalloc_to_page" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1bb51249, "tcp_have_smc" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x81a7f541, "percpu_ref_init" },
	{ 0x4c63d9dd, "trace_raw_output_prep" },
	{ 0xa85bbe00, "__SCT__tp_func_sk_data_ready" },
	{ 0x83345988, "rdma_read_gid_l2_fields" },
	{ 0xc8c85086, "sg_free_table" },
	{ 0xb7f54816, "nla_put_64bit" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xca9360b5, "rb_next" },
	{ 0x8ac251f6, "__ib_alloc_pd" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x2b8ff6d1, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x2ded980a, "dma_unmap_page_attrs" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xb3e272c9, "trace_event_printf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x4bbbcb6f, "kernel_bind" },
	{ 0xde293f9e, "add_wait_queue_exclusive" },
	{ 0x8a340600, "dma_sync_single_for_device" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0xb71589f0, "skip_spaces" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xc760ce2d, "genlmsg_put" },
	{ 0x8959d336, "trace_event_raw_init" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x7a53770b, "__put_devmap_managed_page_refs" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0xf95a56f7, "ib_dereg_mr_user" },
	{ 0xdc0192a7, "__tracepoint_sk_data_ready" },
	{ 0xcf7b3b54, "bpf_trace_run2" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x6e0388f3, "kernel_accept" },
	{ 0x749b5ad9, "rdma_dev_access_netns" },
	{ 0xdc2b2807, "__module_get" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x983836c5, "ip_route_output_flow" },
	{ 0x1e1356e9, "get_device" },
	{ 0xa12ee544, "sk_stream_error" },
	{ 0x5508237f, "ib_query_qp" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x7e8cbb49, "sock_alloc" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x1ed4d2eb, "percpu_ref_kill_and_confirm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x87a132ef, "sk_error_report" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0x287d6d9f, "dev_driver_string" },
	{ 0xcc7c3ecf, "trace_event_buffer_commit" },
	{ 0xb912560d, "static_key_disable" },
	{ 0xb3012895, "register_net_sysctl_sz" },
	{ 0x276e8af, "tcp_abort" },
	{ 0xe2e6511c, "rdma_read_gid_attr_ndev_rcu" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x82e39187, "dma_map_page_attrs" },
	{ 0x19982720, "splice_to_pipe" },
	{ 0x122c3a7e, "_printk" },
	{ 0x7222c16a, "proto_unregister" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x3c90e235, "sock_register" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x56fa3780, "put_device" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0xb3afc4bb, "ib_register_event_handler" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0xa916b694, "strnlen" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x3e0d2746, "__free_pages" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xa27cb19d, "ib_unregister_event_handler" },
	{ 0x910bb85d, "proto_register" },
	{ 0xb37bdb51, "tcp_unregister_ulp" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xba220db7, "__wake_up_sync_key" },
	{ 0xeee8976, "ib_register_client" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb3f985a8, "sg_alloc_table" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x915beb8e, "ib_map_mr_sg" },
	{ 0x33338211, "rcuref_get_slowpath" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xcfbafdf4, "generic_pipe_buf_get" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0xabcc6fb8, "perf_trace_run_bpf_submit" },
	{ 0x2d749323, "ib_set_client_data" },
	{ 0x57bc19d2, "down_write" },
	{ 0xece43bce, "init_net" },
	{ 0xce807a25, "up_write" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8911bab3, "netlink_unicast" },
	{ 0xda959b0f, "__SCK__tp_func_sk_data_ready" },
	{ 0x363c44af, "rdma_put_gid_attr" },
	{ 0xf9283947, "kernel_getsockname" },
	{ 0x36c091de, "sk_free" },
	{ 0xdf9c13e8, "sock_wake_async" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x9604c6bb, "kernel_sock_shutdown" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa92a17c2, "ib_query_port" },
	{ 0x5a921311, "strncmp" },
	{ 0xd5a43273, "nla_put" },
	{ 0xa66f7ccc, "trace_event_reg" },
	{ 0x9166fada, "strncpy" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xfb74e910, "proc_douintvec_minmax" },
	{ 0x74ff2675, "dma_need_sync" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x2a718f47, "iov_iter_kvec" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0xf3eaf8a7, "lock_sock_nested" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x44c06dab, "__ib_create_cq" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x11089ac7, "_ctype" },
	{ 0x5f258127, "sk_alloc" },
	{ 0x6dd64ade, "ib_destroy_qp_user" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb8362831, "dma_sync_single_for_cpu" },
	{ 0xa49408df, "kernel_connect" },
	{ 0xf4ba9908, "sock_no_socketpair" },
	{ 0xfb578fc5, "memset" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x790c3085, "sk_wait_data" },
	{ 0x28500e13, "proc_douintvec" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xb0144834, "ib_alloc_mr" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x1e54ba33, "sock_no_mmap" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xece784c2, "rb_first" },
	{ 0x4b25c482, "ib_destroy_cq_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x6d0f890c, "ib_modify_qp" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbaa9b8e8, "tcp_register_ulp" },
	{ 0xbe478f6a, "sk_common_release" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x9d70009c, "kernel_listen" },
	{ 0x9dd9e9cd, "ib_dma_virt_map_sg" },
	{ 0x385e8aec, "neigh_destroy" },
	{ 0x999e8297, "vfree" },
	{ 0xdf521442, "_find_next_zero_bit" },
	{ 0x2bc629e5, "trace_event_buffer_reserve" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xdfcc992c, "current_work" },
	{ 0xb3824a12, "sock_create_kern" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa26d9b4f, "workqueue_congested" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xf97a77c8, "alloc_pages" },
	{ 0xfbe215e4, "sg_next" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xf8641358, "__folio_put" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xa6645c69, "sock_recvmsg" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x3efb7f15, "dev_get_by_name" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x986d6241, "dst_release" },
	{ 0x9a87163a, "sk_stream_wait_connect" },
	{ 0x15bcc2d9, "_copy_from_iter" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x26ed65de, "sock_release" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x7afb465a, "ib_create_qp_kernel" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x75883880, "netdev_walk_all_lower_dev" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x7edd3e6b, "vlan_dev_vlan_id" },
	{ 0xb805d2b3, "unregister_net_sysctl_table" },
	{ 0x89c087ae, "ib_dealloc_pd_user" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0x56dd15d0, "rdma_get_gid_attr" },
	{ 0x20915d26, "dma_unmap_sg_attrs" },
	{ 0xc01b7698, "genl_unregister_family" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x754d539c, "strlen" },
	{ 0x4d160fd7, "iov_iter_revert" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0xf20b36c9, "genl_register_family" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf7607ba5, "kernel_sendmsg" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x53b954a2, "up_read" },
	{ 0x242851e9, "sock_init_data" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0xa5bdee8c, "release_sock" },
	{ 0xdc56a453, "dma_map_sg_attrs" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2801a22f, "proc_dointvec_minmax" },
	{ 0x6b2b69f7, "static_key_enable" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "ib_core");


MODULE_INFO(srcversion, "87B0AFC8A8F5239BBBAB5A0");
