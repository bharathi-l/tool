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
	{ 0x5e858455, "unregister_qdisc" },
	{ 0xfdbd9882, "ethtool_dev_mm_supported" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x9bd566d0, "qdisc_offload_query_caps" },
	{ 0x2ff9b6a6, "mqprio_validate_qopt" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3902aa26, "pfifo_fast_ops" },
	{ 0x1925bb69, "default_qdisc_ops" },
	{ 0xd274d279, "qdisc_create_dflt" },
	{ 0x746f0887, "netdev_set_tc_queue" },
	{ 0xb31016b0, "gnet_stats_copy_basic" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x561e5d22, "gnet_stats_copy_queue" },
	{ 0x866a62b2, "gnet_stats_basic_sync_init" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xfa042227, "gnet_stats_add_basic" },
	{ 0xfc421e79, "gnet_stats_add_queue" },
	{ 0x41ade151, "mqprio_qopt_reconstruct" },
	{ 0xd5a43273, "nla_put" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x22a1e082, "mq_change_real_num_tx" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x286d5f54, "register_qdisc" },
	{ 0x26ac97f5, "dev_graft_qdisc" },
	{ 0x5a7d7c64, "qdisc_put" },
	{ 0xcddb7ebd, "qdisc_hash_add" },
	{ 0x37a0cba, "kfree" },
	{ 0xb3eae726, "netdev_set_num_tc" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xa59d46b5, "mqprio_fp_to_offload" },
	{ 0x2c0c50bd, "netdev_txq_to_tc" },
	{ 0x8e1c2224, "dev_deactivate" },
	{ 0x804528f1, "dev_activate" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "sch_mqprio_lib");


MODULE_INFO(srcversion, "B8C607F90B53D099BF7D06B");
