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
	{ 0x71558e28, "nf_ct_nat_ext_add" },
	{ 0x5fa587e5, "nf_ct_expect_find_get" },
	{ 0x56cc812a, "nf_ct_unexpect_related" },
	{ 0x286b5af5, "nf_ct_expect_put" },
	{ 0x34c4564, "nf_nat_setup_info" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x89d99ee1, "__nf_ct_ext_find" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6e0bcad4, "__nf_nat_mangle_tcp_packet" },
	{ 0xf2a36612, "pptp_msg_name" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd211730, "nf_nat_pptp_hook" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nf_nat,nf_conntrack,nf_conntrack_pptp");


MODULE_INFO(srcversion, "C7C38083A615C69B600042D");
