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
	{ 0x44465aeb, "dev_set_mtu" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0xfba7a5f5, "__get_random_u32_below" },
	{ 0x9e844b48, "ipv6_mc_check_mld" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x9a25806b, "consume_skb" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xb0e602eb, "memmove" },
	{ 0x1f0bd9d4, "param_get_string" },
	{ 0x4a04c76c, "dev_add_pack" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x818139aa, "br_multicast_has_querier_adjacent" },
	{ 0xb7f54816, "nla_put_64bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x39ec7d18, "rtnl_link_register" },
	{ 0xc760ce2d, "genlmsg_put" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2895c3ea, "dev_get_iflink" },
	{ 0x37a0cba, "kfree" },
	{ 0xa20764c1, "eth_validate_addr" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe2964344, "__wake_up" },
	{ 0x38485abd, "unregister_netdevice_queue" },
	{ 0x3754fb97, "kmem_cache_create" },
	{ 0x75c8414a, "skb_pull_rcsum" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x50b2b15, "__pskb_copy_fclone" },
	{ 0x89f8df2b, "ether_setup" },
	{ 0x2357245f, "netlink_broadcast_filtered" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3019446, "param_set_copystring" },
	{ 0xa2066eb8, "pskb_expand_head" },
	{ 0x9262e632, "wake_up_process" },
	{ 0x6178095e, "dev_addr_mod" },
	{ 0x28cca31b, "eth_type_trans" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xa916b694, "strnlen" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0x3cfdd46f, "kmem_cache_alloc" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xa00f77de, "kobject_uevent_env" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe7f87e08, "__dev_get_by_index" },
	{ 0xd8dc1a8d, "rtnl_link_unregister" },
	{ 0xc084677a, "skb_pull" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0x8911bab3, "netlink_unicast" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xe675d21a, "dev_remove_pack" },
	{ 0xc0cb301e, "dev_get_by_index" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe246278b, "skb_push" },
	{ 0x4ebf36a1, "kmem_cache_free" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x414ecb99, "netdev_upper_dev_unlink" },
	{ 0xbd6841d4, "crc16" },
	{ 0xd5a43273, "nla_put" },
	{ 0xcd279169, "nla_find" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x612d5af6, "skb_prepare_seq_read" },
	{ 0x12807459, "ethtool_op_get_link" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x10a27429, "arp_create" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xfb578fc5, "memset" },
	{ 0x89145eb6, "br_multicast_has_querier_anywhere" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0x5cf52384, "netif_rx" },
	{ 0x49786071, "ip_mc_check_igmp" },
	{ 0xdece0e7e, "__netdev_alloc_skb" },
	{ 0xe56644ad, "netdev_master_upper_dev_link" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4b27709a, "kthread_create_on_node" },
	{ 0x84317a71, "br_multicast_list_adjacent" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb15b4109, "crc32c" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x8e7a30bb, "__dev_queue_xmit" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x68678cd8, "netdev_master_upper_dev_get_rcu" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x29332499, "__x86_indirect_thunk_rsi" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2db5a302, "skb_copy" },
	{ 0xaad116f2, "br_multicast_has_router_adjacent" },
	{ 0xf1de5c0a, "skb_clone" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0xc01b7698, "genl_unregister_family" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x754d539c, "strlen" },
	{ 0x2eebc68d, "dev_kfree_skb_any_reason" },
	{ 0x4aff832f, "skb_split" },
	{ 0xf20b36c9, "genl_register_family" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xe5688684, "pskb_trim_rcsum_slow" },
	{ 0x274e96e2, "skb_seq_read" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x9858f364, "get_random_u8" },
	{ 0x560cd29a, "kmem_cache_destroy" },
	{ 0x3c0dbc1e, "register_netdevice" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "bridge,libcrc32c");


MODULE_INFO(srcversion, "8D77910F39A674FED6DF87E");
