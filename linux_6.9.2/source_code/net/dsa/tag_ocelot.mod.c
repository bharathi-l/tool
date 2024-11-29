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
	{ 0xe246278b, "skb_push" },
	{ 0xc084677a, "skb_pull" },
	{ 0x59a2f0ee, "packing" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xc55e717d, "__skb_vlan_pop" },
	{ 0x75c8414a, "skb_pull_rcsum" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xd783d861, "br_vlan_enabled" },
	{ 0x7705472, "br_vlan_get_proto" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xd63c670, "br_vlan_get_pvid_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xb0e602eb, "memmove" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x86a2dbfd, "dsa_tag_drivers_register" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xce0b0456, "dsa_tag_drivers_unregister" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "bridge,dsa_core");


MODULE_INFO(srcversion, "2ED88F17594DF9956C538E6");
