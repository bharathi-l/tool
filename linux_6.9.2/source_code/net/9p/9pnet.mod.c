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

KSYMTAB_FUNC(v9fs_register_trans, "", "");
KSYMTAB_FUNC(v9fs_unregister_trans, "", "");
KSYMTAB_FUNC(v9fs_get_trans_by_name, "", "");
KSYMTAB_FUNC(v9fs_get_default_trans, "", "");
KSYMTAB_FUNC(p9_is_proto_dotl, "", "");
KSYMTAB_FUNC(p9_is_proto_dotu, "", "");
KSYMTAB_FUNC(p9_show_client_options, "", "");
KSYMTAB_FUNC(p9_fcall_fini, "", "");
KSYMTAB_FUNC(p9_tag_lookup, "", "");
KSYMTAB_FUNC(p9_req_put, "", "");
KSYMTAB_FUNC(p9_client_cb, "", "");
KSYMTAB_FUNC(p9_parse_header, "", "");
KSYMTAB_DATA(__tracepoint_9p_fid_ref, "", "");
KSYMTAB_FUNC(__traceiter_9p_fid_ref, "", "");
KSYMTAB_DATA(__SCK__tp_func_9p_fid_ref, "", "");
KSYMTAB_FUNC(__SCT__tp_func_9p_fid_ref, "", "");
KSYMTAB_FUNC(do_trace_9p_fid_get, "", "");
KSYMTAB_FUNC(do_trace_9p_fid_put, "", "");
KSYMTAB_FUNC(p9_client_create, "", "");
KSYMTAB_FUNC(p9_client_destroy, "", "");
KSYMTAB_FUNC(p9_client_disconnect, "", "");
KSYMTAB_FUNC(p9_client_begin_disconnect, "", "");
KSYMTAB_FUNC(p9_client_attach, "", "");
KSYMTAB_FUNC(p9_client_walk, "", "");
KSYMTAB_FUNC(p9_client_open, "", "");
KSYMTAB_FUNC(p9_client_create_dotl, "", "");
KSYMTAB_FUNC(p9_client_fcreate, "", "");
KSYMTAB_FUNC(p9_client_symlink, "", "");
KSYMTAB_FUNC(p9_client_link, "", "");
KSYMTAB_FUNC(p9_client_fsync, "", "");
KSYMTAB_FUNC(p9_client_clunk, "", "");
KSYMTAB_FUNC(p9_client_remove, "", "");
KSYMTAB_FUNC(p9_client_unlinkat, "", "");
KSYMTAB_FUNC(p9_client_read, "", "");
KSYMTAB_FUNC(p9_client_read_once, "", "");
KSYMTAB_FUNC(p9_client_write, "", "");
KSYMTAB_FUNC(p9_client_stat, "", "");
KSYMTAB_FUNC(p9_client_getattr_dotl, "", "");
KSYMTAB_FUNC(p9_client_wstat, "", "");
KSYMTAB_FUNC(p9_client_setattr, "", "");
KSYMTAB_FUNC(p9_client_statfs, "", "");
KSYMTAB_FUNC(p9_client_rename, "", "");
KSYMTAB_FUNC(p9_client_renameat, "", "");
KSYMTAB_FUNC(p9_client_xattrwalk, "_gpl", "");
KSYMTAB_FUNC(p9_client_xattrcreate, "_gpl", "");
KSYMTAB_FUNC(p9_client_readdir, "", "");
KSYMTAB_FUNC(p9_client_mknod_dotl, "", "");
KSYMTAB_FUNC(p9_client_mkdir_dotl, "", "");
KSYMTAB_FUNC(p9_client_lock_dotl, "", "");
KSYMTAB_FUNC(p9_client_getlock_dotl, "", "");
KSYMTAB_FUNC(p9_client_readlink, "", "");
KSYMTAB_FUNC(p9_error_init, "", "");
KSYMTAB_FUNC(p9_errstr2errno, "", "");
KSYMTAB_FUNC(p9stat_free, "", "");
KSYMTAB_FUNC(p9stat_read, "", "");
KSYMTAB_FUNC(p9dirent_read, "", "");
KSYMTAB_FUNC(p9_release_pages, "", "");

SYMBOL_CRC(v9fs_register_trans, 0x90413ff5, "");
SYMBOL_CRC(v9fs_unregister_trans, 0x7a2f4b59, "");
SYMBOL_CRC(v9fs_get_trans_by_name, 0x0df62bb0, "");
SYMBOL_CRC(v9fs_get_default_trans, 0x5372e239, "");
SYMBOL_CRC(p9_is_proto_dotl, 0xab3e09f4, "");
SYMBOL_CRC(p9_is_proto_dotu, 0x8abd459d, "");
SYMBOL_CRC(p9_show_client_options, 0x325f0055, "");
SYMBOL_CRC(p9_fcall_fini, 0x4ba99359, "");
SYMBOL_CRC(p9_tag_lookup, 0x8b587f29, "");
SYMBOL_CRC(p9_req_put, 0x0f2f726c, "");
SYMBOL_CRC(p9_client_cb, 0xc1accc89, "");
SYMBOL_CRC(p9_parse_header, 0x761cad64, "");
SYMBOL_CRC(__tracepoint_9p_fid_ref, 0x902f127b, "");
SYMBOL_CRC(__traceiter_9p_fid_ref, 0x35d12bb5, "");
SYMBOL_CRC(__SCK__tp_func_9p_fid_ref, 0xb7aa947c, "");
SYMBOL_CRC(__SCT__tp_func_9p_fid_ref, 0xb798a888, "");
SYMBOL_CRC(do_trace_9p_fid_get, 0x2532a798, "");
SYMBOL_CRC(do_trace_9p_fid_put, 0xee3db511, "");
SYMBOL_CRC(p9_client_create, 0xa3939c14, "");
SYMBOL_CRC(p9_client_destroy, 0xd644d9a6, "");
SYMBOL_CRC(p9_client_disconnect, 0x213fe98f, "");
SYMBOL_CRC(p9_client_begin_disconnect, 0x0a83de36, "");
SYMBOL_CRC(p9_client_attach, 0xbae3b6ee, "");
SYMBOL_CRC(p9_client_walk, 0x54ffa304, "");
SYMBOL_CRC(p9_client_open, 0x2e81fcc0, "");
SYMBOL_CRC(p9_client_create_dotl, 0xe54f77b7, "");
SYMBOL_CRC(p9_client_fcreate, 0x6940afe1, "");
SYMBOL_CRC(p9_client_symlink, 0x07b5bfc9, "");
SYMBOL_CRC(p9_client_link, 0x7289d56d, "");
SYMBOL_CRC(p9_client_fsync, 0xfbd7c787, "");
SYMBOL_CRC(p9_client_clunk, 0x4790c2d9, "");
SYMBOL_CRC(p9_client_remove, 0xe806c893, "");
SYMBOL_CRC(p9_client_unlinkat, 0xff7028f2, "");
SYMBOL_CRC(p9_client_read, 0xd83d3897, "");
SYMBOL_CRC(p9_client_read_once, 0xa5bbdd5d, "");
SYMBOL_CRC(p9_client_write, 0x5daa83ba, "");
SYMBOL_CRC(p9_client_stat, 0xd518fe0b, "");
SYMBOL_CRC(p9_client_getattr_dotl, 0xf9e43c9b, "");
SYMBOL_CRC(p9_client_wstat, 0x567bfd95, "");
SYMBOL_CRC(p9_client_setattr, 0xff90c69f, "");
SYMBOL_CRC(p9_client_statfs, 0x2813e44c, "");
SYMBOL_CRC(p9_client_rename, 0x53eb0cec, "");
SYMBOL_CRC(p9_client_renameat, 0x4f428977, "");
SYMBOL_CRC(p9_client_xattrwalk, 0x3f470d9a, "_gpl");
SYMBOL_CRC(p9_client_xattrcreate, 0x0be84cc1, "_gpl");
SYMBOL_CRC(p9_client_readdir, 0xe5e2937f, "");
SYMBOL_CRC(p9_client_mknod_dotl, 0xb7ccbdf5, "");
SYMBOL_CRC(p9_client_mkdir_dotl, 0x8a2e5912, "");
SYMBOL_CRC(p9_client_lock_dotl, 0x78e009f6, "");
SYMBOL_CRC(p9_client_getlock_dotl, 0xea7f94ab, "");
SYMBOL_CRC(p9_client_readlink, 0x7a1bec75, "");
SYMBOL_CRC(p9_error_init, 0xe58a3360, "");
SYMBOL_CRC(p9_errstr2errno, 0x3d73a797, "");
SYMBOL_CRC(p9stat_free, 0xd384c683, "");
SYMBOL_CRC(p9stat_read, 0x41ce9823, "");
SYMBOL_CRC(p9dirent_read, 0x95bd8f96, "");
SYMBOL_CRC(p9_release_pages, 0xd0700275, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x18f58619, "try_module_get" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xd657ce1f, "_copy_to_iter" },
	{ 0x6048275b, "bpf_trace_run4" },
	{ 0x20978fb9, "idr_find" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xb0e602eb, "memmove" },
	{ 0xd9916c3a, "idr_alloc_u32" },
	{ 0x4c63d9dd, "trace_raw_output_prep" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x2b8ff6d1, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xb3e272c9, "trace_event_printf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x8959d336, "trace_event_raw_init" },
	{ 0x8900d05a, "trace_print_symbols_seq" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x7a53770b, "__put_devmap_managed_page_refs" },
	{ 0xcf7b3b54, "bpf_trace_run2" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x3754fb97, "kmem_cache_create" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcc7c3ecf, "trace_event_buffer_commit" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x1da035f6, "make_kuid" },
	{ 0xa916b694, "strnlen" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x3cfdd46f, "kmem_cache_alloc" },
	{ 0xd47a039c, "module_put" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0xabcc6fb8, "perf_trace_run_bpf_submit" },
	{ 0x4e3567f7, "match_int" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xc5c08702, "kmem_cache_create_usercopy" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x954f099c, "idr_preload" },
	{ 0x4ebf36a1, "kmem_cache_free" },
	{ 0x5a921311, "strncmp" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x23477cad, "from_kgid" },
	{ 0xa66f7ccc, "trace_event_reg" },
	{ 0x2a718f47, "iov_iter_kvec" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x8dbdd0ba, "from_kuid" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x88313973, "make_kgid" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xfaf0475b, "bpf_trace_run3" },
	{ 0x2bc629e5, "trace_event_buffer_reserve" },
	{ 0x85df9b6c, "strsep" },
	{ 0x65441f22, "init_user_ns" },
	{ 0x44e9a829, "match_token" },
	{ 0xf8641358, "__folio_put" },
	{ 0x13fe5644, "seq_printf" },
	{ 0x15bcc2d9, "_copy_from_iter" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x8cf244f1, "seq_puts" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x754d539c, "strlen" },
	{ 0x4d160fd7, "iov_iter_revert" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x560cd29a, "kmem_cache_destroy" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "ECA48E3F314D187771EC8BA");
