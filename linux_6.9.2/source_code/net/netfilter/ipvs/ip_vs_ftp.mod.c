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
	{ 0x96b29254, "strncasecmp" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0x609bcd98, "in6_pton" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9cbe49e5, "ip_vs_conn_out_get" },
	{ 0xa916b694, "strnlen" },
	{ 0xd59d5b37, "ip_vs_tcp_conn_listen" },
	{ 0xd06611fd, "ip_vs_conn_put" },
	{ 0x6e0bcad4, "__nf_nat_mangle_tcp_packet" },
	{ 0x367983c, "ip_vs_nfct_expect_related" },
	{ 0x4e7ebb26, "ip_vs_conn_new" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xc9271504, "skb_ensure_writable" },
	{ 0x7e0635b1, "ip_vs_conn_in_get" },
	{ 0xaa473cb8, "param_array_ops" },
	{ 0x2f42db77, "param_ops_ushort" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0xfaf57845, "unregister_ip_vs_app" },
	{ 0xe183ce99, "register_ip_vs_app" },
	{ 0x460b928b, "register_ip_vs_app_inc" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "ip_vs,nf_nat");


MODULE_INFO(srcversion, "0B98051CC9C2F3939C11A2F");
