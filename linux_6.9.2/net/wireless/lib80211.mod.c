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

#ifdef CONFIG_MITIGATION_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

KSYMTAB_FUNC(lib80211_crypt_info_init, "", "");
KSYMTAB_FUNC(lib80211_crypt_info_free, "", "");
KSYMTAB_FUNC(lib80211_crypt_delayed_deinit, "", "");
KSYMTAB_FUNC(lib80211_register_crypto_ops, "", "");
KSYMTAB_FUNC(lib80211_unregister_crypto_ops, "", "");
KSYMTAB_FUNC(lib80211_get_crypto_ops, "", "");

SYMBOL_CRC(lib80211_crypt_info_init, 0x32cc5960, "");
SYMBOL_CRC(lib80211_crypt_info_free, 0x91d03cf6, "");
SYMBOL_CRC(lib80211_crypt_delayed_deinit, 0x15015ca0, "");
SYMBOL_CRC(lib80211_register_crypto_ops, 0x63fa06b8, "");
SYMBOL_CRC(lib80211_unregister_crypto_ops, 0xbb121585, "");
SYMBOL_CRC(lib80211_get_crypto_ops, 0x04afa8ac, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x24d273d1, "add_timer" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xd47a039c, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x122c3a7e, "_printk" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1852F8AD91D6BE1E1EF504B");
