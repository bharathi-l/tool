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

KSYMTAB_DATA(nf_osf_fingers, "_gpl", "");
KSYMTAB_FUNC(nf_osf_match, "_gpl", "");
KSYMTAB_FUNC(nf_osf_find, "_gpl", "");

SYMBOL_CRC(nf_osf_fingers, 0x35eff5e0, "_gpl");
SYMBOL_CRC(nf_osf_match, 0x3f614132, "_gpl");
SYMBOL_CRC(nf_osf_find, 0x1854d85f, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x21c04549, "nfnetlink_subsys_register" },
	{ 0x122c3a7e, "_printk" },
	{ 0xc6cbbc89, "capable" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x3c8dabba, "nfnetlink_subsys_unregister" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xa07a37f0, "memchr" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xae46ef22, "nf_log_packet" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "0C70BD0D433B2F885080176");
