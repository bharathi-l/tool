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
	{ 0x87e2553b, "ieee802154_max_payload" },
	{ 0xe2bbfa56, "proc_dointvec_jiffies" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x9a25806b, "consume_skb" },
	{ 0x4a04c76c, "dev_add_pack" },
	{ 0x41cfab19, "inet_frag_queue_insert" },
	{ 0xb9834acb, "inet_frags_init" },
	{ 0xa0fe0b4e, "lowpan_register_netdevice" },
	{ 0x39ec7d18, "rtnl_link_register" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x1fb84d51, "ieee802154_hdr_peek_addrs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0xa57596bf, "lowpan_unregister_netdevice" },
	{ 0x6178095e, "dev_addr_mod" },
	{ 0xb3012895, "register_net_sysctl_sz" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x9b79856c, "inet_frag_destroy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8d22c0a4, "inet_frag_reasm_finish" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0xabb08c3a, "skb_copy_expand" },
	{ 0xadd56cf8, "fqdir_init" },
	{ 0x191d31af, "lowpan_header_decompress" },
	{ 0xd8dc1a8d, "rtnl_link_unregister" },
	{ 0xece43bce, "init_net" },
	{ 0xc084677a, "skb_pull" },
	{ 0x7070c9a2, "nd_tbl" },
	{ 0xe675d21a, "dev_remove_pack" },
	{ 0xc0cb301e, "dev_get_by_index" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x6c555fe4, "ieee802154_hdr_peek" },
	{ 0xf06f8224, "inet_frags_fini" },
	{ 0x9092defd, "proc_doulongvec_minmax" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0x5cf52384, "netif_rx" },
	{ 0x1497a64f, "inet_frag_reasm_prepare" },
	{ 0x46289a8a, "inet_frag_find" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xd9d960f8, "fqdir_exit" },
	{ 0x8e7a30bb, "__dev_queue_xmit" },
	{ 0x385e8aec, "neigh_destroy" },
	{ 0x65441f22, "init_user_ns" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xd4085cf1, "lowpan_header_compress" },
	{ 0x2db5a302, "skb_copy" },
	{ 0xf1de5c0a, "skb_clone" },
	{ 0x986d6241, "dst_release" },
	{ 0xb805d2b3, "unregister_net_sysctl_table" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x5a286038, "inet_frag_kill" },
	{ 0x62f336d9, "neigh_lookup" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "ieee802154,6lowpan");


MODULE_INFO(srcversion, "1617409BCA1F510248E0CEE");
