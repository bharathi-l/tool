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
	{ 0xb6f5a1f2, "devm_kmalloc" },
	{ 0x9a25806b, "consume_skb" },
	{ 0x25f674bf, "qrtr_endpoint_unregister" },
	{ 0x52176b9e, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x56567557, "_dev_err" },
	{ 0x760996ec, "__register_rpmsg_driver" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x5a93456a, "unregister_rpmsg_driver" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0x87921a1a, "qrtr_endpoint_post" },
	{ 0x9e48e724, "qrtr_endpoint_register" },
	{ 0xe3d83e4e, "rpmsg_send" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "qrtr,rpmsg_core");


MODULE_INFO(srcversion, "432F06F745D77C448D56504");
