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
	{ 0xc6f46339, "init_timer_key" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0x8cb09cb0, "skb_queue_purge_reason" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xb5f5c77e, "skb_dequeue" },
	{ 0x9a25806b, "consume_skb" },
	{ 0xd47a039c, "module_put" },
	{ 0x69acdf38, "memcpy" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6cbbc89, "capable" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x342eb451, "vcc_insert_socket" },
	{ 0xdc2b2807, "__module_get" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x24d273d1, "add_timer" },
	{ 0xed194eb, "alloc_etherdev_mqs" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9ecb4adc, "register_netdev" },
	{ 0xb6983911, "skb_realloc_headroom" },
	{ 0xe246278b, "skb_push" },
	{ 0xabb08c3a, "skb_copy_expand" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x4c93359a, "br_fdb_test_addr_hook" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x44465aeb, "dev_set_mtu" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x6178095e, "dev_addr_mod" },
	{ 0xc084677a, "skb_pull" },
	{ 0x28cca31b, "eth_type_trans" },
	{ 0x5cf52384, "netif_rx" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x4443d399, "atm_proc_root" },
	{ 0xf1e1c4c6, "proc_create_seq_private" },
	{ 0xa00f4e0b, "register_atm_ioctl" },
	{ 0x122c3a7e, "_printk" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x37a0cba, "kfree" },
	{ 0xea372566, "vcc_release_async" },
	{ 0x3356a89f, "netif_tx_wake_queue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x13fe5644, "seq_printf" },
	{ 0x4be84ba, "seq_putc" },
	{ 0x8cf244f1, "seq_puts" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x63fd798c, "remove_proc_entry" },
	{ 0xf1db46d2, "deregister_atm_ioctl" },
	{ 0xfe71b7d9, "unregister_netdev" },
	{ 0x589e0a2c, "free_netdev" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0xd6a7d5b2, "skb_queue_tail" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "atm");


MODULE_INFO(srcversion, "CCF9B43A2AC716DBC54EA4C");
