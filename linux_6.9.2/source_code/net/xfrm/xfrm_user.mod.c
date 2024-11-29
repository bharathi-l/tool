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

KSYMTAB_DATA(xfrm_msg_min, "_gpl", "");
KSYMTAB_DATA(xfrma_policy, "_gpl", "");

SYMBOL_CRC(xfrm_msg_min, 0x4a0c7516, "_gpl");
SYMBOL_CRC(xfrma_policy, 0x205adfce, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9166fada, "strncpy" },
	{ 0xb7f54816, "nla_put_64bit" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0xac7da2f2, "__nlmsg_put" },
	{ 0x8911bab3, "netlink_unicast" },
	{ 0x896f042, "xfrm_sad_getinfo" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0xab14156f, "xfrm_spd_getinfo" },
	{ 0x4a637e59, "xfrm_state_alloc" },
	{ 0x49ca83, "xfrm_aead_get_byname" },
	{ 0x754d539c, "strlen" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd6f50cf7, "xfrm_ealg_get_byname" },
	{ 0xaab23340, "xfrm_calg_get_byname" },
	{ 0xa7b1cf7a, "__xfrm_init_state" },
	{ 0x27866435, "security_xfrm_state_alloc" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6a83f01d, "__xfrm_state_destroy" },
	{ 0x64a64109, "xfrm_init_replay" },
	{ 0x8f361dc8, "xfrm_dev_state_add" },
	{ 0x509d126f, "xfrm_state_update" },
	{ 0xa1cef67a, "xfrm_audit_state_add" },
	{ 0xb95eb023, "xfrm_state_add" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x49cbcd9f, "xfrm_state_lookup" },
	{ 0xe77f0fc5, "xfrm_state_lookup_byaddr" },
	{ 0xc599a772, "security_xfrm_state_delete" },
	{ 0x79380683, "xfrm_state_delete" },
	{ 0x425dd356, "xfrm_audit_state_delete" },
	{ 0x2357245f, "netlink_broadcast_filtered" },
	{ 0xb01bebf9, "xfrm_get_acqseq" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xd364b53f, "km_state_expired" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xba523752, "__xfrm_state_delete" },
	{ 0xab6eb911, "__fib6_flush_trees" },
	{ 0x37e497e8, "verify_spi_info" },
	{ 0x7d4345ec, "xfrm_find_acq_byseq" },
	{ 0x3e8df1f9, "xfrm_find_acq" },
	{ 0xada4e1e8, "xfrm_alloc_spi" },
	{ 0xc65304b3, "security_xfrm_policy_alloc" },
	{ 0x1c9ce5ab, "xfrm_policy_bysel_ctx" },
	{ 0xa9c63b69, "security_xfrm_policy_free" },
	{ 0x7555bfa9, "km_policy_expired" },
	{ 0x1248b826, "xfrm_policy_byid" },
	{ 0x344685a0, "xfrm_policy_destroy" },
	{ 0x51d9ff16, "xfrm_policy_delete" },
	{ 0x989c59bb, "xfrm_audit_policy_delete" },
	{ 0x9009b162, "xfrm_dev_policy_add" },
	{ 0x71b79b9e, "xfrm_policy_insert" },
	{ 0x307e96d9, "xfrm_audit_policy_add" },
	{ 0xd126742a, "km_query" },
	{ 0xdfde057a, "xfrm_state_free" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x122c3a7e, "_printk" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0x62d93db4, "xfrm_register_km" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x75bf1b49, "netlink_has_listeners" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xca9e776c, "nla_reserve" },
	{ 0xba45ad9d, "netlink_kernel_release" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x1169908d, "netlink_rcv_skb" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x8aeef16f, "xfrm_policy_hash_rebuild" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xe40d0e55, "xfrm_state_flush" },
	{ 0xa249967c, "km_state_notify" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xac276017, "xfrm_policy_walk_done" },
	{ 0x788843c6, "xfrm_policy_walk" },
	{ 0xc9df055a, "xfrm_policy_walk_init" },
	{ 0xa1dc51e, "xfrm_state_walk_done" },
	{ 0x3f6aa608, "__netlink_kernel_create" },
	{ 0x5f46210e, "xfrm_unregister_km" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x69acdf38, "memcpy" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xd5a43273, "nla_put" },
	{ 0xfa6cb112, "netlink_net_capable" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x9d375ab, "xfrm_get_translator" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x507e50ab, "xfrm_put_translator" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x5de24966, "__netlink_dump_start" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x37a0cba, "kfree" },
	{ 0x2782b393, "xfrm_state_walk_init" },
	{ 0x8888fa8, "xfrm_state_walk" },
	{ 0x87b87850, "xfrm_policy_alloc" },
	{ 0x55a7235c, "xfrm_policy_flush" },
	{ 0xcbbbde5f, "km_policy_notify" },
	{ 0x127d83ea, "security_locked_down" },
	{ 0xa916b694, "strnlen" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xfb578fc5, "memset" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "xfrm_algo");


MODULE_INFO(srcversion, "BD5A622D7D3C5C6C3584CFF");
