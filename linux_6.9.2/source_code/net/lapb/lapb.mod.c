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

KSYMTAB_FUNC(lapb_register, "", "");
KSYMTAB_FUNC(lapb_unregister, "", "");
KSYMTAB_FUNC(lapb_getparms, "", "");
KSYMTAB_FUNC(lapb_setparms, "", "");
KSYMTAB_FUNC(lapb_connect_request, "", "");
KSYMTAB_FUNC(lapb_disconnect_request, "", "");
KSYMTAB_FUNC(lapb_data_request, "", "");
KSYMTAB_FUNC(lapb_data_received, "", "");

SYMBOL_CRC(lapb_register, 0x42887168, "");
SYMBOL_CRC(lapb_unregister, 0xc38a9aff, "");
SYMBOL_CRC(lapb_getparms, 0x5b704933, "");
SYMBOL_CRC(lapb_setparms, 0x943b0338, "");
SYMBOL_CRC(lapb_connect_request, 0xd995089e, "");
SYMBOL_CRC(lapb_disconnect_request, 0x5c845879, "");
SYMBOL_CRC(lapb_data_request, 0x52815776, "");
SYMBOL_CRC(lapb_data_received, 0x100f20dc, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4ef4d2e9, "skb_put" },
	{ 0xb5f5c77e, "skb_dequeue" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8cb09cb0, "skb_queue_purge_reason" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xd6a7d5b2, "skb_queue_tail" },
	{ 0xece43bce, "init_net" },
	{ 0xc084677a, "skb_pull" },
	{ 0x24d273d1, "add_timer" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xe246278b, "skb_push" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1a8c0f81, "skb_set_owner_w" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x2db5a302, "skb_copy" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x655cfa5d, "skb_append" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x1c5402a3, "skb_queue_head" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8323997AE97C76739C548AF");
