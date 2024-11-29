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
	{ 0x9f76baf4, "_raw_write_unlock_irq" },
	{ 0xd47a039c, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x5cf52384, "netif_rx" },
	{ 0xfe71b7d9, "unregister_netdev" },
	{ 0x589e0a2c, "free_netdev" },
	{ 0x9a25806b, "consume_skb" },
	{ 0xc084677a, "skb_pull" },
	{ 0x28cca31b, "eth_type_trans" },
	{ 0x89f8df2b, "ether_setup" },
	{ 0xc169e3e4, "eth_mac_addr" },
	{ 0x13fe5644, "seq_printf" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xff1e9dd8, "seq_list_start" },
	{ 0xf1db46d2, "deregister_atm_ioctl" },
	{ 0x63fd798c, "remove_proc_entry" },
	{ 0xcfb6a3da, "unregister_atmdevice_notifier" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0xc6cbbc89, "capable" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x5a921311, "strncmp" },
	{ 0x6373ea58, "alloc_netdev_mqs" },
	{ 0x9ecb4adc, "register_netdev" },
	{ 0xdc2b2807, "__module_get" },
	{ 0xf3d10f9c, "vcc_process_recv_queue" },
	{ 0x122c3a7e, "_printk" },
	{ 0x6178095e, "dev_addr_mod" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb6983911, "skb_realloc_headroom" },
	{ 0xe246278b, "skb_push" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xa20764c1, "eth_validate_addr" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x4443d399, "atm_proc_root" },
	{ 0xf1e1c4c6, "proc_create_seq_private" },
	{ 0xa00f4e0b, "register_atm_ioctl" },
	{ 0xb09faf79, "register_atmdevice_notifier" },
	{ 0xb1342cdb, "_raw_read_lock_irqsave" },
	{ 0xe10bc0d2, "netif_carrier_off" },
	{ 0xdf2ebb87, "_raw_read_unlock_irqrestore" },
	{ 0xbc8054bd, "netif_carrier_on" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x3356a89f, "netif_tx_wake_queue" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x3aca0190, "_raw_write_lock_irq" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "atm");


MODULE_INFO(srcversion, "D6DD74026E597699CA081A6");
