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
	{ 0xd2d14dc0, "tcf_qevent_handle" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0x4f30f1bd, "noop_qdisc" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xfc421e79, "gnet_stats_add_queue" },
	{ 0x92c1f310, "qdisc_tree_reduce_backlog" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x351d0f44, "qdisc_offload_graft_helper" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x56470118, "__warn_printk" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x9a98b8a0, "bfifo_qdisc_ops" },
	{ 0xd0fb9fca, "fifo_create_dflt" },
	{ 0xcddb7ebd, "qdisc_hash_add" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xb4f6ea70, "tcf_qevent_validate_change" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5d6fdf7, "tcf_qevent_init" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x286d5f54, "register_qdisc" },
	{ 0x3e329f16, "gnet_stats_copy_app" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb6b61110, "qdisc_reset" },
	{ 0x5e858455, "unregister_qdisc" },
	{ 0xb53a6311, "qdisc_offload_dump_helper" },
	{ 0xd5a43273, "nla_put" },
	{ 0xfbea743e, "tcf_qevent_dump" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0xa0295016, "tcf_qevent_destroy" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x5a7d7c64, "qdisc_put" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1CDFAEFCAF91FC8ED45F5ED");
