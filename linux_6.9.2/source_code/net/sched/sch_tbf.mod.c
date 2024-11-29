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
	{ 0x92c1f310, "qdisc_tree_reduce_backlog" },
	{ 0x9a25806b, "consume_skb" },
	{ 0xb53a6311, "qdisc_offload_dump_helper" },
	{ 0xd5a43273, "nla_put" },
	{ 0xb7f54816, "nla_put_64bit" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x4f30f1bd, "noop_qdisc" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xfc421e79, "gnet_stats_add_queue" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x351d0f44, "qdisc_offload_graft_helper" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x56470118, "__warn_printk" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xd83d2213, "qdisc_watchdog_schedule_range_ns" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xb6e36ce2, "psched_ratecfg_precompute" },
	{ 0x62fe5ddf, "fifo_set_limit" },
	{ 0x8c459bf3, "qdisc_get_rtab" },
	{ 0xa61ced89, "qdisc_put_rtab" },
	{ 0x9a98b8a0, "bfifo_qdisc_ops" },
	{ 0xd0fb9fca, "fifo_create_dflt" },
	{ 0xcddb7ebd, "qdisc_hash_add" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x53510975, "qdisc_watchdog_init" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x286d5f54, "register_qdisc" },
	{ 0x60d382d9, "qdisc_watchdog_cancel" },
	{ 0x5a7d7c64, "qdisc_put" },
	{ 0xb6b61110, "qdisc_reset" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x5e858455, "unregister_qdisc" },
	{ 0xa233ed2f, "skb_gso_validate_mac_len" },
	{ 0x17470827, "netif_skb_features" },
	{ 0x5bb5fa3f, "__skb_gso_segment" },
	{ 0xe830b189, "__qdisc_calculate_pkt_len" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A6FDAA32638A1241C2B2BBE");
