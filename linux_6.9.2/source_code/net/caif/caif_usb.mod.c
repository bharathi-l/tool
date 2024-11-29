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
	{ 0x329dbd06, "cfpkt_info" },
	{ 0x3fa84493, "cfpkt_add_head" },
	{ 0x122c3a7e, "_printk" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x40babbe0, "cfpkt_extr_head" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xe675d21a, "dev_remove_pack" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xdc2b2807, "__module_get" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6349c798, "caif_enroll_dev" },
	{ 0xa916b694, "strnlen" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x4a04c76c, "dev_add_pack" },
	{ 0xd47a039c, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x4a237e57, "cfpkt_tonative" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "caif");


MODULE_INFO(srcversion, "A698B9E867A0B62427EC31E");
