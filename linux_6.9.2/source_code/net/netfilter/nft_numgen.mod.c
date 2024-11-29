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
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x94d0fab8, "nft_unregister_expr" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x6e984c22, "nft_register_expr" },
	{ 0xfdf0a921, "nft_reg_track_cancel" },
	{ 0x89d28d24, "nft_dump_register" },
	{ 0xd5a43273, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb818ba4d, "nft_parse_register_store" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0x37a0cba, "kfree" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "0C61A4E994F26E5CBD30910");
