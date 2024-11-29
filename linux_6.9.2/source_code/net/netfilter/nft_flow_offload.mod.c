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
	{ 0x754d539c, "strlen" },
	{ 0xd5a43273, "nla_put" },
	{ 0x689caee1, "dev_fill_forward_path" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x385e8aec, "neigh_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xed5113af, "nf_route" },
	{ 0x33338211, "rcuref_get_slowpath" },
	{ 0x986d6241, "dst_release" },
	{ 0xbbb5e6df, "flow_offload_alloc" },
	{ 0x9510ae27, "flow_offload_route_init" },
	{ 0xef8e14bc, "flow_offload_add" },
	{ 0xbc05220e, "flow_offload_free" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x6e984c22, "nft_register_expr" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa3b6d95, "nft_chain_validate_hooks" },
	{ 0x3ac4525b, "nf_ct_netns_put" },
	{ 0x6330052f, "nf_tables_deactivate_flowtable" },
	{ 0x1b9c5972, "nft_flowtable_lookup" },
	{ 0x3733777f, "nf_ct_netns_get" },
	{ 0x29bc8962, "nf_flow_table_cleanup" },
	{ 0x94d0fab8, "nft_unregister_expr" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nf_flow_table,nf_tables,nf_conntrack");


MODULE_INFO(srcversion, "3DC4A38B7D79CD94FF6AC84");
