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

SYMBOL_CRC(lib80211_crypt_info_init, 0x2ee43502, "");
SYMBOL_CRC(lib80211_crypt_info_free, 0x57ba1206, "");
SYMBOL_CRC(lib80211_crypt_delayed_deinit, 0x6b1b5679, "");
SYMBOL_CRC(lib80211_register_crypto_ops, 0xd9716776, "");
SYMBOL_CRC(lib80211_unregister_crypto_ops, 0xfbc2e5e0, "");
SYMBOL_CRC(lib80211_get_crypto_ops, 0xd134d8f6, "");

static const char ____versions[]
__used __section("__versions") =
	"\x14\x00\x00\x00\xbb\x6d\xfb\xbd"
	"__fentry__\0\0"
	"\x1c\x00\x00\x00\xca\x39\x82\x5b"
	"__x86_return_thunk\0\0"
	"\x18\x00\x00\x00\x2d\x2e\x98\x62"
	"const_pcpu_hot\0\0"
	"\x10\x00\x00\x00\x7e\x3a\x2c\x12"
	"_printk\0"
	"\x20\x00\x00\x00\x0b\x05\xdb\x34"
	"_raw_spin_lock_irqsave\0\0"
	"\x24\x00\x00\x00\x70\xce\x5c\xd3"
	"_raw_spin_unlock_irqrestore\0"
	"\x10\x00\x00\x00\xa6\x50\xba\x15"
	"jiffies\0"
	"\x14\x00\x00\x00\xd1\x73\xd2\x24"
	"add_timer\0\0\0"
	"\x24\x00\x00\x00\x97\x70\x48\x65"
	"__x86_indirect_thunk_rax\0\0\0\0"
	"\x14\x00\x00\x00\x73\x8a\xf2\xcb"
	"module_put\0\0"
	"\x10\x00\x00\x00\xba\x0c\x7a\x03"
	"kfree\0\0\0"
	"\x18\x00\x00\x00\x39\x63\xf4\xc6"
	"init_timer_key\0\0"
	"\x1c\x00\x00\x00\xdc\x90\xee\x82"
	"timer_delete_sync\0\0\0"
	"\x28\x00\x00\x00\xb3\x1c\xa2\x87"
	"__ubsan_handle_out_of_bounds\0\0\0\0"
	"\x10\x00\x00\x00\x5a\x25\xd5\xe2"
	"strcmp\0\0"
	"\x18\x00\x00\x00\xad\xf9\x8a\x83"
	"kmalloc_caches\0\0"
	"\x20\x00\x00\x00\x7b\x6e\xe7\xa0"
	"__kmalloc_cache_noprof\0\0"
	"\x18\x00\x00\x00\x6b\x29\x44\x54"
	"module_layout\0\0\0"
	"\x00\x00\x00\x00\x00\x00\x00\x00";

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DAF0184476D9B057A463F18");
