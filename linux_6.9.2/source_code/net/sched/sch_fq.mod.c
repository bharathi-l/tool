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
	{ 0xc3292c04, "kmem_cache_free_bulk" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x3cfdd46f, "kmem_cache_alloc" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x5e858455, "unregister_qdisc" },
	{ 0x4ebf36a1, "kmem_cache_free" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x60d382d9, "qdisc_watchdog_cancel" },
	{ 0xd5a43273, "nla_put" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xd83d2213, "qdisc_watchdog_schedule_range_ns" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x3e329f16, "gnet_stats_copy_app" },
	{ 0x56470118, "__warn_printk" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92c1f310, "qdisc_tree_reduce_backlog" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x122c3a7e, "_printk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x64bada6, "sch_default_prio2band" },
	{ 0x48611023, "qdisc_watchdog_init_clockid" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3754fb97, "kmem_cache_create" },
	{ 0x286d5f54, "register_qdisc" },
	{ 0x560cd29a, "kmem_cache_destroy" },
	{ 0xece784c2, "rb_first" },
	{ 0xca9360b5, "rb_next" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x5061cdd6, "rtnl_kfree_skbs" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb65b063c, "__skb_get_hash" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F0435CB6CB7FAE3FCEB898C");
