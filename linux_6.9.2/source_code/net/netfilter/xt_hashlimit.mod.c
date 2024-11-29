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
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x63fd798c, "remove_proc_entry" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x999e8297, "vfree" },
	{ 0x99f7371c, "refcount_dec_and_mutex_lock" },
	{ 0xd28964a6, "proc_mkdir" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x944375db, "_totalram_pages" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xfb578fc5, "memset" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xf1e1c4c6, "proc_create_seq_private" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x48012e28, "xt_check_proc_name" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x398231f4, "ipv6_skip_exthdr" },
	{ 0x3cfdd46f, "kmem_cache_alloc" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0xe25b8c15, "xt_register_matches" },
	{ 0x3754fb97, "kmem_cache_create" },
	{ 0x122c3a7e, "_printk" },
	{ 0xd4363de3, "xt_unregister_matches" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0x37a0cba, "kfree" },
	{ 0x4ebf36a1, "kmem_cache_free" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x13fe5644, "seq_printf" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x560cd29a, "kmem_cache_destroy" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "1B252D4060FF09CC633A32A");
