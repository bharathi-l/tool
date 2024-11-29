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
	{ 0x122c3a7e, "_printk" },
	{ 0x88711deb, "nf_defrag_ipv4_enable" },
	{ 0x32779b9, "ipv6_find_hdr" },
	{ 0xe7af40e9, "nf_tproxy_get_sock_v6" },
	{ 0x8ab5daad, "nf_tproxy_laddr6" },
	{ 0x93bf5463, "sock_gen_put" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe4c6bf89, "sock_edemux" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0xe02982fd, "nf_tproxy_handle_time_wait6" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x926783a1, "nf_tproxy_get_sock_v4" },
	{ 0x1cf7f0ac, "nf_tproxy_laddr4" },
	{ 0xa26f90d9, "nf_tproxy_handle_time_wait4" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x17449d4d, "xt_register_targets" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc5e2fa93, "nf_defrag_ipv6_disable" },
	{ 0x84e75a83, "nf_defrag_ipv4_disable" },
	{ 0x43aca7d5, "xt_unregister_targets" },
	{ 0x26460072, "nf_defrag_ipv6_enable" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nf_defrag_ipv4,nf_tproxy_ipv6,nf_tproxy_ipv4,x_tables,nf_defrag_ipv6");


MODULE_INFO(srcversion, "FD5D485DD82D12D0953AF2F");
