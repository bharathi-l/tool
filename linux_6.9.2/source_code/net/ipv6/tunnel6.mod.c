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

KSYMTAB_FUNC(xfrm6_tunnel_register, "", "");
KSYMTAB_FUNC(xfrm6_tunnel_deregister, "", "");

SYMBOL_CRC(xfrm6_tunnel_register, 0x69670d46, "");
SYMBOL_CRC(xfrm6_tunnel_deregister, 0xc35e0b3f, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x689adae1, "xfrm_input_register_afinfo" },
	{ 0x122c3a7e, "_printk" },
	{ 0x3126ab0d, "inet6_del_protocol" },
	{ 0x17feaa56, "icmp6_send" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0x3058a5af, "xfrm_input_unregister_afinfo" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xf9f9ed2, "inet6_add_protocol" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D027A2C38B5AC200F6707DF");
