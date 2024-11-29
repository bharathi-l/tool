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
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0x2b3810f2, "skb_flow_dissect_tunnel_info" },
	{ 0x871ab898, "skb_flow_dissect_ct" },
	{ 0x75797fca, "skb_flow_dissect_hash" },
	{ 0x9d4077c6, "__skb_flow_dissect" },
	{ 0x8577b16b, "skb_flow_dissect_meta" },
	{ 0xb1c2d56b, "tcf_action_exec" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0x6114cf8a, "__dev_get_by_name" },
	{ 0x3d1059ea, "__nla_validate" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0xcc1b882a, "idr_get_next_ul" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xb04b1f1c, "tc_setup_cb_reoffload" },
	{ 0x56470118, "__warn_printk" },
	{ 0xcbb74435, "tcf_exts_terse_dump" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xaee35d50, "pv_ops" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb202f0d7, "rht_bucket_nested_insert" },
	{ 0xe0313d71, "rhashtable_insert_slow" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xdc2b2807, "__module_get" },
	{ 0xe7f87e08, "__dev_get_by_index" },
	{ 0xa916b694, "strnlen" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xca26035f, "tcf_exts_dump" },
	{ 0x32ca49e4, "tcf_exts_dump_stats" },
	{ 0x2d8434c2, "tcf_exts_init_ex" },
	{ 0xedb43cac, "tcf_exts_validate_ex" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd9916c3a, "idr_alloc_u32" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x86dd708d, "tc_skb_ext_tc_enable" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xdfb8cdf0, "register_tcf_proto_ops" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0xd5a43273, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x20978fb9, "idr_find" },
	{ 0xd7fa33c7, "flow_rule_alloc" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x37a0cba, "kfree" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x82f9219d, "skb_flow_dissector_init" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x2a5ea9ef, "rhashtable_destroy" },
	{ 0xd47a039c, "module_put" },
	{ 0x1e8af27c, "unregister_tcf_proto_ops" },
	{ 0x6d5f5b91, "radix_tree_tagged" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x6ddd8e26, "tcf_exts_destroy" },
	{ 0x7dc5ffa7, "tc_skb_ext_tc_disable" },
	{ 0xa8b21c85, "__put_net" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x5ce48880, "tc_setup_cb_call" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xfb578fc5, "memset" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x8246600f, "tc_setup_cb_destroy" },
	{ 0xf9c39012, "tcf_exts_num_actions" },
	{ 0x688be7a6, "tc_setup_offload_action" },
	{ 0x309d17d4, "tc_setup_cb_add" },
	{ 0xce562c80, "tc_cleanup_offload_action" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x4b5acf74, "rhashtable_init" },
	{ 0xcf1a6c3f, "tcf_action_update_hw_stats" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0EF85F6FA8E0C3AC4C0CF59");
