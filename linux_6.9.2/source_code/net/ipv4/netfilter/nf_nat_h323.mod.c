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
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0xede85d7c, "nf_nat_exp_find_port" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x56cc812a, "nf_ct_unexpect_related" },
	{ 0xbe4ae61, "get_h225_addr" },
	{ 0x641eb8, "nf_ct_expect_related_report" },
	{ 0x89d99ee1, "__nf_ct_ext_find" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd41744ed, "nfct_h323_nat_hook" },
	{ 0x424d8e34, "nf_ct_helper_expectfn_register" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x34c4564, "nf_nat_setup_info" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xd438edd3, "nf_nat_follow_master" },
	{ 0x9fe89a7c, "nf_ct_helper_expectfn_unregister" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x5a75e125, "nf_nat_mangle_udp_packet" },
	{ 0x6e0bcad4, "__nf_nat_mangle_tcp_packet" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nf_nat,nf_conntrack,nf_conntrack_h323");


MODULE_INFO(srcversion, "2C80BC4FE86CACD13998963");
