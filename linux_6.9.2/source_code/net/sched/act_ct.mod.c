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
	{ 0x2f4880df, "static_key_slow_dec" },
	{ 0x50d6da, "tcf_unregister_action" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0xb7f54816, "nla_put_64bit" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xa916b694, "strnlen" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x89d99ee1, "__nf_ct_ext_find" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x460ec0f, "nf_ct_invert_tuple" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd00b6ff9, "flow_offload_lookup" },
	{ 0xece43bce, "init_net" },
	{ 0x9950320f, "flow_offload_refresh" },
	{ 0x268f4d4b, "nf_ct_acct_add" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0x44cd855a, "flow_offload_teardown" },
	{ 0xaee35d50, "pv_ops" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6fb49676, "queue_rcu_work" },
	{ 0x6b23f894, "nf_conntrack_helper_put" },
	{ 0xd73f1c26, "nf_connlabels_put" },
	{ 0x3ddfbad3, "nf_nat_helper_put" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe0313d71, "rhashtable_insert_slow" },
	{ 0x6c2eafbc, "nf_flow_table_init" },
	{ 0xdc2b2807, "__module_get" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0xb202f0d7, "rht_bucket_nested_insert" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x3387ad29, "tcf_idr_check_alloc" },
	{ 0x634b9988, "tcf_action_check_ctrlact" },
	{ 0x19d8cdee, "nf_connlabels_get" },
	{ 0x8e2e56fa, "nf_ct_tmpl_alloc" },
	{ 0xa49761a9, "nf_ct_add_helper" },
	{ 0x4344bb9b, "tcf_chain_put_by_act" },
	{ 0xeae3dd71, "tcf_idr_release" },
	{ 0x9a3bab78, "tcf_idr_create_from_flags" },
	{ 0xc8479a0, "tcf_idr_cleanup" },
	{ 0x88f10548, "tcf_action_set_ctrlact" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x75c8414a, "skb_pull_rcsum" },
	{ 0x32779b9, "ipv6_find_hdr" },
	{ 0x5b616f5a, "nf_ct_handle_fragments" },
	{ 0x26ff9401, "nf_ct_skb_network_trim" },
	{ 0xf46fa4b, "nf_conntrack_in" },
	{ 0x1c8e0a09, "nf_ct_deliver_cached_events" },
	{ 0x1a52e8ef, "nf_ct_nat" },
	{ 0xe246278b, "skb_push" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xa71e9567, "__nf_ct_try_assign_helper" },
	{ 0x42f71abc, "nf_ct_ext_add" },
	{ 0x55f20972, "nf_ct_helper" },
	{ 0x71ac2305, "nf_connlabels_replace" },
	{ 0xbbb5e6df, "flow_offload_alloc" },
	{ 0xef8e14bc, "flow_offload_add" },
	{ 0xbc05220e, "flow_offload_free" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0xa6ee3b65, "nf_ct_delete" },
	{ 0x641b8663, "__nf_conntrack_confirm" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xabe1d0c5, "tcf_idrinfo_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xdbbea4ec, "tcf_action_update_stats" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x28a90676, "nf_flow_table_free" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0xd47a039c, "module_put" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0xd5a43273, "nla_put" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x4b5acf74, "rhashtable_init" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x35880cce, "tcf_register_action" },
	{ 0x22d60537, "tcf_frag_xmit_count" },
	{ 0x2c834418, "static_key_slow_inc" },
	{ 0x2a5ea9ef, "rhashtable_destroy" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack,nf_flow_table,nf_nat");


MODULE_INFO(srcversion, "CA463F7711C38A867ADD1B0");
