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

KSYMTAB_FUNC(flow_offload_alloc, "_gpl", "");
KSYMTAB_FUNC(flow_offload_route_init, "_gpl", "");
KSYMTAB_FUNC(flow_offload_free, "_gpl", "");
KSYMTAB_FUNC(flow_offload_add, "_gpl", "");
KSYMTAB_FUNC(flow_offload_refresh, "_gpl", "");
KSYMTAB_FUNC(flow_offload_teardown, "_gpl", "");
KSYMTAB_FUNC(flow_offload_lookup, "_gpl", "");
KSYMTAB_FUNC(nf_flow_snat_port, "_gpl", "");
KSYMTAB_FUNC(nf_flow_dnat_port, "_gpl", "");
KSYMTAB_FUNC(nf_flow_table_init, "_gpl", "");
KSYMTAB_FUNC(nf_flow_table_cleanup, "_gpl", "");
KSYMTAB_FUNC(nf_flow_table_free, "_gpl", "");
KSYMTAB_FUNC(nf_flow_offload_ip_hook, "_gpl", "");
KSYMTAB_FUNC(nf_flow_offload_ipv6_hook, "_gpl", "");
KSYMTAB_FUNC(nf_flow_rule_route_ipv4, "_gpl", "");
KSYMTAB_FUNC(nf_flow_rule_route_ipv6, "_gpl", "");
KSYMTAB_FUNC(nf_flow_table_offload_setup, "_gpl", "");

SYMBOL_CRC(flow_offload_alloc, 0xbbb5e6df, "_gpl");
SYMBOL_CRC(flow_offload_route_init, 0x9510ae27, "_gpl");
SYMBOL_CRC(flow_offload_free, 0xbc05220e, "_gpl");
SYMBOL_CRC(flow_offload_add, 0xef8e14bc, "_gpl");
SYMBOL_CRC(flow_offload_refresh, 0x9950320f, "_gpl");
SYMBOL_CRC(flow_offload_teardown, 0x44cd855a, "_gpl");
SYMBOL_CRC(flow_offload_lookup, 0xd00b6ff9, "_gpl");
SYMBOL_CRC(nf_flow_snat_port, 0x3ddf756d, "_gpl");
SYMBOL_CRC(nf_flow_dnat_port, 0xc81eebce, "_gpl");
SYMBOL_CRC(nf_flow_table_init, 0x6c2eafbc, "_gpl");
SYMBOL_CRC(nf_flow_table_cleanup, 0x29bc8962, "_gpl");
SYMBOL_CRC(nf_flow_table_free, 0x28a90676, "_gpl");
SYMBOL_CRC(nf_flow_offload_ip_hook, 0x10c39865, "_gpl");
SYMBOL_CRC(nf_flow_offload_ipv6_hook, 0xa3eef134, "_gpl");
SYMBOL_CRC(nf_flow_rule_route_ipv4, 0x105d5a7c, "_gpl");
SYMBOL_CRC(nf_flow_rule_route_ipv6, 0x07d99fbf, "_gpl");
SYMBOL_CRC(nf_flow_table_offload_setup, 0x8cb280ee, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x200b2041, "in6addr_any" },
	{ 0xd7fa33c7, "flow_rule_alloc" },
	{ 0x8c3cecae, "ip6_dst_check" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0xfd7c40c, "skb_gso_validate_network_len" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xeff25db6, "ip_output" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xd4829999, "neigh_xmit" },
	{ 0xf27aee89, "flow_block_cb_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0xff0bd83a, "ip6_output" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x4b5acf74, "rhashtable_init" },
	{ 0xe5ce1a56, "rhashtable_walk_enter" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa2066eb8, "pskb_expand_head" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0xc084677a, "skb_pull" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc0cb301e, "dev_get_by_index" },
	{ 0x7990f761, "dev_get_by_index_rcu" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9a5dce5c, "rhashtable_walk_start_check" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x3eb8d1ad, "flow_indr_dev_setup_offload" },
	{ 0x9cd7551a, "rhashtable_walk_stop" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0xb202f0d7, "rht_bucket_nested_insert" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0x2a5ea9ef, "rhashtable_destroy" },
	{ 0x668b19a1, "down_read" },
	{ 0xb55a1390, "inet_proto_csum_replace16" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xaee35d50, "pv_ops" },
	{ 0xe0313d71, "rhashtable_insert_slow" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x8e7a30bb, "__dev_queue_xmit" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x385e8aec, "neigh_destroy" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67377444, "inet_proto_csum_replace4" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x268f4d4b, "nf_ct_acct_add" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x986d6241, "dst_release" },
	{ 0x54651f9b, "rhashtable_walk_next" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xe28a253c, "ipv4_dst_check" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0x53b954a2, "up_read" },
	{ 0xf188a662, "rhashtable_walk_exit" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "F763AEBA8C790855912F270");
