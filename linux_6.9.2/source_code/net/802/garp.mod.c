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

KSYMTAB_FUNC(garp_request_join, "_gpl", "");
KSYMTAB_FUNC(garp_request_leave, "_gpl", "");
KSYMTAB_FUNC(garp_init_applicant, "_gpl", "");
KSYMTAB_FUNC(garp_uninit_applicant, "_gpl", "");
KSYMTAB_FUNC(garp_register_application, "_gpl", "");
KSYMTAB_FUNC(garp_unregister_application, "_gpl", "");

SYMBOL_CRC(garp_request_join, 0x637ce858, "_gpl");
SYMBOL_CRC(garp_request_leave, 0x6317a69a, "_gpl");
SYMBOL_CRC(garp_init_applicant, 0xf54bb31a, "_gpl");
SYMBOL_CRC(garp_uninit_applicant, 0x407cd584, "_gpl");
SYMBOL_CRC(garp_register_application, 0x83a485b9, "_gpl");
SYMBOL_CRC(garp_unregister_application, 0x7dc62c3d, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x913ccf1f, "stp_proto_register" },
	{ 0x8889b7fe, "stp_proto_unregister" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xe246278b, "skb_push" },
	{ 0xbc74b7d, "llc_mac_hdr_init" },
	{ 0xd6a7d5b2, "skb_queue_tail" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x37a0cba, "kfree" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x6233c841, "dev_mc_add" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x56470118, "__warn_printk" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xece784c2, "rb_first" },
	{ 0xca9360b5, "rb_next" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x8e7a30bb, "__dev_queue_xmit" },
	{ 0xb5f5c77e, "skb_dequeue" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xc084677a, "skb_pull" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0xdf237453, "timer_shutdown_sync" },
	{ 0xccb7cf76, "dev_mc_del" },
	{ 0xd786c3ef, "param_ops_uint" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xfba7a5f5, "__get_random_u32_below" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "stp,llc");


MODULE_INFO(srcversion, "C73B27A15D341C0D540F352");
