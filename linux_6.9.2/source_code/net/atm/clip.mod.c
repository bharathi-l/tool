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
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x8cb09cb0, "skb_queue_purge_reason" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xd47a039c, "module_put" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3356a89f, "netif_tx_wake_queue" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0xeee69117, "netif_tx_lock" },
	{ 0x122c3a7e, "_printk" },
	{ 0xbd174e79, "netif_tx_unlock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xeaee7ce2, "neigh_update" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xf1db46d2, "deregister_atm_ioctl" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xfe71b7d9, "unregister_netdev" },
	{ 0x589e0a2c, "free_netdev" },
	{ 0xa00f4e0b, "register_atm_ioctl" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x4443d399, "atm_proc_root" },
	{ 0x65f11366, "proc_create_net_data" },
	{ 0x63fd798c, "remove_proc_entry" },
	{ 0xc6cbbc89, "capable" },
	{ 0x342eb451, "vcc_insert_socket" },
	{ 0xdc2b2807, "__module_get" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0xf3d10f9c, "vcc_process_recv_queue" },
	{ 0x6373ea58, "alloc_netdev_mqs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9ecb4adc, "register_netdev" },
	{ 0xece43bce, "init_net" },
	{ 0x983836c5, "ip_route_output_flow" },
	{ 0x62f336d9, "neigh_lookup" },
	{ 0x3011c54a, "__neigh_create" },
	{ 0x986d6241, "dst_release" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x385e8aec, "neigh_destroy" },
	{ 0x5cf52384, "netif_rx" },
	{ 0xc084677a, "skb_pull" },
	{ 0x13c76149, "atm_charge" },
	{ 0x37a0cba, "kfree" },
	{ 0x2eebc68d, "dev_kfree_skb_any_reason" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0xd6a7d5b2, "skb_queue_tail" },
	{ 0xe246278b, "skb_push" },
	{ 0x916d2157, "neigh_seq_stop" },
	{ 0xddab9ee9, "neigh_seq_next" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1f04d6e7, "neigh_direct_output" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x13fe5644, "seq_printf" },
	{ 0x96848186, "scnprintf" },
	{ 0x8cf244f1, "seq_puts" },
	{ 0x4be84ba, "seq_putc" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa68d0e4e, "arp_tbl" },
	{ 0x27376dbf, "neigh_seq_start" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0xbee9ed5c, "__neigh_for_each_release" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0xea372566, "vcc_release_async" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x9a25806b, "consume_skb" },
	{ 0xb5f5c77e, "skb_dequeue" },
	{ 0x2041fe35, "__icmp_send" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "atm");


MODULE_INFO(srcversion, "F94E3A87E1E12D21CFCCE5B");
