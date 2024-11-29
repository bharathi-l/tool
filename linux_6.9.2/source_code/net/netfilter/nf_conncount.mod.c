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

KSYMTAB_FUNC(nf_conncount_add, "_gpl", "");
KSYMTAB_FUNC(nf_conncount_list_init, "_gpl", "");
KSYMTAB_FUNC(nf_conncount_gc_list, "_gpl", "");
KSYMTAB_FUNC(nf_conncount_count, "_gpl", "");
KSYMTAB_FUNC(nf_conncount_init, "_gpl", "");
KSYMTAB_FUNC(nf_conncount_cache_free, "_gpl", "");
KSYMTAB_FUNC(nf_conncount_destroy, "_gpl", "");

SYMBOL_CRC(nf_conncount_add, 0x7591c8ae, "_gpl");
SYMBOL_CRC(nf_conncount_list_init, 0xded40268, "_gpl");
SYMBOL_CRC(nf_conncount_gc_list, 0xaff16306, "_gpl");
SYMBOL_CRC(nf_conncount_count, 0x6cfdcd2a, "_gpl");
SYMBOL_CRC(nf_conncount_init, 0x9d17c32e, "_gpl");
SYMBOL_CRC(nf_conncount_cache_free, 0xf2a1dbb9, "_gpl");
SYMBOL_CRC(nf_conncount_destroy, 0xa5b9cb92, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x15ba50a6, "jiffies" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x4ebf36a1, "kmem_cache_free" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x3754fb97, "kmem_cache_create" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x560cd29a, "kmem_cache_destroy" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x3733777f, "nf_ct_netns_get" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xa2e9dc6a, "__do_once_done" },
	{ 0x37a0cba, "kfree" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x3ac4525b, "nf_ct_netns_put" },
	{ 0xece784c2, "rb_first" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x57848526, "nf_conntrack_find_get" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xca9360b5, "rb_next" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3cfdd46f, "kmem_cache_alloc" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x56470118, "__warn_printk" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "EF606EB7323A06C78099833");
