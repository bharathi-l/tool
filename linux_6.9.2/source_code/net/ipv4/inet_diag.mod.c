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

KSYMTAB_FUNC(inet_diag_msg_common_fill, "_gpl", "");
KSYMTAB_FUNC(inet_diag_msg_attrs_fill, "_gpl", "");
KSYMTAB_FUNC(inet_sk_diag_fill, "_gpl", "");
KSYMTAB_FUNC(inet_diag_find_one_icsk, "_gpl", "");
KSYMTAB_FUNC(inet_diag_dump_one_icsk, "_gpl", "");
KSYMTAB_FUNC(inet_diag_bc_sk, "_gpl", "");
KSYMTAB_FUNC(inet_diag_dump_icsk, "_gpl", "");
KSYMTAB_FUNC(inet_diag_register, "_gpl", "");
KSYMTAB_FUNC(inet_diag_unregister, "_gpl", "");

SYMBOL_CRC(inet_diag_msg_common_fill, 0xaa031790, "_gpl");
SYMBOL_CRC(inet_diag_msg_attrs_fill, 0x7cb5d045, "_gpl");
SYMBOL_CRC(inet_sk_diag_fill, 0xe58503b8, "_gpl");
SYMBOL_CRC(inet_diag_find_one_icsk, 0xbfa71085, "_gpl");
SYMBOL_CRC(inet_diag_dump_one_icsk, 0xdcda70ed, "_gpl");
SYMBOL_CRC(inet_diag_bc_sk, 0x0b12e3ff, "_gpl");
SYMBOL_CRC(inet_diag_dump_icsk, 0x7b0e70d0, "_gpl");
SYMBOL_CRC(inet_diag_register, 0x35afd476, "_gpl");
SYMBOL_CRC(inet_diag_unregister, 0xb3621de2, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa2066eb8, "pskb_expand_head" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xd47a039c, "module_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x5de24966, "__netlink_dump_start" },
	{ 0x6b511dd3, "sock_diag_unregister" },
	{ 0x557e12f5, "sock_diag_unregister_inet_compat" },
	{ 0xd5a43273, "nla_put" },
	{ 0xb7f54816, "nla_put_64bit" },
	{ 0x4914275a, "sock_i_uid" },
	{ 0x2788847d, "from_kuid_munged" },
	{ 0xa2a427b5, "sock_i_ino" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x2e30b7c3, "sock_diag_register" },
	{ 0xbf3255d, "sock_diag_register_inet_compat" },
	{ 0xfa6cb112, "netlink_net_capable" },
	{ 0x5d8476d3, "bpf_sk_storage_diag_alloc" },
	{ 0xb69aae30, "inet6_lookup" },
	{ 0xb0f48303, "sock_diag_check_cookie" },
	{ 0x6403cd97, "__inet_lookup_established" },
	{ 0x93bf5463, "sock_gen_put" },
	{ 0x89e3193b, "__inet_lookup_listener" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xac7da2f2, "__nlmsg_put" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x3a979708, "bpf_sk_storage_diag_put" },
	{ 0x26dcd9b1, "sock_diag_put_meminfo" },
	{ 0xa916b694, "strnlen" },
	{ 0x6350d90a, "nla_reserve_64bit" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0x8911bab3, "netlink_unicast" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x36c091de, "sk_free" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xa42bc645, "sock_diag_save_cookie" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x8e4eb451, "bpf_sk_storage_diag_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x18f58619, "try_module_get" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf665f74f, "sock_load_diag_module" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D7A4414B4EC3C899CC9C9D7");
