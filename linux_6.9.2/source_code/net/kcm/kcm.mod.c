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
	{ 0xd4216927, "skb_free_datagram" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf405d1a1, "bpf_prog_put" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xd2fda55c, "sk_page_frag_refill" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa85bbe00, "__SCT__tp_func_sk_data_ready" },
	{ 0xb5f5c77e, "skb_dequeue" },
	{ 0x3ad845f0, "iov_iter_advance" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x17d74b5d, "fd_install" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x9d5fe588, "skb_splice_bits" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0xdc0192a7, "__tracepoint_sk_data_ready" },
	{ 0x84b08e3b, "sock_no_connect" },
	{ 0xdc2b2807, "__module_get" },
	{ 0x9b1a6c2a, "strp_stop" },
	{ 0x3754fb97, "kmem_cache_create" },
	{ 0xa12ee544, "sk_stream_error" },
	{ 0xac7f6213, "__sk_mem_schedule" },
	{ 0x7e8cbb49, "sock_alloc" },
	{ 0x39ee2480, "sock_alloc_file" },
	{ 0x65f11366, "proc_create_net_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0x87a132ef, "sk_error_report" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0xe94986d6, "sched_clock" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x7222c16a, "proto_unregister" },
	{ 0x3c90e235, "sock_register" },
	{ 0x5a49628c, "datagram_poll" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x3cfdd46f, "kmem_cache_alloc" },
	{ 0x910bb85d, "proto_register" },
	{ 0xd6a7d5b2, "skb_queue_tail" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0xadd22d6e, "bpf_prog_get_type_dev" },
	{ 0xafeaf674, "sock_no_shutdown" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0xff63bab, "fput" },
	{ 0x49608959, "migrate_disable" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xda959b0f, "__SCK__tp_func_sk_data_ready" },
	{ 0x36c091de, "sk_free" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xde85399, "sock_no_accept" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4ebf36a1, "kmem_cache_free" },
	{ 0x7c53999, "__sk_mem_reclaim" },
	{ 0x6f5598d1, "sock_no_listen" },
	{ 0xc370e1bc, "strp_done" },
	{ 0x543cf705, "sk_stream_wait_memory" },
	{ 0x868de3a9, "sock_sendmsg" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xeba8170b, "unregister_pernet_device" },
	{ 0xf3eaf8a7, "lock_sock_nested" },
	{ 0xda733252, "sock_no_bind" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x2e591177, "skb_copy_datagram_iter" },
	{ 0x5f258127, "sk_alloc" },
	{ 0x14b9592, "tcp_stream_memory_free" },
	{ 0x60ebfcb8, "strp_check_rcv" },
	{ 0x41a57b3, "skb_splice_from_iter" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0xf4ba9908, "sock_no_socketpair" },
	{ 0x8c3f85ca, "iov_iter_bvec" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x1e54ba33, "sock_no_mmap" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x1fad1a56, "sock_rfree" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x75f63f0d, "skb_recv_datagram" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x63fd798c, "remove_proc_entry" },
	{ 0x9b8d9591, "sock_no_getname" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x13fe5644, "seq_printf" },
	{ 0x1e1661a6, "proc_create_net_single" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x15bcc2d9, "_copy_from_iter" },
	{ 0x26ed65de, "sock_release" },
	{ 0x38a8aeee, "strp_data_ready" },
	{ 0x8cf244f1, "seq_puts" },
	{ 0xd8f4fa64, "csum_and_copy_from_iter_full" },
	{ 0xae489d5, "strp_unpause" },
	{ 0x7b9c8b7, "_copy_from_iter_nocache" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x4d160fd7, "iov_iter_revert" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0xc61b27bb, "strp_init" },
	{ 0xe4724a20, "sockfd_lookup" },
	{ 0xa802aea8, "register_pernet_device" },
	{ 0x4d7272e4, "migrate_enable" },
	{ 0x242851e9, "sock_init_data" },
	{ 0x560cd29a, "kmem_cache_destroy" },
	{ 0xa5bdee8c, "release_sock" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1c5402a3, "skb_queue_head" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9D0C255A4620CB62AB9D6FC");
