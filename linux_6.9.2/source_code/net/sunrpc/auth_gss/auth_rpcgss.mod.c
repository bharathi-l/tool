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

KSYMTAB_FUNC(g_token_size, "_gpl", "");
KSYMTAB_FUNC(g_make_token_header, "_gpl", "");
KSYMTAB_FUNC(g_verify_token_header, "_gpl", "");
KSYMTAB_FUNC(gss_mech_register, "_gpl", "");
KSYMTAB_FUNC(gss_mech_unregister, "_gpl", "");
KSYMTAB_FUNC(gss_mech_get, "", "");
KSYMTAB_FUNC(gss_pseudoflavor_to_service, "", "");
KSYMTAB_FUNC(gss_mech_put, "", "");
KSYMTAB_FUNC(svcauth_gss_flavor, "_gpl", "");
KSYMTAB_FUNC(svcauth_gss_register_pseudoflavor, "_gpl", "");

SYMBOL_CRC(g_token_size, 0x482ac5a4, "_gpl");
SYMBOL_CRC(g_make_token_header, 0x38d3dce5, "_gpl");
SYMBOL_CRC(g_verify_token_header, 0xd7673035, "_gpl");
SYMBOL_CRC(gss_mech_register, 0xefa0ece1, "_gpl");
SYMBOL_CRC(gss_mech_unregister, 0xa6d88c4e, "_gpl");
SYMBOL_CRC(gss_mech_get, 0x8ca516e6, "");
SYMBOL_CRC(gss_pseudoflavor_to_service, 0x9bf1c329, "");
SYMBOL_CRC(gss_mech_put, 0x2601129d, "");
SYMBOL_CRC(svcauth_gss_flavor, 0x0508138c, "_gpl");
SYMBOL_CRC(svcauth_gss_register_pseudoflavor, 0x4ca93ba6, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3e697278, "rpc_put_task" },
	{ 0xef464c28, "getboottime64" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x18f58619, "try_module_get" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xfb43c0, "rpc_find_or_alloc_pipe_dir_object" },
	{ 0xfdc18492, "xdr_buf_from_iov" },
	{ 0x6048275b, "bpf_trace_run4" },
	{ 0x74c7e785, "xdr_stream_decode_opaque_auth" },
	{ 0xd786c3ef, "param_ops_uint" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xb55009c2, "xdr_write_pages" },
	{ 0x864aecb6, "rpc_shutdown_client" },
	{ 0x5b1b3bca, "auth_domain_find" },
	{ 0xb0e602eb, "memmove" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcf408ed6, "xdr_inline_decode" },
	{ 0x98fe30da, "cache_create_net" },
	{ 0x6ac84e66, "rpcauth_destroy_credcache" },
	{ 0x4c63d9dd, "trace_raw_output_prep" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x91c81571, "bpf_trace_run6" },
	{ 0x6638890, "rpc_net_ns" },
	{ 0x29cc7090, "read_bytes_from_xdr_buf" },
	{ 0x2b8ff6d1, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xbc773afc, "rpc_wake_up" },
	{ 0xb3e272c9, "trace_event_printf" },
	{ 0x96848186, "scnprintf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x27c64849, "sunrpc_cache_lookup_rcu" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x8959d336, "trace_event_raw_init" },
	{ 0x8900d05a, "trace_print_symbols_seq" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xfc201b66, "sprint_oid" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x4e8f6ca7, "sunrpc_net_id" },
	{ 0x7a53770b, "__put_devmap_managed_page_refs" },
	{ 0x32a7416d, "proc_create_data" },
	{ 0xbbcec0b7, "groups_alloc" },
	{ 0xcf7b3b54, "bpf_trace_run2" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x56042c0a, "xdr_truncate_decode" },
	{ 0x90b99bf1, "rpcauth_unregister" },
	{ 0xe2964344, "__wake_up" },
	{ 0x8743b55d, "__xdr_commit_encode" },
	{ 0xdc2b2807, "__module_get" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xf9bfcfde, "rpc_sleep_on" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6a1e0cf0, "__put_cred" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0xcc7c3ecf, "trace_event_buffer_commit" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5359e672, "cache_purge" },
	{ 0x122c3a7e, "_printk" },
	{ 0x94ce1174, "rpc_release_client" },
	{ 0xfc4c0edb, "auth_domain_lookup" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd6df622e, "rpc_wake_up_status" },
	{ 0x4dac77f0, "xdr_encode_netobj" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x96010a5b, "svc_auth_register" },
	{ 0xf8ae94be, "xdr_stream_encode_opaque_auth" },
	{ 0x1da035f6, "make_kuid" },
	{ 0xa916b694, "strnlen" },
	{ 0x2648246f, "rpc_destroy_pipe_data" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x3e0d2746, "__free_pages" },
	{ 0x1d0c0bc7, "rpc_pipe_generic_upcall" },
	{ 0xd47a039c, "module_put" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x365e7911, "kstrdup_const" },
	{ 0xeb90981, "cache_unregister_net" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0x69e07491, "sunrpc_cache_unhash" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0xabcc6fb8, "perf_trace_run_bpf_submit" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x2c487cc6, "rpcauth_lookup_credcache" },
	{ 0xc8e96dea, "qword_addhex" },
	{ 0xb3f548ad, "kmemdup_nul" },
	{ 0xe97f4ce5, "qword_get" },
	{ 0x948fa664, "rpcauth_init_credcache" },
	{ 0x1f75c11c, "sunrpc_cache_pipe_upcall_timeout" },
	{ 0x889aeda2, "xdr_init_decode" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa66f7ccc, "trace_event_reg" },
	{ 0xd1c0134f, "rpc_call_null" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x783362fa, "rpc_sleep_on_timeout" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xea00e9bb, "rpc_create" },
	{ 0x66c4f5f8, "bpf_trace_run1" },
	{ 0x390693ff, "rpc_call_sync" },
	{ 0x8dbdd0ba, "from_kuid" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0xaf9dc47c, "rpc_queue_upcall" },
	{ 0xbad514dd, "xdr_encode_word" },
	{ 0xfb578fc5, "memset" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xbfee3f5a, "cache_check" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x31a89d59, "rpc_debug" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x2c9c8f7d, "svcauth_unix_set_client" },
	{ 0xd428ef05, "xdr_buf_subsegment" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcf4fdd4d, "_atomic_dec_and_lock" },
	{ 0x88313973, "make_kgid" },
	{ 0x84345348, "rpc_remove_pipe_dir_object" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf474fdcb, "kfree_const" },
	{ 0xfb2226e5, "xdr_reserve_space" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9f76258d, "nonseekable_open" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xfaf0475b, "bpf_trace_run3" },
	{ 0xa8b21c85, "__put_net" },
	{ 0x94c62eb0, "trace_print_flags_seq" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x78bca403, "rpc_mkpipe_dentry" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x623572f0, "rpc_mkpipe_data" },
	{ 0xc7fdda67, "gssd_running" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x2bc629e5, "trace_event_buffer_reserve" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5f4a905c, "groups_free" },
	{ 0xa2da2ee3, "cache_register_net" },
	{ 0x65441f22, "init_user_ns" },
	{ 0xf97a77c8, "alloc_pages" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xdeeb2fe9, "xdr_inline_pages" },
	{ 0xf8641358, "__folio_put" },
	{ 0x63fd798c, "remove_proc_entry" },
	{ 0x56470118, "__warn_printk" },
	{ 0x5a45ba31, "svc_auth_unregister" },
	{ 0x101529e2, "rpc_init_wait_queue" },
	{ 0x164c2d77, "put_rpccred" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xb911c42e, "rpc_unlink" },
	{ 0x794f3177, "rpcauth_wrap_req_encode" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xf1307bf8, "groups_sort" },
	{ 0x2788847d, "from_kuid_munged" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x1b84bbdf, "rpcauth_init_cred" },
	{ 0xd0b6368, "xdr_decode_word" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xe977b40b, "cache_destroy_net" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x754d539c, "strlen" },
	{ 0xa676fcb4, "rpc_init_pipe_dir_object" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x349cba85, "strchr" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x856c22a7, "xdr_stream_pos" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x609202f9, "rpc_task_gfp_mask" },
	{ 0x76fcec74, "sunrpc_cache_update" },
	{ 0x17b05dc8, "xdr_truncate_encode" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x5b2a5b3, "rpc_destroy_wait_queue" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x10ade6af, "auth_domain_put" },
	{ 0x24c38d38, "rpcauth_unwrap_resp_decode" },
	{ 0xec7ebfb9, "rpcauth_register" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "sunrpc");


MODULE_INFO(srcversion, "61B52D635DC7A93AEF3C998");
