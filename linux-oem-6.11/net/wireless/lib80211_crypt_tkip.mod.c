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
	"\x14\x00\x00\x00\xc4\xfc\x47\xcd"
	"arc4_crypt\0\0"
	"\x14\x00\x00\x00\x5b\x3b\xdd\x69"
	"crc32_le\0\0\0\0"
	"\x10\x00\x00\x00\xeb\x02\xe6\xb0"
	"memmove\0"
	"\x14\x00\x00\x00\xca\xd7\x1b\xb3"
	"skb_pull\0\0\0\0"
	"\x14\x00\x00\x00\x44\x1b\x66\xa9"
	"skb_trim\0\0\0\0"
	"\x18\x00\x00\x00\x3b\xc0\xeb\xf6"
	"net_ratelimit\0\0\0"
	"\x1c\x00\x00\x00\x65\x62\xf5\x2c"
	"__dynamic_pr_debug\0\0"
	"\x14\x00\x00\x00\x5f\x8e\x87\xbd"
	"skb_push\0\0\0\0"
	"\x10\x00\x00\x00\x22\x41\x83\x8d"
	"skb_put\0"
	"\x18\x00\x00\x00\xad\xf9\x8a\x83"
	"kmalloc_caches\0\0"
	"\x20\x00\x00\x00\x7b\x6e\xe7\xa0"
	"__kmalloc_cache_noprof\0\0"
	"\x1c\x00\x00\x00\x01\x1d\x2d\x8f"
	"crypto_alloc_shash\0\0"
	"\x10\x00\x00\x00\xba\x0c\x7a\x03"
	"kfree\0\0\0"
	"\x1c\x00\x00\x00\xd2\xea\x49\xa4"
	"wireless_send_event\0"
	"\x14\x00\x00\x00\xbb\x6d\xfb\xbd"
	"__fentry__\0\0"
	"\x1c\x00\x00\x00\xca\x39\x82\x5b"
	"__x86_return_thunk\0\0"
	"\x28\x00\x00\x00\x76\x67\x71\xd9"
	"lib80211_register_crypto_ops\0\0\0\0"
	"\x14\x00\x00\x00\x69\xe3\xe1\xcf"
	"seq_printf\0\0"
	"\x1c\x00\x00\x00\x6e\xaf\x0f\x10"
	"crypto_shash_setkey\0"
	"\x24\x00\x00\x00\x97\x70\x48\x65"
	"__x86_indirect_thunk_rax\0\0\0\0"
	"\x10\x00\x00\x00\xc5\x8f\x57\xfb"
	"memset\0\0"
	"\x1c\x00\x00\x00\x88\x1f\xed\xd1"
	"crypto_shash_update\0"
	"\x1c\x00\x00\x00\x5d\xc9\x8f\x18"
	"crypto_shash_final\0\0"
	"\x10\x00\x00\x00\x7e\x3a\x2c\x12"
	"_printk\0"
	"\x1c\x00\x00\x00\xcb\xf6\xfd\xf0"
	"__stack_chk_fail\0\0\0\0"
	"\x1c\x00\x00\x00\xa9\x4d\xfb\xd1"
	"crypto_destroy_tfm\0\0"
	"\x18\x00\x00\x00\xc0\x0f\x76\xd0"
	"kfree_sensitive\0"
	"\x28\x00\x00\x00\xe0\xe5\xc2\xfb"
	"lib80211_unregister_crypto_ops\0\0"
	"\x14\x00\x00\x00\xd1\x2a\xb3\x2b"
	"arc4_setkey\0"
	"\x18\x00\x00\x00\x6b\x29\x44\x54"
	"module_layout\0\0\0"
	"\x00\x00\x00\x00\x00\x00\x00\x00";

MODULE_INFO(depends, "libarc4,lib80211");


MODULE_INFO(srcversion, "AC70624B059A66F8BC37BD1");
