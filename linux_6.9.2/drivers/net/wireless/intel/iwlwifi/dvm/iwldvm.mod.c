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

#ifdef CONFIG_MITIGATION_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5c9ee63b, "iwl_read_eeprom" },
	{ 0xb67d2e72, "ieee80211_stop_tx_ba_session" },
	{ 0xb0fb7159, "device_set_wakeup_enable" },
	{ 0x1cf75d45, "ieee80211_get_tkip_p1k_iv" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf1dd0f69, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x50dffc92, "ieee80211_report_wowlan_wakeup" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x25801464, "ieee80211_chswitch_done" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x5988395c, "iwl_notification_wait_init" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x54a7f923, "iwl_parse_eeprom_data" },
	{ 0x9a25806b, "consume_skb" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xd9cdd658, "__tracepoint_iwlwifi_dev_ucode_cont_event" },
	{ 0x444d706f, "debugfs_create_symlink" },
	{ 0x8918c4a7, "ieee80211_free_hw" },
	{ 0xe75b7e77, "iwl_notification_wait" },
	{ 0x96848186, "scnprintf" },
	{ 0x78d4b9b7, "ieee80211_get_tkip_p2k" },
	{ 0xaa23bf22, "ieee80211_start_tx_ba_session" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x56c90b96, "led_classdev_unregister" },
	{ 0x19ddbf04, "ieee80211_register_hw" },
	{ 0xd92ac356, "ieee80211_emulate_change_chanctx" },
	{ 0x4e1cc2d5, "__ieee80211_create_tpt_led_trigger" },
	{ 0x3dbea829, "ieee80211_restart_hw" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xd8b3f95e, "ieee80211_rate_control_unregister" },
	{ 0x46ccce64, "__ieee80211_get_radio_led_name" },
	{ 0x5c52e109, "iwl_opmode_deregister" },
	{ 0xe2964344, "__wake_up" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x6593bf47, "ieee80211_wake_queue" },
	{ 0x1332e4de, "iwl_abort_notification_waits" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa2066eb8, "pskb_expand_head" },
	{ 0x2d1ea419, "ieee80211_tx_status_skb" },
	{ 0x3963c569, "__iwl_warn" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x74055f1e, "ieee80211_find_sta" },
	{ 0xbd6280f7, "ieee80211_iter_keys" },
	{ 0x89849d8c, "ieee80211_handle_wake_tx_queue" },
	{ 0x122c3a7e, "_printk" },
	{ 0xaeb9a917, "ieee80211_get_key_rx_seq" },
	{ 0xc318508b, "__SCK__tp_func_iwlwifi_dev_ucode_event" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x336dc14b, "__iwl_info" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0x1d892fa0, "__tracepoint_iwlwifi_dev_ucode_event" },
	{ 0x3cfdd46f, "kmem_cache_alloc" },
	{ 0x828c6838, "iwlwifi_mod_params" },
	{ 0x7c732380, "ieee80211_enable_rssi_reports" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x478a28d7, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0x38688d65, "__SCT__tp_func_iwlwifi_dev_ucode_wrap_event" },
	{ 0xd81e2f28, "__SCT__tp_func_iwlwifi_dev_ucode_event" },
	{ 0x4f0ee123, "ieee80211_ave_rssi" },
	{ 0x35cad296, "simple_open" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x4a98d08a, "ieee80211_sta_block_awake" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x1fcc15e, "iwl_get_cmd_string" },
	{ 0x4ebf36a1, "kmem_cache_free" },
	{ 0x5a9a0f02, "iwl_write32" },
	{ 0x4e41aa62, "__tracepoint_iwlwifi_dev_ucode_wrap_event" },
	{ 0x10edc7c6, "ieee80211_wake_queues" },
	{ 0x5b757b98, "iwl_write_direct32" },
	{ 0x759218d1, "ieee80211_rate_control_register" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0x888e78cb, "ieee80211_free_txskb" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x364e7129, "led_classdev_register_ext" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x81bb2772, "ieee80211_alloc_hw_nm" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xe0eb5838, "iwl_init_notification_wait" },
	{ 0x525951f6, "default_llseek" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xbfea42d1, "__SCK__tp_func_iwlwifi_dev_ucode_cont_event" },
	{ 0x28663eeb, "__SCK__tp_func_iwlwifi_dev_ucode_wrap_event" },
	{ 0xfb578fc5, "memset" },
	{ 0xaa7bfd3a, "ieee80211_emulate_add_chanctx" },
	{ 0x1a41bea2, "__iwl_dbg" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x42aef1e5, "ieee80211_emulate_switch_vif_chanctx" },
	{ 0xd4f99373, "ieee80211_stop_queue" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x902c0607, "ieee80211_stop_queues" },
	{ 0x9a60b14, "iwl_trans_send_cmd" },
	{ 0x391eda45, "ieee80211_get_tkip_rx_p1k" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xda57179b, "wiphy_rfkill_set_hw_state_reason" },
	{ 0xbafc8994, "iwl_wait_notification" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xa940cb6c, "debugfs_create_file" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xc26d6995, "ieee80211_scan_completed" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa3f425cf, "param_ops_bool" },
	{ 0x3488fca2, "ieee80211_unregister_hw" },
	{ 0x39ec11f1, "ieee80211_resume_disconnect" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd1e5c49d, "iwl_opmode_register" },
	{ 0x61a9087c, "ieee80211_beacon_get_tim" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x3a2a40a5, "__SCT__tp_func_iwlwifi_dev_ucode_cont_event" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0x11d4d038, "iwl_set_bits_mask_prph" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x74f978f1, "iwl_read32" },
	{ 0x9c67d88c, "ieee80211_request_smps" },
	{ 0x65f1a0a6, "iwl_cmd_groups_verify_sorted" },
	{ 0xab931585, "skb_add_rx_frag_netmem" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xf88964e4, "iwl_remove_notification" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0xbf968baa, "debugfs_create_u8" },
	{ 0xfe67de01, "debugfs_create_dir" },
	{ 0x1ffd0cab, "generic_file_llseek" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x5fb45228, "ieee80211_emulate_remove_chanctx" },
	{ 0x352e0c7c, "ieee80211_disable_rssi_reports" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0xbc6d2e80, "__iwl_err" },
	{ 0xa9ed06af, "ieee80211_rx_napi" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "iwlwifi,mac80211,cfg80211");


MODULE_INFO(srcversion, "8DE89BB134DC7E04DA0B5E5");
