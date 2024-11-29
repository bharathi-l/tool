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
	{ 0xad6a145c, "tcp_reno_cong_avoid" },
	{ 0xff1dd72e, "tcp_reno_ssthresh" },
	{ 0x7683af2a, "tcp_reno_undo_cwnd" },
	{ 0xd786c3ef, "param_ops_uint" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x96a5b065, "tcp_plb_update_state" },
	{ 0x24d7722b, "tcp_plb_check_rehash" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc52bb534, "__tcp_send_ack" },
	{ 0x3174c0a5, "tcp_plb_update_state_upon_rto" },
	{ 0x673d61d6, "register_btf_kfunc_id_set" },
	{ 0xac1953f2, "tcp_register_congestion_control" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2F1812455600A0E8A1FA918");
