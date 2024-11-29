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
	{ 0x37a0cba, "kfree" },
	{ 0xe79039f, "ip_set_nfnl_get_byindex" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xceb56e72, "tcf_em_unregister" },
	{ 0xc084677a, "skb_pull" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7751f9b, "ip_set_test" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xe246278b, "skb_push" },
	{ 0x7990f761, "dev_get_by_index_rcu" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe9607757, "tcf_em_register" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x227f47ca, "ip_set_nfnl_put" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "ip_set");


MODULE_INFO(srcversion, "2FFEEF47248D946AED3F588");
