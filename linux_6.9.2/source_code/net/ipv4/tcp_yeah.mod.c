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
	{ 0xeb779894, "tcp_unregister_congestion_control" },
	{ 0xbb9f9b24, "tcp_slow_start" },
	{ 0x283ebfbd, "tcp_cong_avoid_ai" },
	{ 0x172dc426, "tcp_vegas_state" },
	{ 0xdfdbee33, "tcp_vegas_cwnd_event" },
	{ 0x95a73a83, "tcp_vegas_pkts_acked" },
	{ 0x7683af2a, "tcp_reno_undo_cwnd" },
	{ 0x49203891, "tcp_vegas_get_info" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xac1953f2, "tcp_register_congestion_control" },
	{ 0xc5d4ac51, "tcp_vegas_init" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "tcp_vegas");


MODULE_INFO(srcversion, "A06597A527E8787788CF2BA");
