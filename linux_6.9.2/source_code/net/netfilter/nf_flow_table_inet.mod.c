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
	{ 0x7d99fbf, "nf_flow_rule_route_ipv6" },
	{ 0x105d5a7c, "nf_flow_rule_route_ipv4" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x65b994be, "nft_unregister_flowtable_type" },
	{ 0xa3eef134, "nf_flow_offload_ipv6_hook" },
	{ 0x10c39865, "nf_flow_offload_ip_hook" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0x6c2eafbc, "nf_flow_table_init" },
	{ 0x8cb280ee, "nf_flow_table_offload_setup" },
	{ 0x28a90676, "nf_flow_table_free" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x55430ba4, "nft_register_flowtable_type" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nf_flow_table,nf_tables");


MODULE_INFO(srcversion, "F73FBCC4188805CFCA46328");
