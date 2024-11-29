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

KSYMTAB_DATA(llc_sap_list, "", "");
KSYMTAB_FUNC(llc_sap_find, "", "");
KSYMTAB_FUNC(llc_sap_open, "", "");
KSYMTAB_FUNC(llc_sap_close, "", "");
KSYMTAB_FUNC(llc_add_pack, "", "");
KSYMTAB_FUNC(llc_remove_pack, "", "");
KSYMTAB_FUNC(llc_set_station_handler, "", "");
KSYMTAB_FUNC(llc_mac_hdr_init, "", "");
KSYMTAB_FUNC(llc_build_and_send_ui_pkt, "", "");

SYMBOL_CRC(llc_sap_list, 0x52d7b2fd, "");
SYMBOL_CRC(llc_sap_find, 0x197f49c1, "");
SYMBOL_CRC(llc_sap_open, 0x0113ea25, "");
SYMBOL_CRC(llc_sap_close, 0xab667667, "");
SYMBOL_CRC(llc_add_pack, 0xa021e647, "");
SYMBOL_CRC(llc_remove_pack, 0x38b92846, "");
SYMBOL_CRC(llc_set_station_handler, 0x3f43d8d5, "");
SYMBOL_CRC(llc_mac_hdr_init, 0x0bc74b7d, "");
SYMBOL_CRC(llc_build_and_send_ui_pkt, 0xdbf09180, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9a25806b, "consume_skb" },
	{ 0x4a04c76c, "dev_add_pack" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xc084677a, "skb_pull" },
	{ 0xe675d21a, "dev_remove_pack" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xe246278b, "skb_push" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0x8e7a30bb, "__dev_queue_xmit" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0xf1de5c0a, "skb_clone" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0xe5688684, "pskb_trim_rcsum_slow" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CFAD4658AB09157DB4AD1EF");
