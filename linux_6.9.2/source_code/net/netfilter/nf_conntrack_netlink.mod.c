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
	{ 0xc28997d7, "nf_ct_expect_alloc" },
	{ 0x890f844c, "nf_ct_helper_expectfn_find_by_name" },
	{ 0x641eb8, "nf_ct_expect_related_report" },
	{ 0xa916b694, "strnlen" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x754d539c, "strlen" },
	{ 0xed61f6b3, "security_release_secctx" },
	{ 0xcfca0a65, "nf_ct_get_id" },
	{ 0x57848526, "nf_conntrack_find_get" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x8ffe7e89, "nf_conntrack_htable_size" },
	{ 0xaf0847f0, "nf_conntrack_locks" },
	{ 0xdba7326b, "nf_conntrack_lock" },
	{ 0x28eff409, "nf_conntrack_hash" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xa6ee3b65, "nf_ct_delete" },
	{ 0xa6e1b7b2, "nf_ct_helper_expectfn_find_by_symbol" },
	{ 0xc11cbc0, "nfnetlink_has_listeners" },
	{ 0xdd5faa42, "nfnetlink_set_err" },
	{ 0x715447a0, "nfnetlink_send" },
	{ 0xc18ac88d, "nf_ct_expect_hsize" },
	{ 0xec8beba6, "nf_ct_expect_hash" },
	{ 0x289502a7, "__nf_ct_expect_find" },
	{ 0x24d273d1, "add_timer" },
	{ 0x4081abcf, "nf_conn_pernet_ecache" },
	{ 0x1f7f3888, "nf_conntrack_alloc" },
	{ 0x67806dce, "nf_ct_helper_ext_add" },
	{ 0x42f71abc, "nf_ct_ext_add" },
	{ 0xb8f4ef9b, "nf_ct_ecache_ext_add" },
	{ 0x3a2b49cf, "nf_ct_change_status_common" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x91b5472f, "nf_conntrack_hash_check_insert" },
	{ 0x90d4b20, "nf_conntrack_free" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xdab0a027, "nf_conntrack_eventmask_report" },
	{ 0xcf98cd6a, "nf_ct_iterate_cleanup_net" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x21c04549, "nfnetlink_subsys_register" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0x9359f1d8, "nfnl_ct_hook" },
	{ 0x122c3a7e, "_printk" },
	{ 0x3c8dabba, "nfnetlink_subsys_unregister" },
	{ 0xd71ec940, "nf_ct_tcp_seqadj_set" },
	{ 0x286b5af5, "nf_ct_expect_put" },
	{ 0x71ac2305, "nf_connlabels_replace" },
	{ 0x254ad00e, "nla_policy_len" },
	{ 0xecfdee8d, "nf_ct_l4proto_find" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x304ffee1, "nf_conntrack_unregister_notifier" },
	{ 0xc92c753d, "nf_conntrack_register_notifier" },
	{ 0xe4262c6, "__siphash_unaligned" },
	{ 0xe17678a, "siphash_4u64" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xa2e9dc6a, "__do_once_done" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x5de24966, "__netlink_dump_start" },
	{ 0x4fbfd817, "nf_nat_hook" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xd5a43273, "nla_put" },
	{ 0xf44d53da, "security_secid_to_secctx" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x3d1059ea, "__nla_validate" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x5fa587e5, "nf_ct_expect_find_get" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0x576471dd, "nf_ct_unlink_expect_report" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xf082677d, "nf_ct_expect_iterate_net" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xac7da2f2, "__nlmsg_put" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xb7f54816, "nla_put_64bit" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x89d99ee1, "__nf_ct_ext_find" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0x89d0bb01, "nf_conntrack_count" },
	{ 0xf38bcdf3, "nf_conntrack_max" },
	{ 0x144dfedb, "nfnetlink_unicast" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x93faf02b, "nf_ct_remove_expectations" },
	{ 0x984a595, "__nf_conntrack_helper_find" },
	{ 0x9337058d, "__nf_ct_change_timeout" },
	{ 0xe324588c, "__nf_ct_change_status" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack,nfnetlink");


MODULE_INFO(srcversion, "96DA3A393E0A343F2BA2216");
