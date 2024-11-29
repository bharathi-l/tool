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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_MITIGATION_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

KSYMTAB_FUNC(nf_tproxy_handle_time_wait4, "_gpl", "");
KSYMTAB_FUNC(nf_tproxy_laddr4, "_gpl", "");
KSYMTAB_FUNC(nf_tproxy_get_sock_v4, "_gpl", "");

SYMBOL_CRC(nf_tproxy_handle_time_wait4, 0xa26f90d9, "_gpl");
SYMBOL_CRC(nf_tproxy_laddr4, 0x1cf7f0ac, "_gpl");
SYMBOL_CRC(nf_tproxy_get_sock_v4, 0x926783a1, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x6403cd97, "__inet_lookup_established" },
	{ 0x5d9a229a, "udp4_lib_lookup" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x89e3193b, "__inet_lookup_listener" },
	{ 0x36c091de, "sk_free" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x253f1c1c, "inet_twsk_deschedule_put" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xefd4db5a, "inet_twsk_put" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5E66A76241BAC598D0FF1F6");
