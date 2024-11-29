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

KSYMTAB_FUNC(ieee802154_alloc_hw, "", "");
KSYMTAB_FUNC(ieee802154_configure_durations, "", "");
KSYMTAB_FUNC(ieee802154_free_hw, "", "");
KSYMTAB_FUNC(ieee802154_register_hw, "", "");
KSYMTAB_FUNC(ieee802154_unregister_hw, "", "");
KSYMTAB_FUNC(ieee802154_rx_irqsafe, "", "");
KSYMTAB_FUNC(ieee802154_xmit_complete, "", "");
KSYMTAB_FUNC(ieee802154_xmit_error, "", "");
KSYMTAB_FUNC(ieee802154_xmit_hw_error, "", "");

SYMBOL_CRC(ieee802154_alloc_hw, 0xe0298fe2, "");
SYMBOL_CRC(ieee802154_configure_durations, 0xbe88865d, "");
SYMBOL_CRC(ieee802154_free_hw, 0x1555f88f, "");
SYMBOL_CRC(ieee802154_register_hw, 0x813b7282, "");
SYMBOL_CRC(ieee802154_unregister_hw, 0x4a2ef4f5, "");
SYMBOL_CRC(ieee802154_rx_irqsafe, 0xde803868, "");
SYMBOL_CRC(ieee802154_xmit_complete, 0x935a9baa, "");
SYMBOL_CRC(ieee802154_xmit_error, 0x96294bea, "");
SYMBOL_CRC(ieee802154_xmit_hw_error, 0xe84bf293, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5c7569ec, "crypto_skcipher_encrypt" },
	{ 0x87e2553b, "ieee802154_max_payload" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x6048275b, "bpf_trace_run4" },
	{ 0xe2e0066a, "nl802154_beaconing_done" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x9a25806b, "consume_skb" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4c63d9dd, "trace_raw_output_prep" },
	{ 0xb5f5c77e, "skb_dequeue" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x2b8ff6d1, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xb3e272c9, "trace_event_printf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x48879f20, "hrtimer_init" },
	{ 0x2eb7090, "dev_alloc_name" },
	{ 0x8959d336, "trace_event_raw_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x1c90e4f8, "ieee802154_mac_cmd_push" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x43babd19, "sg_init_one" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x666d1046, "crypto_alloc_aead" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0xcf7b3b54, "bpf_trace_run2" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1eff3830, "netdev_warn" },
	{ 0xe2384317, "crypto_aead_setauthsize" },
	{ 0xc4fe251, "crypto_aead_decrypt" },
	{ 0xe2964344, "__wake_up" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x5f4dab15, "crypto_skcipher_setkey" },
	{ 0x38485abd, "unregister_netdevice_queue" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x52176b9e, "__dynamic_dev_dbg" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x1fb84d51, "ieee802154_hdr_peek_addrs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x115186d6, "wpan_phy_unregister" },
	{ 0xcc7c3ecf, "trace_event_buffer_commit" },
	{ 0x6178095e, "dev_addr_mod" },
	{ 0x14fc6972, "crypto_destroy_tfm" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x6373ea58, "alloc_netdev_mqs" },
	{ 0x2885df8d, "nl802154_scan_done" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x9b0cdaa, "nl802154_scan_started" },
	{ 0x6905d5f8, "crypto_skcipher_decrypt" },
	{ 0xa916b694, "strnlen" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0xabb08c3a, "skb_copy_expand" },
	{ 0xd6a7d5b2, "skb_queue_tail" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x44aeae89, "crypto_aead_setkey" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0xabcc6fb8, "perf_trace_run_bpf_submit" },
	{ 0xdb55ffd7, "cfg802154_get_free_short_addr" },
	{ 0x56567557, "_dev_err" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xb018ee90, "wpan_phy_register" },
	{ 0x2967c136, "cfg802154_set_max_associations" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xe94ef447, "crypto_aead_encrypt" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe246278b, "skb_push" },
	{ 0x6c555fe4, "ieee802154_hdr_peek" },
	{ 0x3fc2da34, "wpan_phy_free" },
	{ 0xd17e721e, "netif_receive_skb" },
	{ 0xa66f7ccc, "trace_event_reg" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x589e0a2c, "free_netdev" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x66c4f5f8, "bpf_trace_run1" },
	{ 0x3356a89f, "netif_tx_wake_queue" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xfb578fc5, "memset" },
	{ 0x5f821ccf, "_dev_warn" },
	{ 0xd955afa6, "hrtimer_start_range_ns" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x38297715, "ieee802154_hdr_pull" },
	{ 0xfc264038, "nl802154_scan_event" },
	{ 0x21adc399, "crypto_alloc_sync_skcipher" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x4f4cb259, "__dynamic_netdev_dbg" },
	{ 0xfaf0475b, "bpf_trace_run3" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x2bc629e5, "trace_event_buffer_reserve" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x726bc3c7, "wait_for_completion_killable_timeout" },
	{ 0x2cd76709, "ieee802154_beacon_push" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x1b5dadbd, "ieee802154_mac_cmd_pl_pull" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x140f3f30, "wpan_phy_new" },
	{ 0xf1de5c0a, "skb_clone" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x4a666d56, "hrtimer_cancel" },
	{ 0xb648bbcb, "ieee802154_hdr_push" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x2eebc68d, "dev_kfree_skb_any_reason" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0xb0e53584, "cfg802154_device_is_parent" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0xc387ba7d, "cfg802154_device_is_child" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x3c0dbc1e, "register_netdevice" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "ieee802154");


MODULE_INFO(srcversion, "E99967E610813472B6AABC1");
