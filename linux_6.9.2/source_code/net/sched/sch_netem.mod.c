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
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xfc421e79, "gnet_stats_add_queue" },
	{ 0x92c1f310, "qdisc_tree_reduce_backlog" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xd5a43273, "nla_put" },
	{ 0xb7f54816, "nla_put_64bit" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0xe3ff2c41, "get_random_u64" },
	{ 0x53510975, "qdisc_watchdog_init" },
	{ 0x1a9a433c, "prandom_u32_state" },
	{ 0xe830b189, "__qdisc_calculate_pkt_len" },
	{ 0x3931717e, "kfree_skb_list_reason" },
	{ 0xd83d2213, "qdisc_watchdog_schedule_range_ns" },
	{ 0xe7052298, "skb_orphan_partial" },
	{ 0xdf2c2742, "rb_last" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xf1de5c0a, "skb_clone" },
	{ 0x17470827, "netif_skb_features" },
	{ 0x5bb5fa3f, "__skb_gso_segment" },
	{ 0x9a25806b, "consume_skb" },
	{ 0x2db5a302, "skb_copy" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x9858f364, "get_random_u8" },
	{ 0xfba7a5f5, "__get_random_u32_below" },
	{ 0x7c05db6c, "skb_checksum_help" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x122c3a7e, "_printk" },
	{ 0x286d5f54, "register_qdisc" },
	{ 0x60d382d9, "qdisc_watchdog_cancel" },
	{ 0x5a7d7c64, "qdisc_put" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x5e858455, "unregister_qdisc" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xece784c2, "rb_first" },
	{ 0xca9360b5, "rb_next" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x5061cdd6, "rtnl_kfree_skbs" },
	{ 0xb6b61110, "qdisc_reset" },
	{ 0x56470118, "__warn_printk" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "97942B7E2B26B97723FFD96");
