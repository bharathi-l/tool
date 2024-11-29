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
	{ 0xb12c8f07, "xfrm_input" },
	{ 0xe246278b, "skb_push" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x5f9102a1, "xfrm_register_type" },
	{ 0x90ad10da, "xfrm4_tunnel_register" },
	{ 0x122c3a7e, "_printk" },
	{ 0x78c3c54, "xfrm4_tunnel_deregister" },
	{ 0x547b7709, "xfrm_unregister_type" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "tunnel4");


MODULE_INFO(srcversion, "91724CE11C02690E3FC1F61");
