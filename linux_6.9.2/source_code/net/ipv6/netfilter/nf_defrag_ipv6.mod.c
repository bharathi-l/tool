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

KSYMTAB_FUNC(nf_defrag_ipv6_enable, "_gpl", "");
KSYMTAB_FUNC(nf_defrag_ipv6_disable, "_gpl", "");
KSYMTAB_FUNC(nf_ct_frag6_gather, "_gpl", "");

SYMBOL_CRC(nf_defrag_ipv6_enable, 0x26460072, "_gpl");
SYMBOL_CRC(nf_defrag_ipv6_disable, 0xc5e2fa93, "_gpl");
SYMBOL_CRC(nf_ct_frag6_gather, 0x46d615f1, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x17feaa56, "icmp6_send" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0xe2bbfa56, "proc_dointvec_jiffies" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xb0e602eb, "memmove" },
	{ 0x41cfab19, "inet_frag_queue_insert" },
	{ 0xb9834acb, "inet_frags_init" },
	{ 0x3dac6764, "inet_frag_pull_head" },
	{ 0x37a0cba, "kfree" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0xb3012895, "register_net_sysctl_sz" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x9b79856c, "inet_frag_destroy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x398231f4, "ipv6_skip_exthdr" },
	{ 0x8d22c0a4, "inet_frag_reasm_finish" },
	{ 0x17d89efe, "nf_register_net_hooks" },
	{ 0xadd56cf8, "fqdir_init" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xece43bce, "init_net" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x7990f761, "dev_get_by_index_rcu" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf06f8224, "inet_frags_fini" },
	{ 0x9092defd, "proc_doulongvec_minmax" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0xf4f62fa0, "nf_unregister_net_hooks" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xb1d8daea, "nf_defrag_v6_hook" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0x1497a64f, "inet_frag_reasm_prepare" },
	{ 0x46289a8a, "inet_frag_find" },
	{ 0xd9d960f8, "fqdir_exit" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x986d6241, "dst_release" },
	{ 0xa8f6c843, "ip_frag_ecn_table" },
	{ 0xb805d2b3, "unregister_net_sysctl_table" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xe5688684, "pskb_trim_rcsum_slow" },
	{ 0x5a286038, "inet_frag_kill" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EE3AAD3CB0BAD11B9DE172A");
