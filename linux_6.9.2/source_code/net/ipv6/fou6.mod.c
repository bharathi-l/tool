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
	{ 0x1783724b, "udp6_set_csum" },
	{ 0x40089451, "__gue_build_header" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc2b7a689, "__fou_build_header" },
	{ 0xbe6eafa6, "inet6_protos" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0xf13914b3, "gue_encap_hlen" },
	{ 0x1757d1a4, "fou_encap_hlen" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x38e34747, "ip6_tnl_encap_add_ops" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x122c3a7e, "_printk" },
	{ 0xbdf3d395, "ip6_tnl_encap_del_ops" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "fou,ip6_tunnel");


MODULE_INFO(srcversion, "4B51D0FA5058C78E6E0CB78");
