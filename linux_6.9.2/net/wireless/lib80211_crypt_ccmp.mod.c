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
	{ 0x44aeae89, "crypto_aead_setkey" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x666d1046, "crypto_alloc_aead" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc4fe251, "crypto_aead_decrypt" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xb0e602eb, "memmove" },
	{ 0xc084677a, "skb_pull" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xe246278b, "skb_push" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0xe94ef447, "crypto_aead_encrypt" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x63fa06b8, "lib80211_register_crypto_ops" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x13fe5644, "seq_printf" },
	{ 0x14fc6972, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0xbb121585, "lib80211_unregister_crypto_ops" },
	{ 0xe2384317, "crypto_aead_setauthsize" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "lib80211");


MODULE_INFO(srcversion, "BD0032DF38975FD45B0C9A2");
