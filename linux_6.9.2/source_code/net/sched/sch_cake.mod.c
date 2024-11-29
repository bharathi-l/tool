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
	{ 0xb43f9365, "ktime_get" },
	{ 0xa2066eb8, "pskb_expand_head" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0x735c05ac, "tcf_classify" },
	{ 0x92c1f310, "qdisc_tree_reduce_backlog" },
	{ 0xd83d2213, "qdisc_watchdog_schedule_range_ns" },
	{ 0x9a25806b, "consume_skb" },
	{ 0x17470827, "netif_skb_features" },
	{ 0x5bb5fa3f, "__skb_gso_segment" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0x44f0ad9, "get_random_u16" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x286d5f54, "register_qdisc" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x60d382d9, "qdisc_watchdog_cancel" },
	{ 0x1797ca0f, "tcf_block_put" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x5e858455, "unregister_qdisc" },
	{ 0xd5a43273, "nla_put" },
	{ 0xb7f54816, "nla_put_64bit" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0xeff39aad, "flow_keys_dissector" },
	{ 0x9d4077c6, "__skb_flow_dissect" },
	{ 0x460f4a34, "flow_hash_from_keys" },
	{ 0xab7ddc37, "nf_ct_get_tuple_skb" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x56470118, "__warn_printk" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x53510975, "qdisc_watchdog_init" },
	{ 0x64bf11a1, "tcf_block_get" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x561e5d22, "gnet_stats_copy_queue" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D2833B104EDEEAA89BBDBF7");
