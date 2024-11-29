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

KSYMTAB_FUNC(libceph_compatible, "", "");
KSYMTAB_FUNC(ceph_msg_type_name, "", "");
KSYMTAB_FUNC(ceph_check_fsid, "", "");
KSYMTAB_FUNC(ceph_compare_options, "", "");
KSYMTAB_FUNC(ceph_parse_fsid, "", "");
KSYMTAB_FUNC(ceph_alloc_options, "", "");
KSYMTAB_FUNC(ceph_destroy_options, "", "");
KSYMTAB_FUNC(ceph_parse_mon_ips, "", "");
KSYMTAB_FUNC(ceph_parse_param, "", "");
KSYMTAB_FUNC(ceph_print_client_options, "", "");
KSYMTAB_FUNC(ceph_client_addr, "", "");
KSYMTAB_FUNC(ceph_client_gid, "", "");
KSYMTAB_FUNC(ceph_create_client, "", "");
KSYMTAB_FUNC(ceph_destroy_client, "", "");
KSYMTAB_FUNC(ceph_reset_client_addr, "", "");
KSYMTAB_FUNC(__ceph_open_session, "", "");
KSYMTAB_FUNC(ceph_open_session, "", "");
KSYMTAB_FUNC(ceph_wait_for_latest_osdmap, "", "");
KSYMTAB_FUNC(ceph_pr_addr, "", "");
KSYMTAB_FUNC(ceph_msgr_flush, "", "");
KSYMTAB_FUNC(ceph_con_close, "", "");
KSYMTAB_FUNC(ceph_con_open, "", "");
KSYMTAB_FUNC(ceph_con_init, "", "");
KSYMTAB_FUNC(ceph_addr_is_blank, "", "");
KSYMTAB_FUNC(ceph_con_send, "", "");
KSYMTAB_FUNC(ceph_con_keepalive, "", "");
KSYMTAB_FUNC(ceph_msg_data_add_pages, "", "");
KSYMTAB_FUNC(ceph_msg_data_add_pagelist, "", "");
KSYMTAB_FUNC(ceph_msg_data_add_bio, "", "");
KSYMTAB_FUNC(ceph_msg_data_add_bvecs, "", "");
KSYMTAB_FUNC(ceph_msg_new2, "", "");
KSYMTAB_FUNC(ceph_msg_new, "", "");
KSYMTAB_FUNC(ceph_msg_get, "", "");
KSYMTAB_FUNC(ceph_msg_put, "", "");
KSYMTAB_FUNC(ceph_msg_dump, "", "");
KSYMTAB_FUNC(ceph_buffer_new, "", "");
KSYMTAB_FUNC(ceph_buffer_release, "", "");
KSYMTAB_FUNC(ceph_pagelist_alloc, "", "");
KSYMTAB_FUNC(ceph_pagelist_release, "", "");
KSYMTAB_FUNC(ceph_pagelist_append, "", "");
KSYMTAB_FUNC(ceph_pagelist_reserve, "", "");
KSYMTAB_FUNC(ceph_pagelist_free_reserve, "", "");
KSYMTAB_FUNC(ceph_pagelist_set_cursor, "", "");
KSYMTAB_FUNC(ceph_pagelist_truncate, "", "");
KSYMTAB_FUNC(ceph_monc_want_map, "", "");
KSYMTAB_FUNC(ceph_monc_got_map, "", "");
KSYMTAB_FUNC(ceph_monc_renew_subs, "", "");
KSYMTAB_FUNC(ceph_monc_wait_osdmap, "", "");
KSYMTAB_FUNC(ceph_monc_open_session, "", "");
KSYMTAB_FUNC(ceph_monc_do_statfs, "", "");
KSYMTAB_FUNC(ceph_monc_get_version, "", "");
KSYMTAB_FUNC(ceph_monc_get_version_async, "", "");
KSYMTAB_FUNC(ceph_monc_blocklist_add, "", "");
KSYMTAB_FUNC(ceph_monc_init, "", "");
KSYMTAB_FUNC(ceph_monc_stop, "", "");
KSYMTAB_FUNC(ceph_monc_validate_auth, "", "");
KSYMTAB_FUNC(ceph_decode_entity_addr, "", "");
KSYMTAB_FUNC(ceph_decode_entity_addrvec, "", "");
KSYMTAB_FUNC(ceph_cls_lock, "", "");
KSYMTAB_FUNC(ceph_cls_unlock, "", "");
KSYMTAB_FUNC(ceph_cls_break_lock, "", "");
KSYMTAB_FUNC(ceph_cls_set_cookie, "", "");
KSYMTAB_FUNC(ceph_free_lockers, "", "");
KSYMTAB_FUNC(ceph_cls_lock_info, "", "");
KSYMTAB_FUNC(ceph_cls_assert_locked, "", "");
KSYMTAB_FUNC(osd_req_op_extent_osd_data, "", "");
KSYMTAB_FUNC(osd_req_op_raw_data_in_pages, "", "");
KSYMTAB_FUNC(osd_req_op_extent_osd_data_pages, "", "");
KSYMTAB_FUNC(osd_req_op_extent_osd_data_pagelist, "", "");
KSYMTAB_FUNC(osd_req_op_extent_osd_data_bio, "", "");
KSYMTAB_FUNC(osd_req_op_extent_osd_data_bvecs, "", "");
KSYMTAB_FUNC(osd_req_op_extent_osd_data_bvec_pos, "", "");
KSYMTAB_FUNC(osd_req_op_extent_osd_iter, "", "");
KSYMTAB_FUNC(osd_req_op_cls_request_data_pagelist, "", "");
KSYMTAB_FUNC(osd_req_op_cls_request_data_pages, "", "");
KSYMTAB_FUNC(osd_req_op_cls_request_data_bvecs, "", "");
KSYMTAB_FUNC(osd_req_op_cls_response_data_pages, "", "");
KSYMTAB_FUNC(ceph_osdc_get_request, "", "");
KSYMTAB_FUNC(ceph_osdc_put_request, "", "");
KSYMTAB_FUNC(ceph_osdc_alloc_request, "", "");
KSYMTAB_FUNC(ceph_osdc_alloc_messages, "", "");
KSYMTAB_FUNC(osd_req_op_init, "", "");
KSYMTAB_FUNC(osd_req_op_extent_init, "", "");
KSYMTAB_FUNC(osd_req_op_extent_update, "", "");
KSYMTAB_FUNC(osd_req_op_extent_dup_last, "", "");
KSYMTAB_FUNC(osd_req_op_cls_init, "", "");
KSYMTAB_FUNC(osd_req_op_xattr_init, "", "");
KSYMTAB_FUNC(osd_req_op_alloc_hint_init, "", "");
KSYMTAB_FUNC(ceph_osdc_new_request, "", "");
KSYMTAB_FUNC(__ceph_alloc_sparse_ext_map, "", "");
KSYMTAB_FUNC(ceph_osdc_abort_requests, "", "");
KSYMTAB_FUNC(ceph_osdc_clear_abort_err, "", "");
KSYMTAB_FUNC(ceph_osdc_update_epoch_barrier, "", "");
KSYMTAB_FUNC(ceph_osdc_start_request, "", "");
KSYMTAB_FUNC(ceph_osdc_cancel_request, "", "");
KSYMTAB_FUNC(ceph_osdc_wait_request, "", "");
KSYMTAB_FUNC(ceph_osdc_sync, "", "");
KSYMTAB_FUNC(ceph_osdc_watch, "", "");
KSYMTAB_FUNC(ceph_osdc_unwatch, "", "");
KSYMTAB_FUNC(ceph_osdc_notify_ack, "", "");
KSYMTAB_FUNC(ceph_osdc_notify, "", "");
KSYMTAB_FUNC(ceph_osdc_list_watchers, "", "");
KSYMTAB_FUNC(ceph_osdc_flush_notifies, "", "");
KSYMTAB_FUNC(ceph_osdc_maybe_request_map, "", "");
KSYMTAB_FUNC(ceph_osdc_call, "", "");
KSYMTAB_FUNC(osd_req_op_copy_from_init, "", "");
KSYMTAB_FUNC(ceph_pg_pool_name_by_id, "", "");
KSYMTAB_FUNC(ceph_pg_poolid_by_name, "", "");
KSYMTAB_FUNC(ceph_pg_pool_flags, "", "");
KSYMTAB_FUNC(ceph_oloc_copy, "", "");
KSYMTAB_FUNC(ceph_oloc_destroy, "", "");
KSYMTAB_FUNC(ceph_oid_copy, "", "");
KSYMTAB_FUNC(ceph_oid_printf, "", "");
KSYMTAB_FUNC(ceph_oid_aprintf, "", "");
KSYMTAB_FUNC(ceph_oid_destroy, "", "");
KSYMTAB_FUNC(ceph_object_locator_to_pg, "", "");
KSYMTAB_FUNC(ceph_pg_to_acting_primary, "", "");
KSYMTAB_FUNC(ceph_calc_file_object_mapping, "", "");
KSYMTAB_FUNC(ceph_file_to_extents, "", "");
KSYMTAB_FUNC(ceph_iterate_extents, "", "");
KSYMTAB_FUNC(ceph_extent_to_file, "", "");
KSYMTAB_FUNC(ceph_get_num_objects, "", "");
KSYMTAB_FUNC(ceph_auth_is_authenticated, "", "");
KSYMTAB_FUNC(__ceph_auth_get_authorizer, "", "");
KSYMTAB_FUNC(ceph_auth_destroy_authorizer, "", "");
KSYMTAB_FUNC(ceph_auth_add_authorizer_challenge, "", "");
KSYMTAB_FUNC(ceph_auth_verify_authorizer_reply, "", "");
KSYMTAB_FUNC(ceph_auth_invalidate_authorizer, "", "");
KSYMTAB_FUNC(ceph_auth_get_authorizer, "", "");
KSYMTAB_FUNC(ceph_auth_handle_svc_reply_more, "", "");
KSYMTAB_FUNC(ceph_auth_handle_svc_reply_done, "", "");
KSYMTAB_FUNC(ceph_auth_handle_bad_authorizer, "", "");
KSYMTAB_FUNC(ceph_entity_type_name, "", "");
KSYMTAB_FUNC(ceph_str_hash, "", "");
KSYMTAB_FUNC(ceph_str_hash_name, "", "");
KSYMTAB_FUNC(ceph_put_page_vector, "", "");
KSYMTAB_FUNC(ceph_release_page_vector, "", "");
KSYMTAB_FUNC(ceph_alloc_page_vector, "", "");
KSYMTAB_FUNC(ceph_copy_user_to_page_vector, "", "");
KSYMTAB_FUNC(ceph_copy_to_page_vector, "", "");
KSYMTAB_FUNC(ceph_copy_from_page_vector, "", "");
KSYMTAB_FUNC(ceph_zero_page_vector_range, "", "");
KSYMTAB_FUNC(ceph_create_snap_context, "", "");
KSYMTAB_FUNC(ceph_get_snap_context, "", "");
KSYMTAB_FUNC(ceph_put_snap_context, "", "");
KSYMTAB_FUNC(ceph_find_or_create_string, "", "");
KSYMTAB_FUNC(ceph_release_string, "", "");

SYMBOL_CRC(libceph_compatible, 0x466b85b8, "");
SYMBOL_CRC(ceph_msg_type_name, 0xb54676fa, "");
SYMBOL_CRC(ceph_check_fsid, 0x4b4f8492, "");
SYMBOL_CRC(ceph_compare_options, 0xa12b8b9b, "");
SYMBOL_CRC(ceph_parse_fsid, 0x4affd6c2, "");
SYMBOL_CRC(ceph_alloc_options, 0x987d3968, "");
SYMBOL_CRC(ceph_destroy_options, 0xd4d736db, "");
SYMBOL_CRC(ceph_parse_mon_ips, 0x09fa7e8c, "");
SYMBOL_CRC(ceph_parse_param, 0x119b8d6e, "");
SYMBOL_CRC(ceph_print_client_options, 0xce1c3d02, "");
SYMBOL_CRC(ceph_client_addr, 0x1cb932db, "");
SYMBOL_CRC(ceph_client_gid, 0xa9a3400e, "");
SYMBOL_CRC(ceph_create_client, 0x0d81a86e, "");
SYMBOL_CRC(ceph_destroy_client, 0x6fe24c9d, "");
SYMBOL_CRC(ceph_reset_client_addr, 0x9a9a92b6, "");
SYMBOL_CRC(__ceph_open_session, 0xd4862cff, "");
SYMBOL_CRC(ceph_open_session, 0x539f4992, "");
SYMBOL_CRC(ceph_wait_for_latest_osdmap, 0x458fb1be, "");
SYMBOL_CRC(ceph_pr_addr, 0x6a7a38a0, "");
SYMBOL_CRC(ceph_msgr_flush, 0xafb8a407, "");
SYMBOL_CRC(ceph_con_close, 0x3e73e3e4, "");
SYMBOL_CRC(ceph_con_open, 0x06cb9770, "");
SYMBOL_CRC(ceph_con_init, 0x58eac2d4, "");
SYMBOL_CRC(ceph_addr_is_blank, 0xf254297e, "");
SYMBOL_CRC(ceph_con_send, 0x189b0410, "");
SYMBOL_CRC(ceph_con_keepalive, 0x9197626a, "");
SYMBOL_CRC(ceph_msg_data_add_pages, 0xba1a0172, "");
SYMBOL_CRC(ceph_msg_data_add_pagelist, 0x3aee5c87, "");
SYMBOL_CRC(ceph_msg_data_add_bio, 0x29e7f651, "");
SYMBOL_CRC(ceph_msg_data_add_bvecs, 0xe239d0b1, "");
SYMBOL_CRC(ceph_msg_new2, 0x8cb289f1, "");
SYMBOL_CRC(ceph_msg_new, 0x3730e902, "");
SYMBOL_CRC(ceph_msg_get, 0x02fc665d, "");
SYMBOL_CRC(ceph_msg_put, 0x4f5834a6, "");
SYMBOL_CRC(ceph_msg_dump, 0x0f367b18, "");
SYMBOL_CRC(ceph_buffer_new, 0x9fbba67f, "");
SYMBOL_CRC(ceph_buffer_release, 0xb72c162e, "");
SYMBOL_CRC(ceph_pagelist_alloc, 0xe76e7226, "");
SYMBOL_CRC(ceph_pagelist_release, 0x2a983d26, "");
SYMBOL_CRC(ceph_pagelist_append, 0xefce991c, "");
SYMBOL_CRC(ceph_pagelist_reserve, 0xefce3c3b, "");
SYMBOL_CRC(ceph_pagelist_free_reserve, 0x165b1948, "");
SYMBOL_CRC(ceph_pagelist_set_cursor, 0xf03fe862, "");
SYMBOL_CRC(ceph_pagelist_truncate, 0xc366bfa1, "");
SYMBOL_CRC(ceph_monc_want_map, 0xbae879de, "");
SYMBOL_CRC(ceph_monc_got_map, 0x1900ed45, "");
SYMBOL_CRC(ceph_monc_renew_subs, 0x86bcb8e1, "");
SYMBOL_CRC(ceph_monc_wait_osdmap, 0x36c0935b, "");
SYMBOL_CRC(ceph_monc_open_session, 0x3630e713, "");
SYMBOL_CRC(ceph_monc_do_statfs, 0xbc222091, "");
SYMBOL_CRC(ceph_monc_get_version, 0x579da415, "");
SYMBOL_CRC(ceph_monc_get_version_async, 0x6d5e6dd7, "");
SYMBOL_CRC(ceph_monc_blocklist_add, 0x53a09619, "");
SYMBOL_CRC(ceph_monc_init, 0x3237bf57, "");
SYMBOL_CRC(ceph_monc_stop, 0x33e22e93, "");
SYMBOL_CRC(ceph_monc_validate_auth, 0xcc11cd7d, "");
SYMBOL_CRC(ceph_decode_entity_addr, 0xd4eb7735, "");
SYMBOL_CRC(ceph_decode_entity_addrvec, 0x50603ce3, "");
SYMBOL_CRC(ceph_cls_lock, 0x70b24373, "");
SYMBOL_CRC(ceph_cls_unlock, 0x36a89004, "");
SYMBOL_CRC(ceph_cls_break_lock, 0x719c0e36, "");
SYMBOL_CRC(ceph_cls_set_cookie, 0x817f28be, "");
SYMBOL_CRC(ceph_free_lockers, 0xa698f998, "");
SYMBOL_CRC(ceph_cls_lock_info, 0x8ad636de, "");
SYMBOL_CRC(ceph_cls_assert_locked, 0x891d1fbc, "");
SYMBOL_CRC(osd_req_op_extent_osd_data, 0xd624f6da, "");
SYMBOL_CRC(osd_req_op_raw_data_in_pages, 0x45515ccb, "");
SYMBOL_CRC(osd_req_op_extent_osd_data_pages, 0x97b2c597, "");
SYMBOL_CRC(osd_req_op_extent_osd_data_pagelist, 0xb8778299, "");
SYMBOL_CRC(osd_req_op_extent_osd_data_bio, 0x981f569c, "");
SYMBOL_CRC(osd_req_op_extent_osd_data_bvecs, 0xb5273925, "");
SYMBOL_CRC(osd_req_op_extent_osd_data_bvec_pos, 0xfac6c725, "");
SYMBOL_CRC(osd_req_op_extent_osd_iter, 0x09554fe4, "");
SYMBOL_CRC(osd_req_op_cls_request_data_pagelist, 0x3a621bd1, "");
SYMBOL_CRC(osd_req_op_cls_request_data_pages, 0x946f16e4, "");
SYMBOL_CRC(osd_req_op_cls_request_data_bvecs, 0x06f03067, "");
SYMBOL_CRC(osd_req_op_cls_response_data_pages, 0xafbcc13c, "");
SYMBOL_CRC(ceph_osdc_get_request, 0xd801fc56, "");
SYMBOL_CRC(ceph_osdc_put_request, 0xf4268d84, "");
SYMBOL_CRC(ceph_osdc_alloc_request, 0xdd02db5a, "");
SYMBOL_CRC(ceph_osdc_alloc_messages, 0x64a54529, "");
SYMBOL_CRC(osd_req_op_init, 0x50c6c672, "");
SYMBOL_CRC(osd_req_op_extent_init, 0x1a2350bd, "");
SYMBOL_CRC(osd_req_op_extent_update, 0x1871c571, "");
SYMBOL_CRC(osd_req_op_extent_dup_last, 0x7902410b, "");
SYMBOL_CRC(osd_req_op_cls_init, 0x0d5cc5fa, "");
SYMBOL_CRC(osd_req_op_xattr_init, 0x4ca725f9, "");
SYMBOL_CRC(osd_req_op_alloc_hint_init, 0x048e385c, "");
SYMBOL_CRC(ceph_osdc_new_request, 0xc2e8ccfe, "");
SYMBOL_CRC(__ceph_alloc_sparse_ext_map, 0xb6707bcb, "");
SYMBOL_CRC(ceph_osdc_abort_requests, 0x206a75e8, "");
SYMBOL_CRC(ceph_osdc_clear_abort_err, 0x67c72ced, "");
SYMBOL_CRC(ceph_osdc_update_epoch_barrier, 0xe80522d5, "");
SYMBOL_CRC(ceph_osdc_start_request, 0x37903c08, "");
SYMBOL_CRC(ceph_osdc_cancel_request, 0xcf5775f7, "");
SYMBOL_CRC(ceph_osdc_wait_request, 0xa45216fd, "");
SYMBOL_CRC(ceph_osdc_sync, 0xbb2d5700, "");
SYMBOL_CRC(ceph_osdc_watch, 0x3b4ae5bc, "");
SYMBOL_CRC(ceph_osdc_unwatch, 0xbe9161c6, "");
SYMBOL_CRC(ceph_osdc_notify_ack, 0x79a8f2c5, "");
SYMBOL_CRC(ceph_osdc_notify, 0x7d29ef7c, "");
SYMBOL_CRC(ceph_osdc_list_watchers, 0xa8424f19, "");
SYMBOL_CRC(ceph_osdc_flush_notifies, 0xe7e81414, "");
SYMBOL_CRC(ceph_osdc_maybe_request_map, 0xcb35ed15, "");
SYMBOL_CRC(ceph_osdc_call, 0x8694e911, "");
SYMBOL_CRC(osd_req_op_copy_from_init, 0x839a37fd, "");
SYMBOL_CRC(ceph_pg_pool_name_by_id, 0x1378aba3, "");
SYMBOL_CRC(ceph_pg_poolid_by_name, 0x04cad6f0, "");
SYMBOL_CRC(ceph_pg_pool_flags, 0x92b7b4ce, "");
SYMBOL_CRC(ceph_oloc_copy, 0xbd2f79ae, "");
SYMBOL_CRC(ceph_oloc_destroy, 0x417a9131, "");
SYMBOL_CRC(ceph_oid_copy, 0x2087719e, "");
SYMBOL_CRC(ceph_oid_printf, 0xdf6ef4a1, "");
SYMBOL_CRC(ceph_oid_aprintf, 0x5aeeee62, "");
SYMBOL_CRC(ceph_oid_destroy, 0x2101cbc9, "");
SYMBOL_CRC(ceph_object_locator_to_pg, 0xe34a59f2, "");
SYMBOL_CRC(ceph_pg_to_acting_primary, 0x17c17611, "");
SYMBOL_CRC(ceph_calc_file_object_mapping, 0x9fefa3cb, "");
SYMBOL_CRC(ceph_file_to_extents, 0x38f2d94e, "");
SYMBOL_CRC(ceph_iterate_extents, 0xeef6cfa3, "");
SYMBOL_CRC(ceph_extent_to_file, 0xca80437b, "");
SYMBOL_CRC(ceph_get_num_objects, 0x3c8d7111, "");
SYMBOL_CRC(ceph_auth_is_authenticated, 0x1bb1080c, "");
SYMBOL_CRC(__ceph_auth_get_authorizer, 0x136aaa95, "");
SYMBOL_CRC(ceph_auth_destroy_authorizer, 0xad703657, "");
SYMBOL_CRC(ceph_auth_add_authorizer_challenge, 0x40204a2b, "");
SYMBOL_CRC(ceph_auth_verify_authorizer_reply, 0x19743217, "");
SYMBOL_CRC(ceph_auth_invalidate_authorizer, 0x7a37b3e0, "");
SYMBOL_CRC(ceph_auth_get_authorizer, 0x997fc019, "");
SYMBOL_CRC(ceph_auth_handle_svc_reply_more, 0xa7c1aad8, "");
SYMBOL_CRC(ceph_auth_handle_svc_reply_done, 0x1ecfe44c, "");
SYMBOL_CRC(ceph_auth_handle_bad_authorizer, 0x5a23abd1, "");
SYMBOL_CRC(ceph_entity_type_name, 0xdfc091f9, "");
SYMBOL_CRC(ceph_str_hash, 0x57baf885, "");
SYMBOL_CRC(ceph_str_hash_name, 0x63758856, "");
SYMBOL_CRC(ceph_put_page_vector, 0xe94cd106, "");
SYMBOL_CRC(ceph_release_page_vector, 0xffae5fd3, "");
SYMBOL_CRC(ceph_alloc_page_vector, 0x57c05a86, "");
SYMBOL_CRC(ceph_copy_user_to_page_vector, 0x2c78b6c1, "");
SYMBOL_CRC(ceph_copy_to_page_vector, 0x5b3773d1, "");
SYMBOL_CRC(ceph_copy_from_page_vector, 0xcfd42a20, "");
SYMBOL_CRC(ceph_zero_page_vector_range, 0x5cc3e47d, "");
SYMBOL_CRC(ceph_create_snap_context, 0x9ca95932, "");
SYMBOL_CRC(ceph_get_snap_context, 0xbe3879aa, "");
SYMBOL_CRC(ceph_put_snap_context, 0x86fca7e4, "");
SYMBOL_CRC(ceph_find_or_create_string, 0x9bc6b539, "");
SYMBOL_CRC(ceph_release_string, 0xee120c03, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5c7569ec, "crypto_skcipher_encrypt" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xddf6ad7a, "completion_done" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x222ce5ee, "tcp_sock_set_cork" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x78b887ed, "vsprintf" },
	{ 0xfba7a5f5, "__get_random_u32_below" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x3b323072, "fs_param_is_string" },
	{ 0xa08b6b7a, "vmalloc_to_page" },
	{ 0xb0e602eb, "memmove" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa85bbe00, "__SCT__tp_func_sk_data_ready" },
	{ 0xc8c85086, "sg_free_table" },
	{ 0xca9360b5, "rb_next" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3ad845f0, "iov_iter_advance" },
	{ 0x609bcd98, "in6_pton" },
	{ 0xf2a9a34b, "unregister_key_type" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x402c3f50, "iov_iter_get_pages2" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x43babd19, "sg_init_one" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x80340e17, "seq_lseek" },
	{ 0xe6700c7c, "fs_param_is_enum" },
	{ 0x435353c0, "logfc" },
	{ 0x7a53770b, "__put_devmap_managed_page_refs" },
	{ 0x666d1046, "crypto_alloc_aead" },
	{ 0xdc0192a7, "__tracepoint_sk_data_ready" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2384317, "crypto_aead_setauthsize" },
	{ 0xc4fe251, "crypto_aead_decrypt" },
	{ 0xe2964344, "__wake_up" },
	{ 0x5f4dab15, "crypto_skcipher_setkey" },
	{ 0x148653, "vsnprintf" },
	{ 0x3754fb97, "kmem_cache_create" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x100b6bda, "register_key_type" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x14fc6972, "crypto_destroy_tfm" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x9f1203da, "fs_param_is_u32" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1953c958, "mempool_create" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x674fa89c, "filemap_alloc_folio" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x6905d5f8, "crypto_skcipher_decrypt" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x3e0d2746, "__free_pages" },
	{ 0x3cfdd46f, "kmem_cache_alloc" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xb3f985a8, "sg_alloc_table" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0x5014e2, "dns_query" },
	{ 0x3182ec5d, "seq_escape_mem" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x851725d3, "key_put" },
	{ 0x44aeae89, "crypto_aead_setkey" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x57bc19d2, "down_write" },
	{ 0xa8e458b, "crypto_req_done" },
	{ 0xce807a25, "up_write" },
	{ 0x5a5266, "crypto_shash_setkey" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0xa07a37f0, "memchr" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0xe94ef447, "crypto_aead_encrypt" },
	{ 0xda959b0f, "__SCK__tp_func_sk_data_ready" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4ebf36a1, "kmem_cache_free" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x1840543b, "debugfs_remove" },
	{ 0x5a921311, "strncmp" },
	{ 0x4be84ba, "seq_putc" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x2a718f47, "iov_iter_kvec" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x868de3a9, "sock_sendmsg" },
	{ 0x8489949a, "crypto_shash_update" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x20463df4, "wait_for_completion_killable" },
	{ 0x11089ac7, "_ctype" },
	{ 0x14b9592, "tcp_stream_memory_free" },
	{ 0xad79c521, "sg_alloc_table_from_pages_segment" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xa49408df, "kernel_connect" },
	{ 0xfb578fc5, "memset" },
	{ 0x8c3f85ca, "iov_iter_bvec" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xece784c2, "rb_first" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x21adc399, "crypto_alloc_sync_skcipher" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2c402ac1, "seq_read" },
	{ 0xa8b21c85, "__put_net" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb15b4109, "crc32c" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xa940cb6c, "debugfs_create_file" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xde1fa7a3, "crypto_shash_final" },
	{ 0x85df9b6c, "strsep" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xb3824a12, "sock_create_kern" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x726bc3c7, "wait_for_completion_killable_timeout" },
	{ 0x40628c4a, "request_key_tag" },
	{ 0xf97a77c8, "alloc_pages" },
	{ 0xfbe215e4, "sg_next" },
	{ 0x9fea17e7, "generic_key_instantiate" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0xf8641358, "__folio_put" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0x13fe5644, "seq_printf" },
	{ 0xa6645c69, "sock_recvmsg" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x487d9d31, "set_page_dirty_lock" },
	{ 0x26ed65de, "sock_release" },
	{ 0x92e3c42f, "iov_iter_discard" },
	{ 0x18888d00, "downgrade_write" },
	{ 0x8cf244f1, "seq_puts" },
	{ 0x14f55ccf, "single_release" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xf1d58f0, "tcp_sock_set_nodelay" },
	{ 0xe85e053a, "__fs_parse" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x754d539c, "strlen" },
	{ 0x742578a5, "wait_for_random_bytes" },
	{ 0x4d160fd7, "iov_iter_revert" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0xf54b7f27, "single_open" },
	{ 0x349cba85, "strchr" },
	{ 0x148d5a95, "crypto_alloc_shash" },
	{ 0xfe67de01, "debugfs_create_dir" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf7607ba5, "kernel_sendmsg" },
	{ 0x53b954a2, "up_read" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x560cd29a, "kmem_cache_destroy" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x188ea314, "jiffies_to_timespec64" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "libcrc32c");


MODULE_INFO(srcversion, "225D87A141DC57B91889DD7");
