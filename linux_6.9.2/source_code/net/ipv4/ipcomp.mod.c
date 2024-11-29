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
	{ 0xad24d405, "xfrm4_protocol_deregister" },
	{ 0xca3693b4, "ipcomp_init_state" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x49cbcd9f, "xfrm_state_lookup" },
	{ 0x6a83f01d, "__xfrm_state_destroy" },
	{ 0x4a637e59, "xfrm_state_alloc" },
	{ 0xc5e2994, "xfrm_init_state" },
	{ 0x970a3929, "xfrm_state_insert" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x7d21ecf2, "ipv4_redirect" },
	{ 0xb5e7370, "ipv4_update_pmtu" },
	{ 0x9743ea94, "xfrm4_rcv" },
	{ 0xb12c8f07, "xfrm_input" },
	{ 0x40d73481, "ipcomp_destroy" },
	{ 0x63e26e89, "ipcomp_input" },
	{ 0x7d05f032, "ipcomp_output" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x5f9102a1, "xfrm_register_type" },
	{ 0x96cd7ea4, "xfrm4_protocol_register" },
	{ 0x122c3a7e, "_printk" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "xfrm_ipcomp");


MODULE_INFO(srcversion, "06D5E3DCEC23794056480B1");
