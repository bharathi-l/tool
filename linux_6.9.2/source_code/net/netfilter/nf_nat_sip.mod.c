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
	{ 0xa93f2398, "nf_ct_seqadj_set" },
	{ 0x369387c9, "nf_nat_helper_unregister" },
	{ 0x9fe89a7c, "nf_ct_helper_expectfn_unregister" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x89d99ee1, "__nf_ct_ext_find" },
	{ 0x6be20a40, "ct_sip_parse_header_uri" },
	{ 0x34c4564, "nf_nat_setup_info" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xede85d7c, "nf_nat_exp_find_port" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xf3663533, "ct_sip_parse_address_param" },
	{ 0xdef5a181, "ct_sip_parse_request" },
	{ 0xa6bdbbfa, "ct_sip_parse_numerical_param" },
	{ 0xc9271504, "skb_ensure_writable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x183be24a, "nf_nat_sip_hooks" },
	{ 0x701c63be, "nf_nat_helper_register" },
	{ 0x424d8e34, "nf_ct_helper_expectfn_register" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x5a75e125, "nf_nat_mangle_udp_packet" },
	{ 0x6e0bcad4, "__nf_nat_mangle_tcp_packet" },
	{ 0xd34b004a, "ct_sip_get_sdp_header" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x428f29ef, "ct_sip_get_header" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x641eb8, "nf_ct_expect_related_report" },
	{ 0x56cc812a, "nf_ct_unexpect_related" },
	{ 0xa15cbb7c, "nf_ct_helper_log" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nf_conntrack,nf_conntrack_sip,nf_nat");


MODULE_INFO(srcversion, "5EAD38E41C76ACC26C76F2B");
