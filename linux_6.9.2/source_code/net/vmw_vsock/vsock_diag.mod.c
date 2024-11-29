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
	{ 0x5de24966, "__netlink_dump_start" },
	{ 0xac7da2f2, "__nlmsg_put" },
	{ 0xc92f7f50, "vsock_table_lock" },
	{ 0xa42bc645, "sock_diag_save_cookie" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x284e07d8, "vsock_bind_table" },
	{ 0x9bb6fd09, "vsock_connected_table" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x2e30b7c3, "sock_diag_register" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xa2a427b5, "sock_i_ino" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x6b511dd3, "sock_diag_unregister" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "vsock");


MODULE_INFO(srcversion, "41E40921A1583D32FBE32CD");
