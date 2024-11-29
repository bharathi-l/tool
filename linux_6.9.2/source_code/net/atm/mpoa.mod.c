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
	{ 0x48112d76, "_raw_read_lock_irq" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0xc162d7f5, "proc_create" },
	{ 0x996daa7, "seq_release" },
	{ 0xa58af0a6, "_raw_read_unlock_irq" },
	{ 0xb5f5c77e, "skb_dequeue" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x80340e17, "seq_lseek" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xdc2b2807, "__module_get" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3aca0190, "_raw_write_lock_irq" },
	{ 0xdf2ebb87, "_raw_read_unlock_irqrestore" },
	{ 0x28cca31b, "eth_type_trans" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0xb1342cdb, "_raw_read_lock_irqsave" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd6a7d5b2, "skb_queue_tail" },
	{ 0xd47a039c, "module_put" },
	{ 0xece43bce, "init_net" },
	{ 0xe3cda79b, "softnet_data" },
	{ 0xc084677a, "skb_pull" },
	{ 0x24d273d1, "add_timer" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xe246278b, "skb_push" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x9f76baf4, "_raw_write_unlock_irq" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x5cf52384, "netif_rx" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2c402ac1, "seq_read" },
	{ 0xea372566, "vcc_release_async" },
	{ 0xb6983911, "skb_realloc_headroom" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x4443d399, "atm_proc_root" },
	{ 0x63fd798c, "remove_proc_entry" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x13fe5644, "seq_printf" },
	{ 0xa00f4e0b, "register_atm_ioctl" },
	{ 0x3efb7f15, "dev_get_by_name" },
	{ 0xf1db46d2, "deregister_atm_ioctl" },
	{ 0x90d9e2c3, "seq_open" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x2eebc68d, "dev_kfree_skb_any_reason" },
	{ 0x342eb451, "vcc_insert_socket" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "atm");


MODULE_INFO(srcversion, "CEDEB4FEEBFE8A2F341D75F");
