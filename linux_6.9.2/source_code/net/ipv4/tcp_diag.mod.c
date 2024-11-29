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
	{ 0xdcda70ed, "inet_diag_dump_one_icsk" },
	{ 0x7b0e70d0, "inet_diag_dump_icsk" },
	{ 0xb3621de2, "inet_diag_unregister" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd5a43273, "nla_put" },
	{ 0xa916b694, "strnlen" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0xca9e776c, "nla_reserve" },
	{ 0xfb578fc5, "memset" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x35afd476, "inet_diag_register" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xbfa71085, "inet_diag_find_one_icsk" },
	{ 0x739b582f, "sock_diag_destroy" },
	{ 0x93bf5463, "sock_gen_put" },
	{ 0x22aeb808, "tcp_get_info" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "inet_diag");


MODULE_INFO(srcversion, "CE341561122078DB55CB484");
