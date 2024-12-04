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

KSYMTAB_FUNC(ieee80211_emulate_add_chanctx, "", "");
KSYMTAB_FUNC(ieee80211_emulate_remove_chanctx, "", "");
KSYMTAB_FUNC(ieee80211_emulate_change_chanctx, "", "");
KSYMTAB_FUNC(ieee80211_emulate_switch_vif_chanctx, "", "");
KSYMTAB_FUNC(ieee80211_restart_hw, "", "");
KSYMTAB_FUNC(ieee80211_alloc_hw_nm, "", "");
KSYMTAB_FUNC(ieee80211_register_hw, "", "");
KSYMTAB_FUNC(ieee80211_unregister_hw, "", "");
KSYMTAB_FUNC(ieee80211_free_hw, "", "");
KSYMTAB_FUNC(ieee80211_tx_status_irqsafe, "", "");
KSYMTAB_FUNC(ieee80211_tx_status_skb, "", "");
KSYMTAB_FUNC(ieee80211_tx_status_ext, "", "");
KSYMTAB_FUNC(ieee80211_tx_rate_update, "", "");
KSYMTAB_FUNC(ieee80211_report_low_ack, "", "");
KSYMTAB_FUNC(ieee80211_free_txskb, "", "");
KSYMTAB_FUNC(ieee80211_find_sta_by_link_addrs, "_gpl", "");
KSYMTAB_FUNC(ieee80211_find_sta_by_ifaddr, "_gpl", "");
KSYMTAB_FUNC(ieee80211_find_sta, "", "");
KSYMTAB_FUNC(ieee80211_sta_block_awake, "", "");
KSYMTAB_FUNC(ieee80211_sta_eosp, "", "");
KSYMTAB_FUNC(ieee80211_send_eosp_nullfunc, "", "");
KSYMTAB_FUNC(ieee80211_sta_set_buffered, "", "");
KSYMTAB_FUNC(ieee80211_sta_register_airtime, "", "");
KSYMTAB_FUNC(ieee80211_sta_recalc_aggregates, "", "");
KSYMTAB_FUNC(ieee80211_scan_completed, "", "");
KSYMTAB_FUNC(ieee80211_sched_scan_results, "", "");
KSYMTAB_FUNC(ieee80211_sched_scan_stopped, "", "");
KSYMTAB_FUNC(ieee80211_ready_on_channel, "_gpl", "");
KSYMTAB_FUNC(ieee80211_remain_on_channel_expired, "_gpl", "");
KSYMTAB_FUNC(ieee80211_request_smps, "_gpl", "");
KSYMTAB_FUNC(ieee80211_send_bar, "", "");
KSYMTAB_FUNC(ieee80211_refresh_tx_agg_session_timer, "", "");
KSYMTAB_FUNC(ieee80211_start_tx_ba_session, "", "");
KSYMTAB_FUNC(ieee80211_start_tx_ba_cb_irqsafe, "", "");
KSYMTAB_FUNC(ieee80211_stop_tx_ba_session, "", "");
KSYMTAB_FUNC(ieee80211_stop_tx_ba_cb_irqsafe, "", "");
KSYMTAB_FUNC(ieee80211_stop_rx_ba_session, "", "");
KSYMTAB_FUNC(ieee80211_manage_rx_ba_offl, "", "");
KSYMTAB_FUNC(ieee80211_rx_ba_timer_expired, "", "");
KSYMTAB_FUNC(ieee80211_update_mu_groups, "_gpl", "");
KSYMTAB_FUNC(ieee80211_set_active_links, "_gpl", "");
KSYMTAB_FUNC(ieee80211_set_active_links_async, "_gpl", "");
KSYMTAB_FUNC(ieee80211_rate_control_register, "", "");
KSYMTAB_FUNC(ieee80211_rate_control_unregister, "", "");
KSYMTAB_FUNC(ieee80211_get_tx_rates, "", "");
KSYMTAB_FUNC(rate_control_set_rates, "", "");
KSYMTAB_FUNC(ieee80211_tkip_add_iv, "_gpl", "");
KSYMTAB_FUNC(ieee80211_get_tkip_p1k_iv, "", "");
KSYMTAB_FUNC(ieee80211_get_tkip_rx_p1k, "", "");
KSYMTAB_FUNC(ieee80211_get_tkip_p2k, "", "");
KSYMTAB_FUNC(ieee80211_csa_finish, "", "");
KSYMTAB_FUNC(ieee80211_channel_switch_disconnect, "", "");
KSYMTAB_FUNC(ieee80211_nan_func_terminated, "", "");
KSYMTAB_FUNC(ieee80211_nan_func_match, "", "");
KSYMTAB_FUNC(ieee80211_color_change_finish, "_gpl", "");
KSYMTAB_FUNC(ieee80211_obss_color_collision_notify, "_gpl", "");
KSYMTAB_FUNC(ieee80211_sta_ps_transition, "", "");
KSYMTAB_FUNC(ieee80211_sta_pspoll, "", "");
KSYMTAB_FUNC(ieee80211_sta_uapsd_trigger, "", "");
KSYMTAB_FUNC(ieee80211_mark_rx_ba_filtered_frames, "", "");
KSYMTAB_FUNC(ieee80211_rx_list, "", "");
KSYMTAB_FUNC(ieee80211_rx_napi, "", "");
KSYMTAB_FUNC(ieee80211_rx_irqsafe, "", "");
KSYMTAB_FUNC(ieee80211_tx_prepare_skb, "", "");
KSYMTAB_FUNC(ieee80211_tx_dequeue, "", "");
KSYMTAB_FUNC(ieee80211_next_txq, "", "");
KSYMTAB_FUNC(__ieee80211_schedule_txq, "", "");
KSYMTAB_FUNC(ieee80211_txq_airtime_check, "", "");
KSYMTAB_FUNC(ieee80211_txq_may_transmit, "", "");
KSYMTAB_FUNC(ieee80211_txq_schedule_start, "", "");
KSYMTAB_FUNC(ieee80211_beacon_update_cntdwn, "", "");
KSYMTAB_FUNC(ieee80211_beacon_set_cntdwn, "", "");
KSYMTAB_FUNC(ieee80211_beacon_cntdwn_is_complete, "", "");
KSYMTAB_FUNC(ieee80211_beacon_get_template, "", "");
KSYMTAB_FUNC(ieee80211_beacon_get_template_ema_index, "", "");
KSYMTAB_FUNC(ieee80211_beacon_free_ema_list, "", "");
KSYMTAB_FUNC(ieee80211_beacon_get_template_ema_list, "", "");
KSYMTAB_FUNC(ieee80211_beacon_get_tim, "", "");
KSYMTAB_FUNC(ieee80211_proberesp_get, "", "");
KSYMTAB_FUNC(ieee80211_get_fils_discovery_tmpl, "", "");
KSYMTAB_FUNC(ieee80211_get_unsol_bcast_probe_resp_tmpl, "", "");
KSYMTAB_FUNC(ieee80211_pspoll_get, "", "");
KSYMTAB_FUNC(ieee80211_nullfunc_get, "", "");
KSYMTAB_FUNC(ieee80211_probereq_get, "", "");
KSYMTAB_FUNC(ieee80211_rts_get, "", "");
KSYMTAB_FUNC(ieee80211_ctstoself_get, "", "");
KSYMTAB_FUNC(ieee80211_get_buffered_bc, "", "");
KSYMTAB_FUNC(ieee80211_reserve_tid, "", "");
KSYMTAB_FUNC(ieee80211_unreserve_tid, "", "");
KSYMTAB_FUNC(ieee80211_iter_keys, "", "");
KSYMTAB_FUNC(ieee80211_iter_keys_rcu, "", "");
KSYMTAB_FUNC(ieee80211_gtk_rekey_notify, "_gpl", "");
KSYMTAB_FUNC(ieee80211_get_key_rx_seq, "", "");
KSYMTAB_FUNC(ieee80211_set_key_rx_seq, "_gpl", "");
KSYMTAB_FUNC(ieee80211_remove_key, "_gpl", "");
KSYMTAB_FUNC(ieee80211_gtk_rekey_add, "_gpl", "");
KSYMTAB_FUNC(ieee80211_key_mic_failure, "_gpl", "");
KSYMTAB_FUNC(ieee80211_key_replay, "_gpl", "");
KSYMTAB_FUNC(wiphy_to_ieee80211_hw, "", "");
KSYMTAB_FUNC(ieee80211_get_bssid, "", "");
KSYMTAB_FUNC(ieee80211_generic_frame_duration, "", "");
KSYMTAB_FUNC(ieee80211_rts_duration, "", "");
KSYMTAB_FUNC(ieee80211_ctstoself_duration, "", "");
KSYMTAB_FUNC(ieee80211_handle_wake_tx_queue, "", "");
KSYMTAB_FUNC(ieee80211_wake_queue, "", "");
KSYMTAB_FUNC(ieee80211_stop_queue, "", "");
KSYMTAB_FUNC(ieee80211_stop_queues, "", "");
KSYMTAB_FUNC(ieee80211_queue_stopped, "", "");
KSYMTAB_FUNC(ieee80211_wake_queues, "", "");
KSYMTAB_FUNC(ieee80211_iterate_interfaces, "_gpl", "");
KSYMTAB_FUNC(ieee80211_iterate_active_interfaces_atomic, "_gpl", "");
KSYMTAB_FUNC(ieee80211_iterate_active_interfaces_mtx, "_gpl", "");
KSYMTAB_FUNC(ieee80211_iterate_stations_atomic, "_gpl", "");
KSYMTAB_FUNC(wdev_to_ieee80211_vif, "_gpl", "");
KSYMTAB_FUNC(ieee80211_vif_to_wdev, "_gpl", "");
KSYMTAB_FUNC(ieee80211_queue_work, "", "");
KSYMTAB_FUNC(ieee80211_queue_delayed_work, "", "");
KSYMTAB_FUNC(ieee80211_hw_restart_disconnect, "_gpl", "");
KSYMTAB_FUNC(ieee80211_resume_disconnect, "_gpl", "");
KSYMTAB_FUNC(ieee80211_ave_rssi, "_gpl", "");
KSYMTAB_FUNC(ieee80211_radar_detected, "", "");
KSYMTAB_FUNC(ieee80211_update_p2p_noa, "", "");
KSYMTAB_FUNC(ieee80211_parse_p2p_noa, "", "");
KSYMTAB_FUNC(ieee80211_txq_get_depth, "", "");
KSYMTAB_FUNC(ieee80211_iter_chan_contexts_atomic, "_gpl", "");
KSYMTAB_FUNC(ieee80211_chswitch_done, "", "");
KSYMTAB_FUNC(ieee80211_ap_probereq_get, "", "");
KSYMTAB_FUNC(ieee80211_beacon_loss, "", "");
KSYMTAB_FUNC(ieee80211_connection_loss, "", "");
KSYMTAB_FUNC(ieee80211_disconnect, "", "");
KSYMTAB_FUNC(ieee80211_cqm_rssi_notify, "", "");
KSYMTAB_FUNC(ieee80211_cqm_beacon_loss_notify, "", "");
KSYMTAB_FUNC(ieee80211_enable_rssi_reports, "", "");
KSYMTAB_FUNC(ieee80211_disable_rssi_reports, "", "");
KSYMTAB_FUNC(ieee80211_tdls_oper_request, "", "");
KSYMTAB_FUNC(ieee80211_calc_rx_airtime, "_gpl", "");
KSYMTAB_FUNC(ieee80211_calc_tx_airtime, "_gpl", "");
KSYMTAB_FUNC(__ieee80211_get_radio_led_name, "", "");
KSYMTAB_FUNC(__ieee80211_get_assoc_led_name, "", "");
KSYMTAB_FUNC(__ieee80211_get_tx_led_name, "", "");
KSYMTAB_FUNC(__ieee80211_get_rx_led_name, "", "");
KSYMTAB_FUNC(__ieee80211_create_tpt_led_trigger, "", "");
KSYMTAB_FUNC(ieee80211_report_wowlan_wakeup, "", "");

SYMBOL_CRC(ieee80211_emulate_add_chanctx, 0xaa7bfd3a, "");
SYMBOL_CRC(ieee80211_emulate_remove_chanctx, 0x5fb45228, "");
SYMBOL_CRC(ieee80211_emulate_change_chanctx, 0xd92ac356, "");
SYMBOL_CRC(ieee80211_emulate_switch_vif_chanctx, 0x42aef1e5, "");
SYMBOL_CRC(ieee80211_restart_hw, 0x3dbea829, "");
SYMBOL_CRC(ieee80211_alloc_hw_nm, 0x81bb2772, "");
SYMBOL_CRC(ieee80211_register_hw, 0x19ddbf04, "");
SYMBOL_CRC(ieee80211_unregister_hw, 0x3488fca2, "");
SYMBOL_CRC(ieee80211_free_hw, 0x8918c4a7, "");
SYMBOL_CRC(ieee80211_tx_status_irqsafe, 0xeaf49e99, "");
SYMBOL_CRC(ieee80211_tx_status_skb, 0x2d1ea419, "");
SYMBOL_CRC(ieee80211_tx_status_ext, 0xe30f4d27, "");
SYMBOL_CRC(ieee80211_tx_rate_update, 0x08b5a345, "");
SYMBOL_CRC(ieee80211_report_low_ack, 0xc45f6cdd, "");
SYMBOL_CRC(ieee80211_free_txskb, 0x888e78cb, "");
SYMBOL_CRC(ieee80211_find_sta_by_link_addrs, 0x8ba06004, "_gpl");
SYMBOL_CRC(ieee80211_find_sta_by_ifaddr, 0x11cd77e2, "_gpl");
SYMBOL_CRC(ieee80211_find_sta, 0x74055f1e, "");
SYMBOL_CRC(ieee80211_sta_block_awake, 0x4a98d08a, "");
SYMBOL_CRC(ieee80211_sta_eosp, 0xff23fb96, "");
SYMBOL_CRC(ieee80211_send_eosp_nullfunc, 0xfac038d3, "");
SYMBOL_CRC(ieee80211_sta_set_buffered, 0x3615c9e3, "");
SYMBOL_CRC(ieee80211_sta_register_airtime, 0x08778f02, "");
SYMBOL_CRC(ieee80211_sta_recalc_aggregates, 0x5e9b4b4f, "");
SYMBOL_CRC(ieee80211_scan_completed, 0xc26d6995, "");
SYMBOL_CRC(ieee80211_sched_scan_results, 0xf7920240, "");
SYMBOL_CRC(ieee80211_sched_scan_stopped, 0xc04d4b1a, "");
SYMBOL_CRC(ieee80211_ready_on_channel, 0x1bd7c4a1, "_gpl");
SYMBOL_CRC(ieee80211_remain_on_channel_expired, 0x424163ce, "_gpl");
SYMBOL_CRC(ieee80211_request_smps, 0x9c67d88c, "_gpl");
SYMBOL_CRC(ieee80211_send_bar, 0xff6d2835, "");
SYMBOL_CRC(ieee80211_refresh_tx_agg_session_timer, 0x97bdd657, "");
SYMBOL_CRC(ieee80211_start_tx_ba_session, 0xaa23bf22, "");
SYMBOL_CRC(ieee80211_start_tx_ba_cb_irqsafe, 0xf1dd0f69, "");
SYMBOL_CRC(ieee80211_stop_tx_ba_session, 0xb67d2e72, "");
SYMBOL_CRC(ieee80211_stop_tx_ba_cb_irqsafe, 0x478a28d7, "");
SYMBOL_CRC(ieee80211_stop_rx_ba_session, 0xad752c3b, "");
SYMBOL_CRC(ieee80211_manage_rx_ba_offl, 0x16661ec3, "");
SYMBOL_CRC(ieee80211_rx_ba_timer_expired, 0xb7e4e6f4, "");
SYMBOL_CRC(ieee80211_update_mu_groups, 0x1f9ff1a8, "_gpl");
SYMBOL_CRC(ieee80211_set_active_links, 0xfbbae664, "_gpl");
SYMBOL_CRC(ieee80211_set_active_links_async, 0x092b5233, "_gpl");
SYMBOL_CRC(ieee80211_rate_control_register, 0x759218d1, "");
SYMBOL_CRC(ieee80211_rate_control_unregister, 0xd8b3f95e, "");
SYMBOL_CRC(ieee80211_get_tx_rates, 0x00b3bc09, "");
SYMBOL_CRC(rate_control_set_rates, 0xaeff1bc1, "");
SYMBOL_CRC(ieee80211_tkip_add_iv, 0x16ad7c5f, "_gpl");
SYMBOL_CRC(ieee80211_get_tkip_p1k_iv, 0x1cf75d45, "");
SYMBOL_CRC(ieee80211_get_tkip_rx_p1k, 0x391eda45, "");
SYMBOL_CRC(ieee80211_get_tkip_p2k, 0x78d4b9b7, "");
SYMBOL_CRC(ieee80211_csa_finish, 0xb70564f7, "");
SYMBOL_CRC(ieee80211_channel_switch_disconnect, 0xc00c72ca, "");
SYMBOL_CRC(ieee80211_nan_func_terminated, 0xa98a695b, "");
SYMBOL_CRC(ieee80211_nan_func_match, 0x27484766, "");
SYMBOL_CRC(ieee80211_color_change_finish, 0xd95d43ee, "_gpl");
SYMBOL_CRC(ieee80211_obss_color_collision_notify, 0xfafd6105, "_gpl");
SYMBOL_CRC(ieee80211_sta_ps_transition, 0xecd45ecf, "");
SYMBOL_CRC(ieee80211_sta_pspoll, 0xc4dbf48c, "");
SYMBOL_CRC(ieee80211_sta_uapsd_trigger, 0x0a16d61e, "");
SYMBOL_CRC(ieee80211_mark_rx_ba_filtered_frames, 0x3756fbab, "");
SYMBOL_CRC(ieee80211_rx_list, 0xfb25c082, "");
SYMBOL_CRC(ieee80211_rx_napi, 0xa9ed06af, "");
SYMBOL_CRC(ieee80211_rx_irqsafe, 0xeb1b750e, "");
SYMBOL_CRC(ieee80211_tx_prepare_skb, 0x61ea0dd4, "");
SYMBOL_CRC(ieee80211_tx_dequeue, 0x5f1aa6f0, "");
SYMBOL_CRC(ieee80211_next_txq, 0x4d8f8bc0, "");
SYMBOL_CRC(__ieee80211_schedule_txq, 0xf649b920, "");
SYMBOL_CRC(ieee80211_txq_airtime_check, 0x41cf6dc2, "");
SYMBOL_CRC(ieee80211_txq_may_transmit, 0x2f864cf0, "");
SYMBOL_CRC(ieee80211_txq_schedule_start, 0xa1bf5e01, "");
SYMBOL_CRC(ieee80211_beacon_update_cntdwn, 0x5fb7240e, "");
SYMBOL_CRC(ieee80211_beacon_set_cntdwn, 0x1fdd9695, "");
SYMBOL_CRC(ieee80211_beacon_cntdwn_is_complete, 0xb0f64b8e, "");
SYMBOL_CRC(ieee80211_beacon_get_template, 0x014bb288, "");
SYMBOL_CRC(ieee80211_beacon_get_template_ema_index, 0xeb021fcd, "");
SYMBOL_CRC(ieee80211_beacon_free_ema_list, 0x3a356f51, "");
SYMBOL_CRC(ieee80211_beacon_get_template_ema_list, 0x32c7a89e, "");
SYMBOL_CRC(ieee80211_beacon_get_tim, 0x61a9087c, "");
SYMBOL_CRC(ieee80211_proberesp_get, 0xdf47c7e2, "");
SYMBOL_CRC(ieee80211_get_fils_discovery_tmpl, 0x693fbaab, "");
SYMBOL_CRC(ieee80211_get_unsol_bcast_probe_resp_tmpl, 0x3f5fa4a7, "");
SYMBOL_CRC(ieee80211_pspoll_get, 0x06546023, "");
SYMBOL_CRC(ieee80211_nullfunc_get, 0x6de3d062, "");
SYMBOL_CRC(ieee80211_probereq_get, 0x0359d7fe, "");
SYMBOL_CRC(ieee80211_rts_get, 0xd357ba53, "");
SYMBOL_CRC(ieee80211_ctstoself_get, 0x1f39056e, "");
SYMBOL_CRC(ieee80211_get_buffered_bc, 0x967817b8, "");
SYMBOL_CRC(ieee80211_reserve_tid, 0x5885750e, "");
SYMBOL_CRC(ieee80211_unreserve_tid, 0x6fe334ad, "");
SYMBOL_CRC(ieee80211_iter_keys, 0xbd6280f7, "");
SYMBOL_CRC(ieee80211_iter_keys_rcu, 0xc111300b, "");
SYMBOL_CRC(ieee80211_gtk_rekey_notify, 0x724e3201, "_gpl");
SYMBOL_CRC(ieee80211_get_key_rx_seq, 0xaeb9a917, "");
SYMBOL_CRC(ieee80211_set_key_rx_seq, 0x1dab0efe, "_gpl");
SYMBOL_CRC(ieee80211_remove_key, 0xea792270, "_gpl");
SYMBOL_CRC(ieee80211_gtk_rekey_add, 0x6333ad1c, "_gpl");
SYMBOL_CRC(ieee80211_key_mic_failure, 0xd004ea88, "_gpl");
SYMBOL_CRC(ieee80211_key_replay, 0x9e1c1431, "_gpl");
SYMBOL_CRC(wiphy_to_ieee80211_hw, 0xfdf326ce, "");
SYMBOL_CRC(ieee80211_get_bssid, 0x95febea6, "");
SYMBOL_CRC(ieee80211_generic_frame_duration, 0xb0d46778, "");
SYMBOL_CRC(ieee80211_rts_duration, 0x4b4487cf, "");
SYMBOL_CRC(ieee80211_ctstoself_duration, 0xf6dfd5b5, "");
SYMBOL_CRC(ieee80211_handle_wake_tx_queue, 0x89849d8c, "");
SYMBOL_CRC(ieee80211_wake_queue, 0x6593bf47, "");
SYMBOL_CRC(ieee80211_stop_queue, 0xd4f99373, "");
SYMBOL_CRC(ieee80211_stop_queues, 0x902c0607, "");
SYMBOL_CRC(ieee80211_queue_stopped, 0x53a386cb, "");
SYMBOL_CRC(ieee80211_wake_queues, 0x10edc7c6, "");
SYMBOL_CRC(ieee80211_iterate_interfaces, 0x861a5225, "_gpl");
SYMBOL_CRC(ieee80211_iterate_active_interfaces_atomic, 0x0c7c7937, "_gpl");
SYMBOL_CRC(ieee80211_iterate_active_interfaces_mtx, 0x3849c458, "_gpl");
SYMBOL_CRC(ieee80211_iterate_stations_atomic, 0x4ae9cd9c, "_gpl");
SYMBOL_CRC(wdev_to_ieee80211_vif, 0x7d8cd910, "_gpl");
SYMBOL_CRC(ieee80211_vif_to_wdev, 0x1c115b90, "_gpl");
SYMBOL_CRC(ieee80211_queue_work, 0x84b2de1a, "");
SYMBOL_CRC(ieee80211_queue_delayed_work, 0x3923f408, "");
SYMBOL_CRC(ieee80211_hw_restart_disconnect, 0x1e2689ce, "_gpl");
SYMBOL_CRC(ieee80211_resume_disconnect, 0x39ec11f1, "_gpl");
SYMBOL_CRC(ieee80211_ave_rssi, 0x4f0ee123, "_gpl");
SYMBOL_CRC(ieee80211_radar_detected, 0x3ea0c76a, "");
SYMBOL_CRC(ieee80211_update_p2p_noa, 0x19f37f0d, "");
SYMBOL_CRC(ieee80211_parse_p2p_noa, 0x991a0ca0, "");
SYMBOL_CRC(ieee80211_txq_get_depth, 0xdec06ddf, "");
SYMBOL_CRC(ieee80211_iter_chan_contexts_atomic, 0xe20e7f6c, "_gpl");
SYMBOL_CRC(ieee80211_chswitch_done, 0x25801464, "");
SYMBOL_CRC(ieee80211_ap_probereq_get, 0xb91dd102, "");
SYMBOL_CRC(ieee80211_beacon_loss, 0xc0cd30c3, "");
SYMBOL_CRC(ieee80211_connection_loss, 0xaed8120c, "");
SYMBOL_CRC(ieee80211_disconnect, 0xd390a248, "");
SYMBOL_CRC(ieee80211_cqm_rssi_notify, 0x37659422, "");
SYMBOL_CRC(ieee80211_cqm_beacon_loss_notify, 0x3d1ea765, "");
SYMBOL_CRC(ieee80211_enable_rssi_reports, 0x7c732380, "");
SYMBOL_CRC(ieee80211_disable_rssi_reports, 0x352e0c7c, "");
SYMBOL_CRC(ieee80211_tdls_oper_request, 0x89851f83, "");
SYMBOL_CRC(ieee80211_calc_rx_airtime, 0x842e0154, "_gpl");
SYMBOL_CRC(ieee80211_calc_tx_airtime, 0xb62c74bf, "_gpl");
SYMBOL_CRC(__ieee80211_get_radio_led_name, 0x46ccce64, "");
SYMBOL_CRC(__ieee80211_get_assoc_led_name, 0x07ab2907, "");
SYMBOL_CRC(__ieee80211_get_tx_led_name, 0xe98e6393, "");
SYMBOL_CRC(__ieee80211_get_rx_led_name, 0x9cdb474e, "");
SYMBOL_CRC(__ieee80211_create_tpt_led_trigger, 0x4e1cc2d5, "");
SYMBOL_CRC(ieee80211_report_wowlan_wakeup, 0x50dffc92, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5c7569ec, "crypto_skcipher_encrypt" },
	{ 0x63fff101, "cfg80211_inform_bss_frame_data" },
	{ 0x1dbe5917, "cfg80211_sched_scan_results" },
	{ 0xeac845cd, "wiphy_locked_debugfs_read" },
	{ 0x3c86019a, "cfg80211_sinfo_alloc_tid_stats" },
	{ 0xc505252a, "skb_complete_wifi_ack" },
	{ 0xf28cf0ae, "__hw_addr_init" },
	{ 0xaa0c318b, "vscnprintf" },
	{ 0xf031e9cf, "cfg80211_mgmt_tx_status_ext" },
	{ 0x95bb63c1, "cfg80211_rx_assoc_resp" },
	{ 0x200e7ff0, "cfg80211_rx_unexpected_4addr_frame" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x2bb32ad1, "arc4_setkey" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x6048275b, "bpf_trace_run4" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0x20978fb9, "idr_find" },
	{ 0x117aca91, "cfg80211_merge_profile" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc169e3e4, "eth_mac_addr" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x5c3cd60f, "cfg80211_links_removed" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x3516647c, "cfg80211_chandef_dfs_required" },
	{ 0x2c834418, "static_key_slow_inc" },
	{ 0x270aa6c0, "cfg80211_scan_done" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x1325e2b5, "cfg80211_assoc_comeback" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x9a25806b, "consume_skb" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xb0e602eb, "memmove" },
	{ 0x3842e136, "regulatory_pre_cac_allowed" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xda2422b8, "skb_clone_sk" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4c63d9dd, "trace_raw_output_prep" },
	{ 0x35102ceb, "wiphy_work_flush" },
	{ 0x6b8bf149, "netif_receive_skb_list" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xf9f9cb01, "cfg80211_bss_color_notify" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x214b213e, "cfg80211_remain_on_channel_expired" },
	{ 0x91c81571, "bpf_trace_run6" },
	{ 0xa2cd24f4, "cfg80211_cac_event" },
	{ 0x444d706f, "debugfs_create_symlink" },
	{ 0xb5f5c77e, "skb_dequeue" },
	{ 0x2b8ff6d1, "__trace_trigger_soft_disabled" },
	{ 0xd737f9bf, "cfg80211_register_netdevice" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xb3e272c9, "trace_event_printf" },
	{ 0xfd4f068f, "led_trigger_blink_oneshot" },
	{ 0x96848186, "scnprintf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xcc1a7c48, "cfg80211_is_element_inherited" },
	{ 0x4c236f6f, "__x86_indirect_thunk_r15" },
	{ 0xd037cae, "ieee80211_amsdu_to_8023s" },
	{ 0xb71ed69f, "__hw_addr_unsync" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xee37f079, "cfg80211_ref_bss" },
	{ 0x272d6876, "ieee80211_mandatory_rates" },
	{ 0xefab0596, "ieee80211_chandef_to_operating_class" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x4df02057, "crc32_be" },
	{ 0x345fa8cc, "ieee80211_operating_class_to_chandef" },
	{ 0x2eb7090, "dev_alloc_name" },
	{ 0x692ed195, "___pskb_trim" },
	{ 0x8959d336, "trace_event_raw_init" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x44f0ad9, "get_random_u16" },
	{ 0x43babd19, "sg_init_one" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x4b5acf74, "rhashtable_init" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0x666d1046, "crypto_alloc_aead" },
	{ 0xcf7b3b54, "bpf_trace_run2" },
	{ 0xe2384317, "crypto_aead_setauthsize" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xc4fe251, "crypto_aead_decrypt" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x538f32f2, "cfg80211_chandef_valid" },
	{ 0xab04f547, "cfg80211_new_sta" },
	{ 0x5f4dab15, "crypto_skcipher_setkey" },
	{ 0x148653, "vsnprintf" },
	{ 0x3754fb97, "kmem_cache_create" },
	{ 0x2b62b694, "netdev_set_default_ethtool_ops" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x52176b9e, "__dynamic_dev_dbg" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x89f8df2b, "ether_setup" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa2066eb8, "pskb_expand_head" },
	{ 0x2f4880df, "static_key_slow_dec" },
	{ 0x438f219, "skb_csum_hwoffload_help" },
	{ 0x8fa5a6ee, "dev_fetch_sw_netstats" },
	{ 0x8cb09cb0, "skb_queue_purge_reason" },
	{ 0xcc7c3ecf, "trace_event_buffer_commit" },
	{ 0x6178095e, "dev_addr_mod" },
	{ 0x3c744e95, "cfg80211_calculate_bitrate" },
	{ 0x50fad434, "round_jiffies_up" },
	{ 0x14fc6972, "crypto_destroy_tfm" },
	{ 0x28cca31b, "eth_type_trans" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x6373ea58, "alloc_netdev_mqs" },
	{ 0x41226da2, "wiphy_new_nm" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x64d0c64a, "cfg80211_sta_opmode_change_notify" },
	{ 0x122c3a7e, "_printk" },
	{ 0x9a0220a5, "cfg80211_ready_on_channel" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xff2d565c, "drop_reasons_unregister_subsys" },
	{ 0x7c05db6c, "skb_checksum_help" },
	{ 0x7334917, "cfg80211_classify8021d" },
	{ 0xe9effe6a, "cfg80211_tx_mgmt_expired" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf5eaf5c4, "debugfs_create_x64" },
	{ 0xa31253bf, "ieee80211_fragment_element" },
	{ 0x96b419d, "cfg80211_rx_mlme_mgmt" },
	{ 0xc4a7edf8, "wiphy_delayed_work_queue" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x6905d5f8, "crypto_skcipher_decrypt" },
	{ 0xbe6343c1, "wiphy_register" },
	{ 0xa916b694, "strnlen" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0xdfdc2e91, "cfg80211_put_bss" },
	{ 0x76ee3106, "cfg80211_nan_func_terminated" },
	{ 0xbbe3a236, "cfg80211_ch_switch_notify" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x41eaa027, "cfg80211_tx_mlme_mgmt" },
	{ 0x3cfdd46f, "kmem_cache_alloc" },
	{ 0x1184cffd, "_dev_info" },
	{ 0x6bf91a8e, "napi_gro_receive" },
	{ 0xb35abee5, "cfg80211_gtk_rekey_notify" },
	{ 0xabb08c3a, "skb_copy_expand" },
	{ 0xd6a7d5b2, "skb_queue_tail" },
	{ 0x3ba40631, "ieee80211_get_channel_khz" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x5d849196, "cfg80211_check_combinations" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xe6f4127e, "__cfg80211_radar_event" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x4313407a, "cfg80211_tdls_oper_request" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x5080d9ce, "cfg80211_control_port_tx_status" },
	{ 0x9ce5d166, "cfg80211_chandef_primary" },
	{ 0x354dc970, "cfg80211_get_drvinfo" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x13c58e52, "ieee80211_get_8023_tunnel_proto" },
	{ 0x44aeae89, "crypto_aead_setkey" },
	{ 0x44d0ac, "kernel_param_lock" },
	{ 0xbe09fc11, "wiphy_locked_debugfs_write" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0xa875fcd3, "cfg80211_rx_spurious_frame" },
	{ 0xabcc6fb8, "perf_trace_run_bpf_submit" },
	{ 0xb65b063c, "__skb_get_hash" },
	{ 0xc4a67f9b, "cfg80211_ibss_joined" },
	{ 0x686d069a, "cfg80211_nan_match" },
	{ 0x5a5266, "crypto_shash_setkey" },
	{ 0xf7be8ee8, "cfg80211_chandef_compatible" },
	{ 0x35cad296, "simple_open" },
	{ 0xc084677a, "skb_pull" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x442afc8e, "cfg80211_iter_combinations" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xd4034828, "system_freezable_wq" },
	{ 0x2cb2e0e0, "cfg80211_iftype_allowed" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0xe94ef447, "crypto_aead_encrypt" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x3973c14b, "noop_llseek" },
	{ 0x400b287, "ieee80211_is_valid_amsdu" },
	{ 0xa9563011, "bpf_trace_run5" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xff4729c0, "cfg80211_michael_mic_failure" },
	{ 0x68787486, "cfg80211_reg_can_beacon_relax" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x8fea829d, "cfg80211_cqm_pktloss_notify" },
	{ 0x753c8b9, "cfg80211_any_usable_channels" },
	{ 0xcd47fcc4, "arc4_crypt" },
	{ 0x1884ee6c, "dev_close" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x652032cb, "mac_pton" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8fa02936, "cfg80211_free_nan_func" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe246278b, "skb_push" },
	{ 0xf40bc2f5, "ieee80211_operating_class_to_band" },
	{ 0x4ebf36a1, "kmem_cache_free" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x1840543b, "debugfs_remove" },
	{ 0x5a921311, "strncmp" },
	{ 0xebbda7e, "cfg80211_del_sta_sinfo" },
	{ 0xd17e721e, "netif_receive_skb" },
	{ 0xa66f7ccc, "trace_event_reg" },
	{ 0x9166fada, "strncpy" },
	{ 0x366356e8, "crypto_shash_digest" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xc9271504, "skb_ensure_writable" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0xe6aaa79c, "wiphy_unregister" },
	{ 0x589e0a2c, "free_netdev" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x8489949a, "crypto_shash_update" },
	{ 0x95bcba95, "wiphy_work_queue" },
	{ 0x1b085ce5, "led_trigger_unregister" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x43afadee, "ieee80211_radiotap_iterator_init" },
	{ 0x33159b84, "cfg80211_notify_new_peer_candidate" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0xb2276be3, "ieee80211_data_to_8023_exthdr" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x12807459, "ethtool_op_get_link" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xbc72d0f2, "debugfs_create_ulong" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x66c4f5f8, "bpf_trace_run1" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x525951f6, "default_llseek" },
	{ 0x2c19c3c0, "nl80211_chan_width_to_mhz" },
	{ 0x657c7c5d, "cfg80211_schedule_channels_check" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x7f6cee89, "rhashtable_free_and_destroy" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xeadfb9d5, "kernel_param_unlock" },
	{ 0x1629a7b0, "wiphy_work_cancel" },
	{ 0xfb578fc5, "memset" },
	{ 0x5f821ccf, "_dev_warn" },
	{ 0x85de3f6f, "wiphy_delayed_work_timer" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xadd14c44, "cfg80211_chandef_usable" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x69b18f43, "rfc1042_header" },
	{ 0xb202f0d7, "rht_bucket_nested_insert" },
	{ 0x30c096d2, "wiphy_delayed_work_cancel" },
	{ 0x818d211d, "ieee80211_strip_8023_mesh_hdr" },
	{ 0xdf237453, "timer_shutdown_sync" },
	{ 0x3931717e, "kfree_skb_list_reason" },
	{ 0x3257ba1d, "cfg80211_cqm_beacon_loss_notify" },
	{ 0xd7b44fe9, "param_ops_charp" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x9a0e9e5b, "debugfs_create_u32" },
	{ 0xde559c1, "cfg80211_rx_control_port" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x91f68ea1, "__hw_addr_sync" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0x5cf52384, "netif_rx" },
	{ 0xdece0e7e, "__netdev_alloc_skb" },
	{ 0x40394534, "debugfs_create_x16" },
	{ 0x1bb59029, "ieee80211_s1g_channel_width" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x78cc75d2, "drop_reasons_register_subsys" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x6947337a, "cfg80211_ch_switch_started_notify" },
	{ 0x9c270dcd, "cfg80211_check_station_change" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9f76258d, "nonseekable_open" },
	{ 0x66438f26, "cfg80211_sched_scan_stopped_locked" },
	{ 0x14eaba6a, "cfg80211_reg_can_beacon" },
	{ 0xaee35d50, "pv_ops" },
	{ 0xfaf0475b, "bpf_trace_run3" },
	{ 0xe0313d71, "rhashtable_insert_slow" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3451452d, "debugfs_rename" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xa940cb6c, "debugfs_create_file" },
	{ 0xc4d88a53, "cfg80211_unregister_wdev" },
	{ 0x8e7a30bb, "__dev_queue_xmit" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x986d7118, "cfg80211_probe_status" },
	{ 0x8f3fc172, "freq_reg_info" },
	{ 0x2bc629e5, "trace_event_buffer_reserve" },
	{ 0x973ccff2, "cfg80211_stop_iface" },
	{ 0x7acb86ed, "ieee80211_radiotap_iterator_next" },
	{ 0x7fba6c96, "cfg80211_rx_mgmt_ext" },
	{ 0x85df9b6c, "strsep" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xcba559d2, "crypto_shash_finup" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa3f425cf, "param_ops_bool" },
	{ 0xd6c87a05, "cfg80211_defragment_element" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x4cfd617b, "wiphy_delayed_work_flush" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3ac3feba, "rhltable_init" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe10bc0d2, "netif_carrier_off" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd1ed25d, "led_trigger_register" },
	{ 0x2db5a302, "skb_copy" },
	{ 0x16a97494, "cfg80211_assoc_failure" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xf1de5c0a, "skb_clone" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xbc8054bd, "netif_carrier_on" },
	{ 0x23026b4b, "cfg80211_chandef_create" },
	{ 0x428cff0d, "cfg80211_report_wowlan_wakeup" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xd56d55f3, "ieee80211_get_mesh_hdrlen" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0xf22b2e7, "cfg80211_send_layer2_update" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xf5596d89, "cfg80211_get_p2p_attr" },
	{ 0x625c9b0e, "cfg80211_get_iftype_ext_capa" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x7d74d522, "kstrtoull_from_user" },
	{ 0x4744e7c6, "led_trigger_event" },
	{ 0x2850c99a, "cfg80211_shutdown_all_interfaces" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x754d539c, "strlen" },
	{ 0x1879fcbd, "bridge_tunnel_header" },
	{ 0x2eebc68d, "dev_kfree_skb_any_reason" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0xd8f2726c, "cfg80211_report_obss_beacon_khz" },
	{ 0x5cba2be4, "ieee80211_bss_get_elem" },
	{ 0x47d0e073, "param_ops_int" },
	{ 0x78d86096, "_dev_printk" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0x148d5a95, "crypto_alloc_shash" },
	{ 0xfe67de01, "debugfs_create_dir" },
	{ 0x275269b3, "ieee80211_ie_split_ric" },
	{ 0x1ffd0cab, "generic_file_llseek" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb76ef558, "led_trigger_blink" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x5bb5fa3f, "__skb_gso_segment" },
	{ 0x7757cd27, "cfg80211_unlink_bss" },
	{ 0x84e90575, "__cfg80211_get_bss" },
	{ 0x1b5313f5, "wiphy_free" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x9592386b, "cfg80211_cqm_rssi_notify" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0xb2a49696, "netdev_info" },
	{ 0x560cd29a, "kmem_cache_destroy" },
	{ 0x1c5402a3, "skb_queue_head" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa4aebb42, "cfg80211_auth_timeout" },
	{ 0xd450b445, "cfg80211_rx_unprot_mlme_mgmt" },
	{ 0xd3b2e056, "crypto_alloc_skcipher" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "cfg80211,libarc4");


MODULE_INFO(srcversion, "93F433741ABE3F96FC67C31");
