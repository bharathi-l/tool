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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_MITIGATION_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

KSYMTAB_FUNC(mrp_request_join, "_gpl", "");
KSYMTAB_FUNC(mrp_request_leave, "_gpl", "");
KSYMTAB_FUNC(mrp_init_applicant, "_gpl", "");
KSYMTAB_FUNC(mrp_uninit_applicant, "_gpl", "");
KSYMTAB_FUNC(mrp_register_application, "_gpl", "");
KSYMTAB_FUNC(mrp_unregister_application, "_gpl", "");

SYMBOL_CRC(mrp_request_join, 0x61ff47b6, "_gpl");
SYMBOL_CRC(mrp_request_leave, 0xdb1aa785, "_gpl");
SYMBOL_CRC(mrp_init_applicant, 0x1d8ee9a9, "_gpl");
SYMBOL_CRC(mrp_uninit_applicant, 0x837b9cac, "_gpl");
SYMBOL_CRC(mrp_register_application, 0x6b8a3d22, "_gpl");
SYMBOL_CRC(mrp_unregister_application, 0xcc294d45, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc38c83b8, "mod_timer" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x4a04c76c, "dev_add_pack" },
	{ 0xe675d21a, "dev_remove_pack" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xd6a7d5b2, "skb_queue_tail" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x37a0cba, "kfree" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x6233c841, "dev_mc_add" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x56470118, "__warn_printk" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xece784c2, "rb_first" },
	{ 0xca9360b5, "rb_next" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x8e7a30bb, "__dev_queue_xmit" },
	{ 0xb5f5c77e, "skb_dequeue" },
	{ 0xdf237453, "timer_shutdown_sync" },
	{ 0xccb7cf76, "dev_mc_del" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xf1de5c0a, "skb_clone" },
	{ 0x9a25806b, "consume_skb" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xd786c3ef, "param_ops_uint" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xfba7a5f5, "__get_random_u32_below" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E5D35EE50B7C02532B87D30");
