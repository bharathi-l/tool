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

KSYMTAB_FUNC(wpan_phy_find, "", "");
KSYMTAB_FUNC(wpan_phy_for_each, "", "");
KSYMTAB_FUNC(wpan_phy_new, "", "");
KSYMTAB_FUNC(wpan_phy_register, "", "");
KSYMTAB_FUNC(wpan_phy_unregister, "", "");
KSYMTAB_FUNC(wpan_phy_free, "", "");
KSYMTAB_FUNC(ieee802154_hdr_push, "_gpl", "");
KSYMTAB_FUNC(ieee802154_mac_cmd_push, "_gpl", "");
KSYMTAB_FUNC(ieee802154_beacon_push, "_gpl", "");
KSYMTAB_FUNC(ieee802154_hdr_pull, "_gpl", "");
KSYMTAB_FUNC(ieee802154_mac_cmd_pl_pull, "_gpl", "");
KSYMTAB_FUNC(ieee802154_hdr_peek_addrs, "_gpl", "");
KSYMTAB_FUNC(ieee802154_hdr_peek, "_gpl", "");
KSYMTAB_FUNC(ieee802154_max_payload, "_gpl", "");
KSYMTAB_FUNC(nl802154_scan_event, "_gpl", "");
KSYMTAB_FUNC(nl802154_scan_started, "_gpl", "");
KSYMTAB_FUNC(nl802154_scan_done, "_gpl", "");
KSYMTAB_FUNC(nl802154_beaconing_done, "_gpl", "");
KSYMTAB_FUNC(cfg802154_device_is_parent, "_gpl", "");
KSYMTAB_FUNC(cfg802154_device_is_child, "_gpl", "");
KSYMTAB_FUNC(cfg802154_get_free_short_addr, "_gpl", "");
KSYMTAB_FUNC(cfg802154_set_max_associations, "_gpl", "");

SYMBOL_CRC(wpan_phy_find, 0x6fc02d4c, "");
SYMBOL_CRC(wpan_phy_for_each, 0x420b3e83, "");
SYMBOL_CRC(wpan_phy_new, 0x140f3f30, "");
SYMBOL_CRC(wpan_phy_register, 0xb018ee90, "");
SYMBOL_CRC(wpan_phy_unregister, 0x115186d6, "");
SYMBOL_CRC(wpan_phy_free, 0x3fc2da34, "");
SYMBOL_CRC(ieee802154_hdr_push, 0xb648bbcb, "_gpl");
SYMBOL_CRC(ieee802154_mac_cmd_push, 0x1c90e4f8, "_gpl");
SYMBOL_CRC(ieee802154_beacon_push, 0x2cd76709, "_gpl");
SYMBOL_CRC(ieee802154_hdr_pull, 0x38297715, "_gpl");
SYMBOL_CRC(ieee802154_mac_cmd_pl_pull, 0x1b5dadbd, "_gpl");
SYMBOL_CRC(ieee802154_hdr_peek_addrs, 0x1fb84d51, "_gpl");
SYMBOL_CRC(ieee802154_hdr_peek, 0x6c555fe4, "_gpl");
SYMBOL_CRC(ieee802154_max_payload, 0x87e2553b, "_gpl");
SYMBOL_CRC(nl802154_scan_event, 0xfc264038, "_gpl");
SYMBOL_CRC(nl802154_scan_started, 0x09b0cdaa, "_gpl");
SYMBOL_CRC(nl802154_scan_done, 0x2885df8d, "_gpl");
SYMBOL_CRC(nl802154_beaconing_done, 0xe2e0066a, "_gpl");
SYMBOL_CRC(cfg802154_device_is_parent, 0xb0e53584, "_gpl");
SYMBOL_CRC(cfg802154_device_is_child, 0xc387ba7d, "_gpl");
SYMBOL_CRC(cfg802154_get_free_short_addr, 0xdb55ffd7, "_gpl");
SYMBOL_CRC(cfg802154_set_max_associations, 0x2967c136, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x6048275b, "bpf_trace_run4" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xea4da57c, "dev_set_name" },
	{ 0x829fcfc0, "trace_output_call" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4c63d9dd, "trace_raw_output_prep" },
	{ 0xb7f54816, "nla_put_64bit" },
	{ 0x2b8ff6d1, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xb3e272c9, "trace_event_printf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x7d10618c, "device_initialize" },
	{ 0xc760ce2d, "genlmsg_put" },
	{ 0x8959d336, "trace_event_raw_init" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0xcf7b3b54, "bpf_trace_run2" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x1e1356e9, "get_device" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x2357245f, "netlink_broadcast_filtered" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdf7048ca, "device_rename" },
	{ 0xcc7c3ecf, "trace_event_buffer_commit" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x56fa3780, "put_device" },
	{ 0xa916b694, "strnlen" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x87a11e6f, "class_for_each_device" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0xe7f87e08, "__dev_get_by_index" },
	{ 0xabcc6fb8, "perf_trace_run_bpf_submit" },
	{ 0xece43bce, "init_net" },
	{ 0xc084677a, "skb_pull" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xcc44e65b, "device_add" },
	{ 0x8911bab3, "netlink_unicast" },
	{ 0xc0cb301e, "dev_get_by_index" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe246278b, "skb_push" },
	{ 0xd5a43273, "nla_put" },
	{ 0xa66f7ccc, "trace_event_reg" },
	{ 0x325e698, "class_unregister" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xeba8170b, "unregister_pernet_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x66c4f5f8, "bpf_trace_run1" },
	{ 0x7acfab09, "device_del" },
	{ 0x302a1be0, "dev_set_mac_address" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xfaf0475b, "bpf_trace_run3" },
	{ 0xa8b21c85, "__put_net" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9dc3e5ef, "get_net_ns_by_pid" },
	{ 0x2bc629e5, "trace_event_buffer_reserve" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x29332499, "__x86_indirect_thunk_rsi" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0xd04894d9, "device_match_name" },
	{ 0x3efb7f15, "dev_get_by_name" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xc01b7698, "genl_unregister_family" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x754d539c, "strlen" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0xf20b36c9, "genl_register_family" },
	{ 0xaee82678, "__dev_change_net_namespace" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0xa802aea8, "register_pernet_device" },
	{ 0xf91aa7b6, "get_net_ns_by_fd" },
	{ 0x1e980173, "class_register" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x1bc3d710, "class_find_device" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8DF84FDC1F671F572405A77");
