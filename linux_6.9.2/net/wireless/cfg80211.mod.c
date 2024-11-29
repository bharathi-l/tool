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

KSYMTAB_FUNC(cfg80211_shutdown_all_interfaces, "_gpl", "");
KSYMTAB_FUNC(wiphy_new_nm, "", "");
KSYMTAB_FUNC(wiphy_register, "", "");
KSYMTAB_FUNC(wiphy_rfkill_start_polling, "", "");
KSYMTAB_FUNC(wiphy_unregister, "", "");
KSYMTAB_FUNC(wiphy_free, "", "");
KSYMTAB_FUNC(wiphy_rfkill_set_hw_state_reason, "", "");
KSYMTAB_FUNC(cfg80211_unregister_wdev, "", "");
KSYMTAB_FUNC(cfg80211_stop_iface, "", "");
KSYMTAB_FUNC(cfg80211_register_netdevice, "", "");
KSYMTAB_FUNC(wiphy_work_queue, "_gpl", "");
KSYMTAB_FUNC(wiphy_work_cancel, "_gpl", "");
KSYMTAB_FUNC(wiphy_work_flush, "_gpl", "");
KSYMTAB_FUNC(wiphy_delayed_work_timer, "", "");
KSYMTAB_FUNC(wiphy_delayed_work_queue, "_gpl", "");
KSYMTAB_FUNC(wiphy_delayed_work_cancel, "_gpl", "");
KSYMTAB_FUNC(wiphy_delayed_work_flush, "_gpl", "");
KSYMTAB_FUNC(ieee80211_radiotap_iterator_init, "", "");
KSYMTAB_FUNC(ieee80211_radiotap_iterator_next, "", "");
KSYMTAB_FUNC(ieee80211_get_response_rate, "", "");
KSYMTAB_FUNC(ieee80211_mandatory_rates, "", "");
KSYMTAB_FUNC(ieee80211_channel_to_freq_khz, "", "");
KSYMTAB_FUNC(ieee80211_s1g_channel_width, "", "");
KSYMTAB_FUNC(ieee80211_freq_khz_to_channel, "", "");
KSYMTAB_FUNC(ieee80211_get_channel_khz, "", "");
KSYMTAB_FUNC(ieee80211_hdrlen, "", "");
KSYMTAB_FUNC(ieee80211_get_hdrlen_from_skb, "", "");
KSYMTAB_FUNC(ieee80211_get_mesh_hdrlen, "", "");
KSYMTAB_FUNC(ieee80211_get_8023_tunnel_proto, "", "");
KSYMTAB_FUNC(ieee80211_strip_8023_mesh_hdr, "", "");
KSYMTAB_FUNC(ieee80211_data_to_8023_exthdr, "", "");
KSYMTAB_FUNC(ieee80211_is_valid_amsdu, "", "");
KSYMTAB_FUNC(ieee80211_amsdu_to_8023s, "", "");
KSYMTAB_FUNC(cfg80211_classify8021d, "", "");
KSYMTAB_FUNC(ieee80211_bss_get_elem, "", "");
KSYMTAB_FUNC(cfg80211_calculate_bitrate, "", "");
KSYMTAB_FUNC(cfg80211_get_p2p_attr, "", "");
KSYMTAB_FUNC(ieee80211_ie_split_ric, "", "");
KSYMTAB_FUNC(ieee80211_fragment_element, "", "");
KSYMTAB_FUNC(ieee80211_operating_class_to_band, "", "");
KSYMTAB_FUNC(ieee80211_operating_class_to_chandef, "", "");
KSYMTAB_FUNC(ieee80211_chandef_to_operating_class, "", "");
KSYMTAB_FUNC(cfg80211_iter_combinations, "", "");
KSYMTAB_FUNC(cfg80211_check_combinations, "", "");
KSYMTAB_FUNC(ieee80211_get_num_supported_channels, "", "");
KSYMTAB_FUNC(cfg80211_get_station, "", "");
KSYMTAB_FUNC(cfg80211_free_nan_func, "", "");
KSYMTAB_FUNC(cfg80211_sinfo_alloc_tid_stats, "", "");
KSYMTAB_DATA(rfc1042_header, "", "");
KSYMTAB_DATA(bridge_tunnel_header, "", "");
KSYMTAB_FUNC(cfg80211_send_layer2_update, "", "");
KSYMTAB_FUNC(ieee80211_get_vht_max_nss, "", "");
KSYMTAB_FUNC(cfg80211_iftype_allowed, "", "");
KSYMTAB_FUNC(cfg80211_get_iftype_ext_capa, "", "");
KSYMTAB_FUNC(get_wiphy_regdom, "", "");
KSYMTAB_FUNC(reg_query_regdb_wmm, "", "");
KSYMTAB_FUNC(freq_reg_info, "", "");
KSYMTAB_FUNC(reg_initiator_name, "", "");
KSYMTAB_FUNC(wiphy_apply_custom_regulatory, "", "");
KSYMTAB_FUNC(regulatory_hint, "", "");
KSYMTAB_FUNC(regulatory_set_wiphy_regd, "", "");
KSYMTAB_FUNC(regulatory_set_wiphy_regd_sync, "", "");
KSYMTAB_FUNC(regulatory_pre_cac_allowed, "", "");
KSYMTAB_FUNC(cfg80211_is_element_inherited, "", "");
KSYMTAB_FUNC(cfg80211_iter_rnr, "_gpl", "");
KSYMTAB_FUNC(cfg80211_scan_done, "", "");
KSYMTAB_FUNC(cfg80211_sched_scan_results, "", "");
KSYMTAB_FUNC(cfg80211_sched_scan_stopped_locked, "", "");
KSYMTAB_FUNC(cfg80211_sched_scan_stopped, "", "");
KSYMTAB_FUNC(cfg80211_bss_flush, "", "");
KSYMTAB_FUNC(cfg80211_find_elem_match, "", "");
KSYMTAB_FUNC(cfg80211_find_vendor_elem, "", "");
KSYMTAB_FUNC(__cfg80211_get_bss, "", "");
KSYMTAB_FUNC(cfg80211_get_ies_channel_number, "", "");
KSYMTAB_FUNC(cfg80211_merge_profile, "", "");
KSYMTAB_FUNC(cfg80211_defragment_element, "", "");
KSYMTAB_FUNC(cfg80211_inform_bss_data, "", "");
KSYMTAB_FUNC(cfg80211_inform_bss_frame_data, "", "");
KSYMTAB_FUNC(cfg80211_ref_bss, "", "");
KSYMTAB_FUNC(cfg80211_put_bss, "", "");
KSYMTAB_FUNC(cfg80211_unlink_bss, "", "");
KSYMTAB_FUNC(cfg80211_bss_iter, "", "");
KSYMTAB_FUNC(cfg80211_wext_siwscan, "_gpl", "");
KSYMTAB_FUNC(cfg80211_wext_giwscan, "_gpl", "");
KSYMTAB_FUNC(nl80211_send_chandef, "", "");
KSYMTAB_FUNC(cfg80211_check_station_change, "", "");
KSYMTAB_FUNC(__cfg80211_alloc_event_skb, "", "");
KSYMTAB_FUNC(__cfg80211_send_event_skb, "", "");
KSYMTAB_FUNC(cfg80211_nan_match, "", "");
KSYMTAB_FUNC(cfg80211_nan_func_terminated, "", "");
KSYMTAB_FUNC(__cfg80211_alloc_reply_skb, "", "");
KSYMTAB_FUNC(cfg80211_vendor_cmd_reply, "_gpl", "");
KSYMTAB_FUNC(cfg80211_vendor_cmd_get_sender, "_gpl", "");
KSYMTAB_FUNC(cfg80211_rx_unprot_mlme_mgmt, "", "");
KSYMTAB_FUNC(cfg80211_links_removed, "", "");
KSYMTAB_FUNC(cfg80211_notify_new_peer_candidate, "", "");
KSYMTAB_FUNC(cfg80211_assoc_comeback, "", "");
KSYMTAB_FUNC(cfg80211_ready_on_channel, "", "");
KSYMTAB_FUNC(cfg80211_remain_on_channel_expired, "", "");
KSYMTAB_FUNC(cfg80211_tx_mgmt_expired, "", "");
KSYMTAB_FUNC(cfg80211_new_sta, "", "");
KSYMTAB_FUNC(cfg80211_del_sta_sinfo, "", "");
KSYMTAB_FUNC(cfg80211_conn_failed, "", "");
KSYMTAB_FUNC(cfg80211_rx_spurious_frame, "", "");
KSYMTAB_FUNC(cfg80211_rx_unexpected_4addr_frame, "", "");
KSYMTAB_FUNC(cfg80211_control_port_tx_status, "", "");
KSYMTAB_FUNC(cfg80211_mgmt_tx_status_ext, "", "");
KSYMTAB_FUNC(cfg80211_rx_control_port, "", "");
KSYMTAB_FUNC(cfg80211_cqm_rssi_notify, "", "");
KSYMTAB_FUNC(cfg80211_cqm_txe_notify, "", "");
KSYMTAB_FUNC(cfg80211_cqm_pktloss_notify, "", "");
KSYMTAB_FUNC(cfg80211_cqm_beacon_loss_notify, "", "");
KSYMTAB_FUNC(cfg80211_gtk_rekey_notify, "", "");
KSYMTAB_FUNC(cfg80211_pmksa_candidate_notify, "", "");
KSYMTAB_FUNC(cfg80211_ch_switch_notify, "", "");
KSYMTAB_FUNC(cfg80211_ch_switch_started_notify, "", "");
KSYMTAB_FUNC(cfg80211_bss_color_notify, "", "");
KSYMTAB_FUNC(cfg80211_sta_opmode_change_notify, "", "");
KSYMTAB_FUNC(cfg80211_probe_status, "", "");
KSYMTAB_FUNC(cfg80211_report_obss_beacon_khz, "", "");
KSYMTAB_FUNC(cfg80211_report_wowlan_wakeup, "", "");
KSYMTAB_FUNC(cfg80211_tdls_oper_request, "", "");
KSYMTAB_FUNC(cfg80211_ft_event, "", "");
KSYMTAB_FUNC(cfg80211_crit_proto_stopped, "", "");
KSYMTAB_FUNC(cfg80211_external_auth_request, "", "");
KSYMTAB_FUNC(cfg80211_update_owe_info_event, "", "");
KSYMTAB_FUNC(cfg80211_schedule_channels_check, "", "");
KSYMTAB_FUNC(cfg80211_rx_assoc_resp, "", "");
KSYMTAB_FUNC(cfg80211_rx_mlme_mgmt, "", "");
KSYMTAB_FUNC(cfg80211_auth_timeout, "", "");
KSYMTAB_FUNC(cfg80211_assoc_failure, "", "");
KSYMTAB_FUNC(cfg80211_tx_mlme_mgmt, "", "");
KSYMTAB_FUNC(cfg80211_michael_mic_failure, "", "");
KSYMTAB_FUNC(cfg80211_rx_mgmt_ext, "", "");
KSYMTAB_FUNC(__cfg80211_radar_event, "", "");
KSYMTAB_FUNC(cfg80211_cac_event, "", "");
KSYMTAB_FUNC(cfg80211_background_cac_abort, "", "");
KSYMTAB_FUNC(cfg80211_ibss_joined, "", "");
KSYMTAB_FUNC(cfg80211_connect_done, "", "");
KSYMTAB_FUNC(cfg80211_roamed, "", "");
KSYMTAB_FUNC(cfg80211_port_authorized, "", "");
KSYMTAB_FUNC(cfg80211_disconnected, "", "");
KSYMTAB_FUNC(cfg80211_chandef_create, "", "");
KSYMTAB_FUNC(nl80211_chan_width_to_mhz, "", "");
KSYMTAB_FUNC(cfg80211_chandef_valid, "", "");
KSYMTAB_FUNC(cfg80211_chandef_primary, "", "");
KSYMTAB_FUNC(cfg80211_chandef_compatible, "", "");
KSYMTAB_FUNC(cfg80211_chandef_dfs_required, "", "");
KSYMTAB_FUNC(cfg80211_chandef_dfs_usable, "", "");
KSYMTAB_FUNC(cfg80211_chandef_dfs_cac_time, "", "");
KSYMTAB_FUNC(cfg80211_chandef_usable, "", "");
KSYMTAB_FUNC(cfg80211_reg_can_beacon, "", "");
KSYMTAB_FUNC(cfg80211_reg_can_beacon_relax, "", "");
KSYMTAB_FUNC(cfg80211_any_usable_channels, "", "");
KSYMTAB_FUNC(wdev_chandef, "", "");
KSYMTAB_FUNC(cfg80211_get_drvinfo, "", "");
KSYMTAB_FUNC(cfg80211_pmsr_complete, "_gpl", "");
KSYMTAB_FUNC(cfg80211_pmsr_report, "_gpl", "");
KSYMTAB_FUNC(wiphy_locked_debugfs_read, "_gpl", "");
KSYMTAB_FUNC(wiphy_locked_debugfs_write, "_gpl", "");
KSYMTAB_FUNC(cfg80211_wext_giwname, "_gpl", "");
KSYMTAB_FUNC(cfg80211_wext_siwmode, "_gpl", "");
KSYMTAB_FUNC(cfg80211_wext_giwmode, "_gpl", "");
KSYMTAB_FUNC(cfg80211_wext_giwrange, "_gpl", "");
KSYMTAB_FUNC(cfg80211_wext_siwrts, "_gpl", "");
KSYMTAB_FUNC(cfg80211_wext_giwrts, "_gpl", "");
KSYMTAB_FUNC(cfg80211_wext_siwfrag, "_gpl", "");
KSYMTAB_FUNC(cfg80211_wext_giwfrag, "_gpl", "");
KSYMTAB_FUNC(cfg80211_wext_giwretry, "_gpl", "");

SYMBOL_CRC(cfg80211_shutdown_all_interfaces, 0x2850c99a, "_gpl");
SYMBOL_CRC(wiphy_new_nm, 0x41226da2, "");
SYMBOL_CRC(wiphy_register, 0xbe6343c1, "");
SYMBOL_CRC(wiphy_rfkill_start_polling, 0xb5192425, "");
SYMBOL_CRC(wiphy_unregister, 0xe6aaa79c, "");
SYMBOL_CRC(wiphy_free, 0x1b5313f5, "");
SYMBOL_CRC(wiphy_rfkill_set_hw_state_reason, 0xda57179b, "");
SYMBOL_CRC(cfg80211_unregister_wdev, 0xc4d88a53, "");
SYMBOL_CRC(cfg80211_stop_iface, 0x973ccff2, "");
SYMBOL_CRC(cfg80211_register_netdevice, 0xd737f9bf, "");
SYMBOL_CRC(wiphy_work_queue, 0x95bcba95, "_gpl");
SYMBOL_CRC(wiphy_work_cancel, 0x1629a7b0, "_gpl");
SYMBOL_CRC(wiphy_work_flush, 0x35102ceb, "_gpl");
SYMBOL_CRC(wiphy_delayed_work_timer, 0x85de3f6f, "");
SYMBOL_CRC(wiphy_delayed_work_queue, 0xc4a7edf8, "_gpl");
SYMBOL_CRC(wiphy_delayed_work_cancel, 0x30c096d2, "_gpl");
SYMBOL_CRC(wiphy_delayed_work_flush, 0x4cfd617b, "_gpl");
SYMBOL_CRC(ieee80211_radiotap_iterator_init, 0x43afadee, "");
SYMBOL_CRC(ieee80211_radiotap_iterator_next, 0x7acb86ed, "");
SYMBOL_CRC(ieee80211_get_response_rate, 0x6aac3bef, "");
SYMBOL_CRC(ieee80211_mandatory_rates, 0x272d6876, "");
SYMBOL_CRC(ieee80211_channel_to_freq_khz, 0x5584448a, "");
SYMBOL_CRC(ieee80211_s1g_channel_width, 0x1bb59029, "");
SYMBOL_CRC(ieee80211_freq_khz_to_channel, 0x6bedf402, "");
SYMBOL_CRC(ieee80211_get_channel_khz, 0x3ba40631, "");
SYMBOL_CRC(ieee80211_hdrlen, 0x7ef39823, "");
SYMBOL_CRC(ieee80211_get_hdrlen_from_skb, 0x1d16ed32, "");
SYMBOL_CRC(ieee80211_get_mesh_hdrlen, 0xd56d55f3, "");
SYMBOL_CRC(ieee80211_get_8023_tunnel_proto, 0x13c58e52, "");
SYMBOL_CRC(ieee80211_strip_8023_mesh_hdr, 0x818d211d, "");
SYMBOL_CRC(ieee80211_data_to_8023_exthdr, 0xb2276be3, "");
SYMBOL_CRC(ieee80211_is_valid_amsdu, 0x0400b287, "");
SYMBOL_CRC(ieee80211_amsdu_to_8023s, 0x0d037cae, "");
SYMBOL_CRC(cfg80211_classify8021d, 0x07334917, "");
SYMBOL_CRC(ieee80211_bss_get_elem, 0x5cba2be4, "");
SYMBOL_CRC(cfg80211_calculate_bitrate, 0x3c744e95, "");
SYMBOL_CRC(cfg80211_get_p2p_attr, 0xf5596d89, "");
SYMBOL_CRC(ieee80211_ie_split_ric, 0x275269b3, "");
SYMBOL_CRC(ieee80211_fragment_element, 0xa31253bf, "");
SYMBOL_CRC(ieee80211_operating_class_to_band, 0xf40bc2f5, "");
SYMBOL_CRC(ieee80211_operating_class_to_chandef, 0x345fa8cc, "");
SYMBOL_CRC(ieee80211_chandef_to_operating_class, 0xefab0596, "");
SYMBOL_CRC(cfg80211_iter_combinations, 0x442afc8e, "");
SYMBOL_CRC(cfg80211_check_combinations, 0x5d849196, "");
SYMBOL_CRC(ieee80211_get_num_supported_channels, 0x4c5ffda0, "");
SYMBOL_CRC(cfg80211_get_station, 0x2a439f22, "");
SYMBOL_CRC(cfg80211_free_nan_func, 0x8fa02936, "");
SYMBOL_CRC(cfg80211_sinfo_alloc_tid_stats, 0x3c86019a, "");
SYMBOL_CRC(rfc1042_header, 0x69b18f43, "");
SYMBOL_CRC(bridge_tunnel_header, 0x1879fcbd, "");
SYMBOL_CRC(cfg80211_send_layer2_update, 0x0f22b2e7, "");
SYMBOL_CRC(ieee80211_get_vht_max_nss, 0x7c3ac925, "");
SYMBOL_CRC(cfg80211_iftype_allowed, 0x2cb2e0e0, "");
SYMBOL_CRC(cfg80211_get_iftype_ext_capa, 0x625c9b0e, "");
SYMBOL_CRC(get_wiphy_regdom, 0xfb67464b, "");
SYMBOL_CRC(reg_query_regdb_wmm, 0x8f495c47, "");
SYMBOL_CRC(freq_reg_info, 0x8f3fc172, "");
SYMBOL_CRC(reg_initiator_name, 0xdba126c1, "");
SYMBOL_CRC(wiphy_apply_custom_regulatory, 0x606ab5b5, "");
SYMBOL_CRC(regulatory_hint, 0x9e6e4b44, "");
SYMBOL_CRC(regulatory_set_wiphy_regd, 0x65c21909, "");
SYMBOL_CRC(regulatory_set_wiphy_regd_sync, 0x319ff993, "");
SYMBOL_CRC(regulatory_pre_cac_allowed, 0x3842e136, "");
SYMBOL_CRC(cfg80211_is_element_inherited, 0xcc1a7c48, "");
SYMBOL_CRC(cfg80211_iter_rnr, 0x646c544c, "_gpl");
SYMBOL_CRC(cfg80211_scan_done, 0x270aa6c0, "");
SYMBOL_CRC(cfg80211_sched_scan_results, 0x1dbe5917, "");
SYMBOL_CRC(cfg80211_sched_scan_stopped_locked, 0x66438f26, "");
SYMBOL_CRC(cfg80211_sched_scan_stopped, 0x8750abc3, "");
SYMBOL_CRC(cfg80211_bss_flush, 0x9693ef81, "");
SYMBOL_CRC(cfg80211_find_elem_match, 0x9d6cba30, "");
SYMBOL_CRC(cfg80211_find_vendor_elem, 0x79b82a71, "");
SYMBOL_CRC(__cfg80211_get_bss, 0x84e90575, "");
SYMBOL_CRC(cfg80211_get_ies_channel_number, 0x3aca71a1, "");
SYMBOL_CRC(cfg80211_merge_profile, 0x117aca91, "");
SYMBOL_CRC(cfg80211_defragment_element, 0xd6c87a05, "");
SYMBOL_CRC(cfg80211_inform_bss_data, 0x8a1e6a5a, "");
SYMBOL_CRC(cfg80211_inform_bss_frame_data, 0x63fff101, "");
SYMBOL_CRC(cfg80211_ref_bss, 0xee37f079, "");
SYMBOL_CRC(cfg80211_put_bss, 0xdfdc2e91, "");
SYMBOL_CRC(cfg80211_unlink_bss, 0x7757cd27, "");
SYMBOL_CRC(cfg80211_bss_iter, 0x4a209b8f, "");
SYMBOL_CRC(cfg80211_wext_siwscan, 0x76bd2743, "_gpl");
SYMBOL_CRC(cfg80211_wext_giwscan, 0x24f9d649, "_gpl");
SYMBOL_CRC(nl80211_send_chandef, 0x43c883f0, "");
SYMBOL_CRC(cfg80211_check_station_change, 0x9c270dcd, "");
SYMBOL_CRC(__cfg80211_alloc_event_skb, 0x9646df5e, "");
SYMBOL_CRC(__cfg80211_send_event_skb, 0x2e398578, "");
SYMBOL_CRC(cfg80211_nan_match, 0x686d069a, "");
SYMBOL_CRC(cfg80211_nan_func_terminated, 0x76ee3106, "");
SYMBOL_CRC(__cfg80211_alloc_reply_skb, 0x950ee53f, "");
SYMBOL_CRC(cfg80211_vendor_cmd_reply, 0x4f8bb154, "_gpl");
SYMBOL_CRC(cfg80211_vendor_cmd_get_sender, 0xf70d02ea, "_gpl");
SYMBOL_CRC(cfg80211_rx_unprot_mlme_mgmt, 0xd450b445, "");
SYMBOL_CRC(cfg80211_links_removed, 0x5c3cd60f, "");
SYMBOL_CRC(cfg80211_notify_new_peer_candidate, 0x33159b84, "");
SYMBOL_CRC(cfg80211_assoc_comeback, 0x1325e2b5, "");
SYMBOL_CRC(cfg80211_ready_on_channel, 0x9a0220a5, "");
SYMBOL_CRC(cfg80211_remain_on_channel_expired, 0x214b213e, "");
SYMBOL_CRC(cfg80211_tx_mgmt_expired, 0xe9effe6a, "");
SYMBOL_CRC(cfg80211_new_sta, 0xab04f547, "");
SYMBOL_CRC(cfg80211_del_sta_sinfo, 0x0ebbda7e, "");
SYMBOL_CRC(cfg80211_conn_failed, 0xed23d8e1, "");
SYMBOL_CRC(cfg80211_rx_spurious_frame, 0xa875fcd3, "");
SYMBOL_CRC(cfg80211_rx_unexpected_4addr_frame, 0x200e7ff0, "");
SYMBOL_CRC(cfg80211_control_port_tx_status, 0x5080d9ce, "");
SYMBOL_CRC(cfg80211_mgmt_tx_status_ext, 0xf031e9cf, "");
SYMBOL_CRC(cfg80211_rx_control_port, 0x0de559c1, "");
SYMBOL_CRC(cfg80211_cqm_rssi_notify, 0x9592386b, "");
SYMBOL_CRC(cfg80211_cqm_txe_notify, 0xca5c1213, "");
SYMBOL_CRC(cfg80211_cqm_pktloss_notify, 0x8fea829d, "");
SYMBOL_CRC(cfg80211_cqm_beacon_loss_notify, 0x3257ba1d, "");
SYMBOL_CRC(cfg80211_gtk_rekey_notify, 0xb35abee5, "");
SYMBOL_CRC(cfg80211_pmksa_candidate_notify, 0x732c9196, "");
SYMBOL_CRC(cfg80211_ch_switch_notify, 0xbbe3a236, "");
SYMBOL_CRC(cfg80211_ch_switch_started_notify, 0x6947337a, "");
SYMBOL_CRC(cfg80211_bss_color_notify, 0xf9f9cb01, "");
SYMBOL_CRC(cfg80211_sta_opmode_change_notify, 0x64d0c64a, "");
SYMBOL_CRC(cfg80211_probe_status, 0x986d7118, "");
SYMBOL_CRC(cfg80211_report_obss_beacon_khz, 0xd8f2726c, "");
SYMBOL_CRC(cfg80211_report_wowlan_wakeup, 0x428cff0d, "");
SYMBOL_CRC(cfg80211_tdls_oper_request, 0x4313407a, "");
SYMBOL_CRC(cfg80211_ft_event, 0x0f46b32e, "");
SYMBOL_CRC(cfg80211_crit_proto_stopped, 0x243ed476, "");
SYMBOL_CRC(cfg80211_external_auth_request, 0x9dd3ae34, "");
SYMBOL_CRC(cfg80211_update_owe_info_event, 0x466a7478, "");
SYMBOL_CRC(cfg80211_schedule_channels_check, 0x657c7c5d, "");
SYMBOL_CRC(cfg80211_rx_assoc_resp, 0x95bb63c1, "");
SYMBOL_CRC(cfg80211_rx_mlme_mgmt, 0x096b419d, "");
SYMBOL_CRC(cfg80211_auth_timeout, 0xa4aebb42, "");
SYMBOL_CRC(cfg80211_assoc_failure, 0x16a97494, "");
SYMBOL_CRC(cfg80211_tx_mlme_mgmt, 0x41eaa027, "");
SYMBOL_CRC(cfg80211_michael_mic_failure, 0xff4729c0, "");
SYMBOL_CRC(cfg80211_rx_mgmt_ext, 0x7fba6c96, "");
SYMBOL_CRC(__cfg80211_radar_event, 0xe6f4127e, "");
SYMBOL_CRC(cfg80211_cac_event, 0xa2cd24f4, "");
SYMBOL_CRC(cfg80211_background_cac_abort, 0xcd713a40, "");
SYMBOL_CRC(cfg80211_ibss_joined, 0xc4a67f9b, "");
SYMBOL_CRC(cfg80211_connect_done, 0x944c4635, "");
SYMBOL_CRC(cfg80211_roamed, 0x5cda3dd7, "");
SYMBOL_CRC(cfg80211_port_authorized, 0x08de502a, "");
SYMBOL_CRC(cfg80211_disconnected, 0x0240fa5d, "");
SYMBOL_CRC(cfg80211_chandef_create, 0x23026b4b, "");
SYMBOL_CRC(nl80211_chan_width_to_mhz, 0x2c19c3c0, "");
SYMBOL_CRC(cfg80211_chandef_valid, 0x538f32f2, "");
SYMBOL_CRC(cfg80211_chandef_primary, 0x9ce5d166, "");
SYMBOL_CRC(cfg80211_chandef_compatible, 0xf7be8ee8, "");
SYMBOL_CRC(cfg80211_chandef_dfs_required, 0x3516647c, "");
SYMBOL_CRC(cfg80211_chandef_dfs_usable, 0x5b18bf24, "");
SYMBOL_CRC(cfg80211_chandef_dfs_cac_time, 0xec241d15, "");
SYMBOL_CRC(cfg80211_chandef_usable, 0xadd14c44, "");
SYMBOL_CRC(cfg80211_reg_can_beacon, 0x14eaba6a, "");
SYMBOL_CRC(cfg80211_reg_can_beacon_relax, 0x68787486, "");
SYMBOL_CRC(cfg80211_any_usable_channels, 0x0753c8b9, "");
SYMBOL_CRC(wdev_chandef, 0x57e2830a, "");
SYMBOL_CRC(cfg80211_get_drvinfo, 0x354dc970, "");
SYMBOL_CRC(cfg80211_pmsr_complete, 0x8d609178, "_gpl");
SYMBOL_CRC(cfg80211_pmsr_report, 0x9c78c545, "_gpl");
SYMBOL_CRC(wiphy_locked_debugfs_read, 0xeac845cd, "_gpl");
SYMBOL_CRC(wiphy_locked_debugfs_write, 0xbe09fc11, "_gpl");
SYMBOL_CRC(cfg80211_wext_giwname, 0x429929d6, "_gpl");
SYMBOL_CRC(cfg80211_wext_siwmode, 0xfff594d0, "_gpl");
SYMBOL_CRC(cfg80211_wext_giwmode, 0xf28c11b2, "_gpl");
SYMBOL_CRC(cfg80211_wext_giwrange, 0x593d2c8a, "_gpl");
SYMBOL_CRC(cfg80211_wext_siwrts, 0x8cb6de25, "_gpl");
SYMBOL_CRC(cfg80211_wext_giwrts, 0x985982af, "_gpl");
SYMBOL_CRC(cfg80211_wext_siwfrag, 0x6c745e55, "_gpl");
SYMBOL_CRC(cfg80211_wext_giwfrag, 0x610ddb37, "_gpl");
SYMBOL_CRC(cfg80211_wext_giwretry, 0x2bab5317, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8df82a4c, "trace_print_array_seq" },
	{ 0xfc52a345, "__sock_create" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x26a93eb2, "verify_pkcs7_signature" },
	{ 0x6048275b, "bpf_trace_run4" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x4b401817, "iwe_stream_add_value" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x92c856a3, "iwe_stream_add_event" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xbcc15e75, "ktime_get_coarse_with_offset" },
	{ 0xea4da57c, "dev_set_name" },
	{ 0x9a25806b, "consume_skb" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x3d1059ea, "__nla_validate" },
	{ 0xb0e602eb, "memmove" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xca9e776c, "nla_reserve" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4c63d9dd, "trace_raw_output_prep" },
	{ 0xb7f54816, "nla_put_64bit" },
	{ 0x91c81571, "bpf_trace_run6" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x2b8ff6d1, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x69059149, "request_firmware" },
	{ 0xb3e272c9, "trace_event_printf" },
	{ 0x96848186, "scnprintf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xc0763484, "rfkill_blocked" },
	{ 0x4c236f6f, "__x86_indirect_thunk_r15" },
	{ 0x7d10618c, "device_initialize" },
	{ 0xc760ce2d, "genlmsg_put" },
	{ 0x8959d336, "trace_event_raw_init" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xcf7b3b54, "bpf_trace_run2" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x8d99d3c9, "genlmsg_multicast_allns" },
	{ 0xe2964344, "__wake_up" },
	{ 0x38485abd, "unregister_netdevice_queue" },
	{ 0xc0658cd3, "bpf_trace_run8" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x2357245f, "netlink_broadcast_filtered" },
	{ 0xfcdbfba6, "keyring_alloc" },
	{ 0xeb6f6ea3, "netdev_err" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdf7048ca, "device_rename" },
	{ 0xcc7c3ecf, "trace_event_buffer_commit" },
	{ 0x28cca31b, "eth_type_trans" },
	{ 0x1e8fac8e, "wireless_nlevent_flush" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x56fa3780, "put_device" },
	{ 0x5e321753, "net_ns_type_operations" },
	{ 0xa916b694, "strnlen" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xfd315d92, "sysfs_create_link" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xc781bd9f, "rfkill_resume_polling" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0x256b1bae, "inet_csk_get_port" },
	{ 0x851725d3, "key_put" },
	{ 0xa00f77de, "kobject_uevent_env" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0xe7f87e08, "__dev_get_by_index" },
	{ 0xabcc6fb8, "perf_trace_run_bpf_submit" },
	{ 0xece43bce, "init_net" },
	{ 0x5b238171, "request_firmware_nowait" },
	{ 0x35cad296, "simple_open" },
	{ 0xc084677a, "skb_pull" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xcc44e65b, "device_add" },
	{ 0xb05f0976, "sysfs_remove_link" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xfa6977b9, "init_uts_ns" },
	{ 0x190e3de2, "platform_device_unregister" },
	{ 0x8911bab3, "netlink_unicast" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc0cb301e, "dev_get_by_index" },
	{ 0xa9563011, "bpf_trace_run5" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x1884ee6c, "dev_close" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe246278b, "skb_push" },
	{ 0x1840543b, "debugfs_remove" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x62ede407, "wireless_send_event" },
	{ 0xd5a43273, "nla_put" },
	{ 0xa66f7ccc, "trace_event_reg" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xcd279169, "nla_find" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x1a73f3ba, "debugfs_enter_cancellation" },
	{ 0x325e698, "class_unregister" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xeba8170b, "unregister_pernet_device" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x92e44c7f, "rfkill_alloc" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x11089ac7, "_ctype" },
	{ 0x66c4f5f8, "bpf_trace_run1" },
	{ 0x7acfab09, "device_del" },
	{ 0x525951f6, "default_llseek" },
	{ 0xcdce87c, "rfkill_set_hw_state_reason" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xfb578fc5, "memset" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0xd7b44fe9, "param_ops_charp" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x4d24402, "iwe_stream_add_point" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0x5cf52384, "netif_rx" },
	{ 0xdece0e7e, "__netdev_alloc_skb" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfaf0475b, "bpf_trace_run3" },
	{ 0xa8b21c85, "__put_net" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x9dc3e5ef, "get_net_ns_by_pid" },
	{ 0x3451452d, "debugfs_rename" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xa940cb6c, "debugfs_create_file" },
	{ 0xaaa3a2f7, "platform_device_register_full" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x2bc629e5, "trace_event_buffer_reserve" },
	{ 0xff282521, "rfkill_register" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa3f425cf, "param_ops_bool" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xde5574cf, "x509_load_certificate_list" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x26ed65de, "sock_release" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0xc01b7698, "genl_unregister_family" },
	{ 0xab931585, "skb_add_rx_frag_netmem" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0xea124bd1, "gcd" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x754d539c, "strlen" },
	{ 0x5127e452, "bpf_trace_run7" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x47d0e073, "param_ops_int" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0xfe67de01, "debugfs_create_dir" },
	{ 0xf20b36c9, "genl_register_family" },
	{ 0x1ffd0cab, "generic_file_llseek" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xaee82678, "__dev_change_net_namespace" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0xa802aea8, "register_pernet_device" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xf91aa7b6, "get_net_ns_by_fd" },
	{ 0x1e980173, "class_register" },
	{ 0x3fab3fa, "bpf_trace_run11" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0x4ed2644, "debugfs_leave_cancellation" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x3c0dbc1e, "register_netdevice" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "22A883C40302E4F0DB397DD");
