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



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x2bb32ad1, "arc4_setkey" },
	{ 0xcd47fcc4, "arc4_crypt" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xb0e602eb, "memmove" },
	{ 0xc084677a, "skb_pull" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe246278b, "skb_push" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x63fa06b8, "lib80211_register_crypto_ops" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x13fe5644, "seq_printf" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xbb121585, "lib80211_unregister_crypto_ops" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "libarc4,lib80211");


MODULE_INFO(srcversion, "DB34BFAB7A0F44F7CC83CB3");
