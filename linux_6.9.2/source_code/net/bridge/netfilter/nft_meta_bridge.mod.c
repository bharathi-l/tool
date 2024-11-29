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
	{ 0x94d0fab8, "nft_unregister_expr" },
	{ 0xc214f247, "nft_meta_set_init" },
	{ 0xe2b8cc13, "nft_parse_register_load" },
	{ 0x4c1d5a54, "nft_meta_set_validate" },
	{ 0xa3b6d95, "nft_chain_validate_hooks" },
	{ 0x68678cd8, "netdev_master_upper_dev_get_rcu" },
	{ 0xd783d861, "br_vlan_enabled" },
	{ 0x7705472, "br_vlan_get_proto" },
	{ 0x9166fada, "strncpy" },
	{ 0x607cde01, "nft_meta_get_eval" },
	{ 0xd63c670, "br_vlan_get_pvid_rcu" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1023ab31, "nft_meta_set_destroy" },
	{ 0x82f0a832, "nft_meta_set_dump" },
	{ 0x4829c1c, "nft_meta_get_dump" },
	{ 0x4a68807f, "nft_meta_get_reduce" },
	{ 0xe2c74001, "nft_meta_policy" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6e984c22, "nft_register_expr" },
	{ 0x263596a, "__nft_reg_track_cancel" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xd1f80e06, "nft_meta_set_eval" },
	{ 0xb818ba4d, "nft_parse_register_store" },
	{ 0x65bc6733, "nft_meta_get_init" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,bridge");


MODULE_INFO(srcversion, "0600677113B8E64C8CDB6D4");
