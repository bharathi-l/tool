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

KSYMTAB_FUNC(nci_uart_register, "_gpl", "");
KSYMTAB_FUNC(nci_uart_unregister, "_gpl", "");
KSYMTAB_FUNC(nci_uart_set_config, "_gpl", "");

SYMBOL_CRC(nci_uart_register, 0x80051f98, "_gpl");
SYMBOL_CRC(nci_uart_unregister, 0xc8c5700c, "_gpl");
SYMBOL_CRC(nci_uart_set_config, 0x60beb1f2, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x29f2fd8b, "tty_set_termios" },
	{ 0x18f58619, "try_module_get" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x896ee050, "tty_register_ldisc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb5f5c77e, "skb_dequeue" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8cb09cb0, "skb_queue_purge_reason" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x414b2823, "tty_driver_flush_buffer" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0xd6a7d5b2, "skb_queue_tail" },
	{ 0xd47a039c, "module_put" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x56567557, "_dev_err" },
	{ 0xc084677a, "skb_pull" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x909f7bd8, "n_tty_ioctl_helper" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x668b19a1, "down_read" },
	{ 0x9303f088, "tty_unregister_ldisc" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0x1bb78c2d, "tty_unthrottle" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x53b954a2, "up_read" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7B98292A5339917A2E664FF");
