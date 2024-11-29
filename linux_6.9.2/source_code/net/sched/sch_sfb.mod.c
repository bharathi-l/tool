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
	{ 0xe830b189, "__qdisc_calculate_pkt_len" },
	{ 0x6a30be78, "skb_get_hash_perturb" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x4f30f1bd, "noop_qdisc" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xfc421e79, "gnet_stats_add_queue" },
	{ 0x92c1f310, "qdisc_tree_reduce_backlog" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x56470118, "__warn_printk" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xfb1fa35d, "pfifo_qdisc_ops" },
	{ 0xd0fb9fca, "fifo_create_dflt" },
	{ 0xcddb7ebd, "qdisc_hash_add" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x64bf11a1, "tcf_block_get" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x286d5f54, "register_qdisc" },
	{ 0x3e329f16, "gnet_stats_copy_app" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb6b61110, "qdisc_reset" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x1797ca0f, "tcf_block_put" },
	{ 0x5a7d7c64, "qdisc_put" },
	{ 0x5e858455, "unregister_qdisc" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd5a43273, "nla_put" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x735c05ac, "tcf_classify" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x70002fe8, "siphash_1u32" },
	{ 0x44f0ad9, "get_random_u16" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "92ECDC1F0B348ECE6DDE222");
