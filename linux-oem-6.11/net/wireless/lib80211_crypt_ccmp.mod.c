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



static const char ____versions[]
__used __section("__versions") =
	"\x1c\x00\x00\x00\x78\xd9\xfd\xea"
	"crypto_aead_setkey\0\0"
	"\x18\x00\x00\x00\xad\xf9\x8a\x83"
	"kmalloc_caches\0\0"
	"\x20\x00\x00\x00\x7b\x6e\xe7\xa0"
	"__kmalloc_cache_noprof\0\0"
	"\x1c\x00\x00\x00\xb9\x48\x37\x8e"
	"crypto_alloc_aead\0\0\0"
	"\x1c\x00\x00\x00\x91\xc9\xc5\x52"
	"__kmalloc_noprof\0\0\0\0"
	"\x18\x00\x00\x00\x10\xc9\xf0\x2c"
	"sg_init_table\0\0\0"
	"\x1c\x00\x00\x00\x5e\xd7\xd8\x7c"
	"page_offset_base\0\0\0\0"
	"\x18\x00\x00\x00\x6c\x1e\x65\x97"
	"vmemmap_base\0\0\0\0"
	"\x1c\x00\x00\x00\xc4\x2b\x74\xd3"
	"crypto_aead_decrypt\0"
	"\x18\x00\x00\x00\xc0\x0f\x76\xd0"
	"kfree_sensitive\0"
	"\x10\x00\x00\x00\xeb\x02\xe6\xb0"
	"memmove\0"
	"\x14\x00\x00\x00\xca\xd7\x1b\xb3"
	"skb_pull\0\0\0\0"
	"\x14\x00\x00\x00\x44\x1b\x66\xa9"
	"skb_trim\0\0\0\0"
	"\x1c\x00\x00\x00\xcb\xf6\xfd\xf0"
	"__stack_chk_fail\0\0\0\0"
	"\x18\x00\x00\x00\x3b\xc0\xeb\xf6"
	"net_ratelimit\0\0\0"
	"\x1c\x00\x00\x00\x65\x62\xf5\x2c"
	"__dynamic_pr_debug\0\0"
	"\x14\x00\x00\x00\xb0\x28\x9d\x4c"
	"phys_base\0\0\0"
	"\x14\x00\x00\x00\x5f\x8e\x87\xbd"
	"skb_push\0\0\0\0"
	"\x10\x00\x00\x00\x22\x41\x83\x8d"
	"skb_put\0"
	"\x1c\x00\x00\x00\xe6\x54\x28\x10"
	"crypto_aead_encrypt\0"
	"\x28\x00\x00\x00\xb3\x1c\xa2\x87"
	"__ubsan_handle_out_of_bounds\0\0\0\0"
	"\x14\x00\x00\x00\xbb\x6d\xfb\xbd"
	"__fentry__\0\0"
	"\x28\x00\x00\x00\x76\x67\x71\xd9"
	"lib80211_register_crypto_ops\0\0\0\0"
	"\x1c\x00\x00\x00\xca\x39\x82\x5b"
	"__x86_return_thunk\0\0"
	"\x14\x00\x00\x00\x69\xe3\xe1\xcf"
	"seq_printf\0\0"
	"\x1c\x00\x00\x00\xa9\x4d\xfb\xd1"
	"crypto_destroy_tfm\0\0"
	"\x10\x00\x00\x00\xba\x0c\x7a\x03"
	"kfree\0\0\0"
	"\x28\x00\x00\x00\xe0\xe5\xc2\xfb"
	"lib80211_unregister_crypto_ops\0\0"
	"\x20\x00\x00\x00\xc0\x6c\x13\x4f"
	"crypto_aead_setauthsize\0"
	"\x18\x00\x00\x00\x6b\x29\x44\x54"
	"module_layout\0\0\0"
	"\x00\x00\x00\x00\x00\x00\x00\x00";

MODULE_INFO(depends, "lib80211");


MODULE_INFO(srcversion, "BD0032DF38975FD45B0C9A2");
