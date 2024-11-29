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
	{ 0x547b7709, "xfrm_unregister_type" },
	{ 0x649555a7, "xfrm6_protocol_deregister" },
	{ 0xca3693b4, "ipcomp_init_state" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xf6d59cb3, "xfrm6_tunnel_spi_lookup" },
	{ 0x49cbcd9f, "xfrm_state_lookup" },
	{ 0x4a637e59, "xfrm_state_alloc" },
	{ 0x3d90385a, "xfrm6_tunnel_alloc_spi" },
	{ 0xc5e2994, "xfrm_init_state" },
	{ 0x970a3929, "xfrm_state_insert" },
	{ 0x6a83f01d, "__xfrm_state_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x1da035f6, "make_kuid" },
	{ 0x6fae2ed8, "ip6_update_pmtu" },
	{ 0x1d205469, "ip6_redirect" },
	{ 0x52ed276d, "xfrm6_rcv" },
	{ 0xb12c8f07, "xfrm_input" },
	{ 0x40d73481, "ipcomp_destroy" },
	{ 0x63e26e89, "ipcomp_input" },
	{ 0x7d05f032, "ipcomp_output" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x5f9102a1, "xfrm_register_type" },
	{ 0x95877199, "xfrm6_protocol_register" },
	{ 0x122c3a7e, "_printk" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "xfrm_ipcomp,xfrm6_tunnel");


MODULE_INFO(srcversion, "DC50A4327DE123D1872B099");
