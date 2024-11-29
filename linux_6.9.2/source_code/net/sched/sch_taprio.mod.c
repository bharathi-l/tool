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

KSYMTAB_FUNC(taprio_offload_get, "_gpl", "");
KSYMTAB_FUNC(taprio_offload_free, "_gpl", "");

SYMBOL_CRC(taprio_offload_get, 0xa1b21d70, "_gpl");
SYMBOL_CRC(taprio_offload_free, 0xe17db4ea, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xe830b189, "__qdisc_calculate_pkt_len" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0x17470827, "netif_skb_features" },
	{ 0x5bb5fa3f, "__skb_gso_segment" },
	{ 0x9a25806b, "consume_skb" },
	{ 0x92c1f310, "qdisc_tree_reduce_backlog" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xabc76a87, "netdev_reset_tc" },
	{ 0x2f4880df, "static_key_slow_dec" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x2ff9b6a6, "mqprio_validate_qopt" },
	{ 0x9bd566d0, "qdisc_offload_query_caps" },
	{ 0x41ade151, "mqprio_qopt_reconstruct" },
	{ 0xb3eae726, "netdev_set_num_tc" },
	{ 0x746f0887, "netdev_set_tc_queue" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xa59d46b5, "mqprio_fp_to_offload" },
	{ 0x3c96fa2f, "hrtimer_active" },
	{ 0x48879f20, "hrtimer_init" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd955afa6, "hrtimer_start_range_ns" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xfb1fa35d, "pfifo_qdisc_ops" },
	{ 0xd274d279, "qdisc_create_dflt" },
	{ 0xcddb7ebd, "qdisc_hash_add" },
	{ 0x2c834418, "static_key_slow_inc" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xcf56004d, "__netif_schedule" },
	{ 0xb7f54816, "nla_put_64bit" },
	{ 0xd5a43273, "nla_put" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0xb31016b0, "gnet_stats_copy_basic" },
	{ 0x561e5d22, "gnet_stats_copy_queue" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x37a0cba, "kfree" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x286d5f54, "register_qdisc" },
	{ 0x57635f7a, "__ethtool_get_link_ksettings" },
	{ 0x4f4cb259, "__dynamic_netdev_dbg" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x6d6fec1f, "ktime_mono_to_any" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x4a666d56, "hrtimer_cancel" },
	{ 0xb6b61110, "qdisc_reset" },
	{ 0x5e858455, "unregister_qdisc" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x56470118, "__warn_printk" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xfdbd9882, "ethtool_dev_mm_supported" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8e1c2224, "dev_deactivate" },
	{ 0x804528f1, "dev_activate" },
	{ 0x26ac97f5, "dev_graft_qdisc" },
	{ 0x5a7d7c64, "qdisc_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "sch_mqprio_lib");


MODULE_INFO(srcversion, "425256B13D3A183C7CDF6C7");
