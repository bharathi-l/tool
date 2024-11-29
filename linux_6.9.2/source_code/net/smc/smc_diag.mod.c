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
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6b511dd3, "sock_diag_unregister" },
	{ 0xac7da2f2, "__nlmsg_put" },
	{ 0xa42bc645, "sock_diag_save_cookie" },
	{ 0xd5a43273, "nla_put" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x4914275a, "sock_i_uid" },
	{ 0x2788847d, "from_kuid_munged" },
	{ 0xa2a427b5, "sock_i_ino" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x91f85a4e, "smc_proto" },
	{ 0x6401ee5f, "smc_proto6" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2e30b7c3, "sock_diag_register" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x5de24966, "__netlink_dump_start" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "smc");


MODULE_INFO(srcversion, "5FA6EB630FB238E5172638E");
