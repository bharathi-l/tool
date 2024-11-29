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
	{ 0x1d24c881, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xc9271504, "skb_ensure_writable" },
	{ 0x67377444, "inet_proto_csum_replace4" },
	{ 0xa2066eb8, "pskb_expand_head" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0xb0e602eb, "memmove" },
	{ 0xed5113af, "nf_route" },
	{ 0x6e068e63, "ip6_mtu" },
	{ 0x986d6241, "dst_release" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x9c6690db, "ipv4_mtu" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x398231f4, "ipv6_skip_exthdr" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x17449d4d, "xt_register_targets" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x43aca7d5, "xt_unregister_targets" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "50681C6649058C7B3410F5A");
