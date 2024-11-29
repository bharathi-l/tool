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
	{ 0xcd47fcc4, "arc4_crypt" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xb0e602eb, "memmove" },
	{ 0xc084677a, "skb_pull" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe246278b, "skb_push" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x148d5a95, "crypto_alloc_shash" },
	{ 0x37a0cba, "kfree" },
	{ 0x62ede407, "wireless_send_event" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x63fa06b8, "lib80211_register_crypto_ops" },
	{ 0x13fe5644, "seq_printf" },
	{ 0x5a5266, "crypto_shash_setkey" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xfb578fc5, "memset" },
	{ 0x8489949a, "crypto_shash_update" },
	{ 0xde1fa7a3, "crypto_shash_final" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x14fc6972, "crypto_destroy_tfm" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xbb121585, "lib80211_unregister_crypto_ops" },
	{ 0x2bb32ad1, "arc4_setkey" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "libarc4,lib80211");


MODULE_INFO(srcversion, "AC70624B059A66F8BC37BD1");
