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

KSYMTAB_FUNC(ip_set_type_register, "_gpl", "");
KSYMTAB_FUNC(ip_set_type_unregister, "_gpl", "");
KSYMTAB_FUNC(ip_set_alloc, "_gpl", "");
KSYMTAB_FUNC(ip_set_free, "_gpl", "");
KSYMTAB_FUNC(ip_set_get_ipaddr4, "_gpl", "");
KSYMTAB_FUNC(ip_set_get_ipaddr6, "_gpl", "");
KSYMTAB_FUNC(ip_set_init_comment, "_gpl", "");
KSYMTAB_DATA(ip_set_extensions, "_gpl", "");
KSYMTAB_FUNC(ip_set_elem_len, "_gpl", "");
KSYMTAB_FUNC(ip_set_get_extensions, "_gpl", "");
KSYMTAB_FUNC(ip_set_put_extensions, "_gpl", "");
KSYMTAB_FUNC(ip_set_match_extensions, "_gpl", "");
KSYMTAB_FUNC(ip_set_test, "_gpl", "");
KSYMTAB_FUNC(ip_set_add, "_gpl", "");
KSYMTAB_FUNC(ip_set_del, "_gpl", "");
KSYMTAB_FUNC(ip_set_get_byname, "_gpl", "");
KSYMTAB_FUNC(ip_set_put_byindex, "_gpl", "");
KSYMTAB_FUNC(ip_set_name_byindex, "_gpl", "");
KSYMTAB_FUNC(ip_set_nfnl_get_byindex, "_gpl", "");
KSYMTAB_FUNC(ip_set_nfnl_put, "_gpl", "");
KSYMTAB_FUNC(ip_set_put_flags, "_gpl", "");
KSYMTAB_FUNC(ip_set_get_ip4_port, "_gpl", "");
KSYMTAB_FUNC(ip_set_get_ip6_port, "_gpl", "");
KSYMTAB_DATA(ip_set_netmask_map, "_gpl", "");
KSYMTAB_DATA(ip_set_hostmask_map, "_gpl", "");
KSYMTAB_FUNC(ip_set_range_to_cidr, "_gpl", "");

SYMBOL_CRC(ip_set_type_register, 0x91662c5f, "_gpl");
SYMBOL_CRC(ip_set_type_unregister, 0xd78994af, "_gpl");
SYMBOL_CRC(ip_set_alloc, 0xf3b4d4ae, "_gpl");
SYMBOL_CRC(ip_set_free, 0x397f6231, "_gpl");
SYMBOL_CRC(ip_set_get_ipaddr4, 0xa293f8a6, "_gpl");
SYMBOL_CRC(ip_set_get_ipaddr6, 0x9e98722b, "_gpl");
SYMBOL_CRC(ip_set_init_comment, 0x24852a11, "_gpl");
SYMBOL_CRC(ip_set_extensions, 0xbf5dd39f, "_gpl");
SYMBOL_CRC(ip_set_elem_len, 0x8f48926b, "_gpl");
SYMBOL_CRC(ip_set_get_extensions, 0x8e81f6b1, "_gpl");
SYMBOL_CRC(ip_set_put_extensions, 0x618e36fd, "_gpl");
SYMBOL_CRC(ip_set_match_extensions, 0xfd37b06d, "_gpl");
SYMBOL_CRC(ip_set_test, 0x07751f9b, "_gpl");
SYMBOL_CRC(ip_set_add, 0x4acd6fba, "_gpl");
SYMBOL_CRC(ip_set_del, 0x2dbafa6d, "_gpl");
SYMBOL_CRC(ip_set_get_byname, 0xcf2bc875, "_gpl");
SYMBOL_CRC(ip_set_put_byindex, 0x240ddc75, "_gpl");
SYMBOL_CRC(ip_set_name_byindex, 0x084a0402, "_gpl");
SYMBOL_CRC(ip_set_nfnl_get_byindex, 0x0e79039f, "_gpl");
SYMBOL_CRC(ip_set_nfnl_put, 0x227f47ca, "_gpl");
SYMBOL_CRC(ip_set_put_flags, 0xa7488f76, "_gpl");
SYMBOL_CRC(ip_set_get_ip4_port, 0x39b8c358, "_gpl");
SYMBOL_CRC(ip_set_get_ip6_port, 0x3a26d870, "_gpl");
SYMBOL_CRC(ip_set_netmask_map, 0x81fff2d1, "_gpl");
SYMBOL_CRC(ip_set_hostmask_map, 0x7924b6de, "_gpl");
SYMBOL_CRC(ip_set_range_to_cidr, 0x22d966c6, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5de24966, "__netlink_dump_start" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x18f58619, "try_module_get" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0xac7da2f2, "__nlmsg_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe8cc0195, "nf_register_sockopt" },
	{ 0xb7f54816, "nla_put_64bit" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x21c04549, "nfnetlink_subsys_register" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0xc0943440, "netlink_ack" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xaf4f0d7f, "nf_unregister_sockopt" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x398231f4, "ipv6_skip_exthdr" },
	{ 0xa916b694, "strnlen" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xd47a039c, "module_put" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x144dfedb, "nfnetlink_unicast" },
	{ 0x5a921311, "strncmp" },
	{ 0xd5a43273, "nla_put" },
	{ 0x863b8d86, "ns_capable" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x3c8dabba, "nfnetlink_subsys_unregister" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x999e8297, "vfree" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x754d539c, "strlen" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x47d0e073, "param_ops_int" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "FAB118FB71418B83DD8F074");
