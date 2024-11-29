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
	{ 0x56470118, "__warn_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x30b3ea69, "nf_sk_lookup_slow_v6" },
	{ 0x93bf5463, "sock_gen_put" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xb7d44b00, "nf_sk_lookup_slow_v4" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe25b8c15, "xt_register_matches" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x84e75a83, "nf_defrag_ipv4_disable" },
	{ 0xc5e2fa93, "nf_defrag_ipv6_disable" },
	{ 0xd4363de3, "xt_unregister_matches" },
	{ 0x88711deb, "nf_defrag_ipv4_enable" },
	{ 0x26460072, "nf_defrag_ipv6_enable" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nf_socket_ipv6,nf_socket_ipv4,x_tables,nf_defrag_ipv4,nf_defrag_ipv6");


MODULE_INFO(srcversion, "793BA602317FFA00176D5E4");
