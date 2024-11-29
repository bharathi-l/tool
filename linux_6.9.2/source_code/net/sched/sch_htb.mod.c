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
	{ 0x117093be, "qdisc_class_hash_init" },
	{ 0xfb1fa35d, "pfifo_qdisc_ops" },
	{ 0xd274d279, "qdisc_create_dflt" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x5a7d7c64, "qdisc_put" },
	{ 0xcddb7ebd, "qdisc_hash_add" },
	{ 0x37a0cba, "kfree" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xece784c2, "rb_first" },
	{ 0xd83d2213, "qdisc_watchdog_schedule_range_ns" },
	{ 0xfb2b5d94, "qdisc_warn_nonwc" },
	{ 0x122c3a7e, "_printk" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xb6b61110, "qdisc_reset" },
	{ 0x92c1f310, "qdisc_tree_reduce_backlog" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x4f30f1bd, "noop_qdisc" },
	{ 0x60d382d9, "qdisc_watchdog_cancel" },
	{ 0x5061cdd6, "rtnl_kfree_skbs" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x1797ca0f, "tcf_block_put" },
	{ 0x4c0de954, "qdisc_class_hash_remove" },
	{ 0xded39a6b, "gen_kill_estimator" },
	{ 0xf53d4c26, "qdisc_class_hash_destroy" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xf630261, "gen_replace_estimator" },
	{ 0xb6e36ce2, "psched_ratecfg_precompute" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf2008295, "qdisc_class_hash_grow" },
	{ 0x8c459bf3, "qdisc_get_rtab" },
	{ 0xa61ced89, "qdisc_put_rtab" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x5e9a01ce, "gen_new_estimator" },
	{ 0x7b9d9306, "qdisc_class_hash_insert" },
	{ 0x735c05ac, "tcf_classify" },
	{ 0xe830b189, "__qdisc_calculate_pkt_len" },
	{ 0x47d0e073, "param_ops_int" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x286d5f54, "register_qdisc" },
	{ 0x26ac97f5, "dev_graft_qdisc" },
	{ 0x8e1c2224, "dev_deactivate" },
	{ 0x804528f1, "dev_activate" },
	{ 0x56470118, "__warn_printk" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xcf56004d, "__netif_schedule" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xca9360b5, "rb_next" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x5e858455, "unregister_qdisc" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xfc421e79, "gnet_stats_add_queue" },
	{ 0xb31016b0, "gnet_stats_copy_basic" },
	{ 0x807ed6e8, "gnet_stats_copy_rate_est" },
	{ 0x561e5d22, "gnet_stats_copy_queue" },
	{ 0x3e329f16, "gnet_stats_copy_app" },
	{ 0x866a62b2, "gnet_stats_basic_sync_init" },
	{ 0xd5a43273, "nla_put" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0xb7f54816, "nla_put_64bit" },
	{ 0x53510975, "qdisc_watchdog_init" },
	{ 0x64bf11a1, "tcf_block_get" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D6379CBDF7968A34BCCB3AF");
