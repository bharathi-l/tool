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

KSYMTAB_FUNC(lowpan_register_netdevice, "", "");
KSYMTAB_FUNC(lowpan_register_netdev, "", "");
KSYMTAB_FUNC(lowpan_unregister_netdevice, "", "");
KSYMTAB_FUNC(lowpan_unregister_netdev, "", "");
KSYMTAB_FUNC(lowpan_header_decompress, "_gpl", "");
KSYMTAB_FUNC(lowpan_header_compress, "_gpl", "");
KSYMTAB_FUNC(lowpan_nhc_add, "", "");
KSYMTAB_FUNC(lowpan_nhc_del, "", "");

SYMBOL_CRC(lowpan_register_netdevice, 0xa0fe0b4e, "");
SYMBOL_CRC(lowpan_register_netdev, 0x27174251, "");
SYMBOL_CRC(lowpan_unregister_netdevice, 0xa57596bf, "");
SYMBOL_CRC(lowpan_unregister_netdev, 0xf259c092, "");
SYMBOL_CRC(lowpan_header_decompress, 0x191d31af, "_gpl");
SYMBOL_CRC(lowpan_header_compress, 0xd4085cf1, "_gpl");
SYMBOL_CRC(lowpan_nhc_add, 0x1419020f, "");
SYMBOL_CRC(lowpan_nhc_del, 0xa79ba954, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x59554bf0, "__ndisc_fill_addr_option" },
	{ 0xa5adb9a8, "addrconf_add_linklocal" },
	{ 0x69acdf38, "memcpy" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x923a5d0e, "addrconf_prefix_rcv_add_addr" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x1eff3830, "netdev_warn" },
	{ 0x38485abd, "unregister_netdevice_queue" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa2066eb8, "pskb_expand_head" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xc084677a, "skb_pull" },
	{ 0xe246278b, "skb_push" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x3c0dbc1e, "register_netdevice" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E3D654E690C2B306743252A");
