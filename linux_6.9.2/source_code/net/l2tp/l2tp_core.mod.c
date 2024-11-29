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

KSYMTAB_FUNC(l2tp_sk_to_tunnel, "_gpl", "");
KSYMTAB_FUNC(l2tp_tunnel_inc_refcount, "_gpl", "");
KSYMTAB_FUNC(l2tp_tunnel_dec_refcount, "_gpl", "");
KSYMTAB_FUNC(l2tp_session_inc_refcount, "_gpl", "");
KSYMTAB_FUNC(l2tp_session_dec_refcount, "_gpl", "");
KSYMTAB_FUNC(l2tp_tunnel_get, "_gpl", "");
KSYMTAB_FUNC(l2tp_tunnel_get_nth, "_gpl", "");
KSYMTAB_FUNC(l2tp_tunnel_get_session, "_gpl", "");
KSYMTAB_FUNC(l2tp_session_get, "_gpl", "");
KSYMTAB_FUNC(l2tp_session_get_nth, "_gpl", "");
KSYMTAB_FUNC(l2tp_session_get_by_ifname, "_gpl", "");
KSYMTAB_FUNC(l2tp_session_register, "_gpl", "");
KSYMTAB_FUNC(l2tp_recv_common, "_gpl", "");
KSYMTAB_FUNC(l2tp_udp_encap_recv, "_gpl", "");
KSYMTAB_FUNC(l2tp_xmit_skb, "_gpl", "");
KSYMTAB_FUNC(l2tp_tunnel_create, "_gpl", "");
KSYMTAB_FUNC(l2tp_tunnel_register, "_gpl", "");
KSYMTAB_FUNC(l2tp_tunnel_delete, "_gpl", "");
KSYMTAB_FUNC(l2tp_session_delete, "_gpl", "");
KSYMTAB_FUNC(l2tp_session_set_header_len, "_gpl", "");
KSYMTAB_FUNC(l2tp_session_create, "_gpl", "");

SYMBOL_CRC(l2tp_sk_to_tunnel, 0xfa3f7334, "_gpl");
SYMBOL_CRC(l2tp_tunnel_inc_refcount, 0x8b7fac20, "_gpl");
SYMBOL_CRC(l2tp_tunnel_dec_refcount, 0x6cf025ba, "_gpl");
SYMBOL_CRC(l2tp_session_inc_refcount, 0x6ccdb4a9, "_gpl");
SYMBOL_CRC(l2tp_session_dec_refcount, 0x66f07741, "_gpl");
SYMBOL_CRC(l2tp_tunnel_get, 0x41ba37a6, "_gpl");
SYMBOL_CRC(l2tp_tunnel_get_nth, 0xa0872143, "_gpl");
SYMBOL_CRC(l2tp_tunnel_get_session, 0x81f74ee0, "_gpl");
SYMBOL_CRC(l2tp_session_get, 0x614695b9, "_gpl");
SYMBOL_CRC(l2tp_session_get_nth, 0x3910ccd2, "_gpl");
SYMBOL_CRC(l2tp_session_get_by_ifname, 0x2a6ac418, "_gpl");
SYMBOL_CRC(l2tp_session_register, 0xe45ea475, "_gpl");
SYMBOL_CRC(l2tp_recv_common, 0x43157ebd, "_gpl");
SYMBOL_CRC(l2tp_udp_encap_recv, 0x84f60f1c, "_gpl");
SYMBOL_CRC(l2tp_xmit_skb, 0x83269e6c, "_gpl");
SYMBOL_CRC(l2tp_tunnel_create, 0x39edb639, "_gpl");
SYMBOL_CRC(l2tp_tunnel_register, 0x22e7d70b, "_gpl");
SYMBOL_CRC(l2tp_tunnel_delete, 0x4805d8cc, "_gpl");
SYMBOL_CRC(l2tp_session_delete, 0xbb40642d, "_gpl");
SYMBOL_CRC(l2tp_session_set_header_len, 0xf6ab0010, "_gpl");
SYMBOL_CRC(l2tp_session_create, 0x2aa68f59, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x4c63d9dd, "trace_raw_output_prep" },
	{ 0x8900d05a, "trace_print_symbols_seq" },
	{ 0xb3e272c9, "trace_event_printf" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x66c4f5f8, "bpf_trace_run1" },
	{ 0xcf7b3b54, "bpf_trace_run2" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x38f28782, "udp_sock_create6" },
	{ 0x9604c6bb, "kernel_sock_shutdown" },
	{ 0x26ed65de, "sock_release" },
	{ 0xb3824a12, "sock_create_kern" },
	{ 0x4bbbcb6f, "kernel_bind" },
	{ 0xa49408df, "kernel_connect" },
	{ 0xa5cecfa, "udp_sock_create4" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa802aea8, "register_pernet_device" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x122c3a7e, "_printk" },
	{ 0xeba8170b, "unregister_pernet_device" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0xabcc6fb8, "perf_trace_run_bpf_submit" },
	{ 0x2bc629e5, "trace_event_buffer_reserve" },
	{ 0xcc7c3ecf, "trace_event_buffer_commit" },
	{ 0x2b8ff6d1, "__trace_trigger_soft_disabled" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x20978fb9, "idr_find" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xcc1b882a, "idr_get_next_ul" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x36c091de, "sk_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xb5f5c77e, "skb_dequeue" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xec445fa7, "ip_queue_xmit" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xa2066eb8, "pskb_expand_head" },
	{ 0x69acdf38, "memcpy" },
	{ 0x32a66e33, "udp_set_csum" },
	{ 0xff24b7e1, "inet6_csk_xmit" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x1783724b, "udp6_set_csum" },
	{ 0x986d6241, "dst_release" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xd9916c3a, "idr_alloc_u32" },
	{ 0xe4724a20, "sockfd_lookup" },
	{ 0xf3eaf8a7, "lock_sock_nested" },
	{ 0xa5bdee8c, "release_sock" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0xff63bab, "fput" },
	{ 0xe6778d60, "setup_udp_tunnel_sock" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x56470118, "__warn_printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd6a7d5b2, "skb_queue_tail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0xa66f7ccc, "trace_event_reg" },
	{ 0x8959d336, "trace_event_raw_init" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "ip6_udp_tunnel,udp_tunnel");


MODULE_INFO(srcversion, "D293F8DC0B380930B28E0B4");
