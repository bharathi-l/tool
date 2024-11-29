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

KSYMTAB_FUNC(xt_register_target, "", "");
KSYMTAB_FUNC(xt_unregister_target, "", "");
KSYMTAB_FUNC(xt_register_targets, "", "");
KSYMTAB_FUNC(xt_unregister_targets, "", "");
KSYMTAB_FUNC(xt_register_match, "", "");
KSYMTAB_FUNC(xt_unregister_match, "", "");
KSYMTAB_FUNC(xt_register_matches, "", "");
KSYMTAB_FUNC(xt_unregister_matches, "", "");
KSYMTAB_FUNC(xt_find_match, "", "");
KSYMTAB_FUNC(xt_request_find_match, "_gpl", "");
KSYMTAB_FUNC(xt_request_find_target, "_gpl", "");
KSYMTAB_FUNC(xt_data_to_user, "_gpl", "");
KSYMTAB_FUNC(xt_match_to_user, "_gpl", "");
KSYMTAB_FUNC(xt_target_to_user, "_gpl", "");
KSYMTAB_FUNC(xt_find_revision, "_gpl", "");
KSYMTAB_FUNC(xt_check_proc_name, "", "");
KSYMTAB_FUNC(xt_check_match, "_gpl", "");
KSYMTAB_FUNC(xt_check_table_hooks, "", "");
KSYMTAB_FUNC(xt_compat_add_offset, "_gpl", "");
KSYMTAB_FUNC(xt_compat_flush_offsets, "_gpl", "");
KSYMTAB_FUNC(xt_compat_calc_jump, "_gpl", "");
KSYMTAB_FUNC(xt_compat_init_offsets, "", "");
KSYMTAB_FUNC(xt_compat_match_offset, "_gpl", "");
KSYMTAB_FUNC(xt_compat_match_from_user, "_gpl", "");
KSYMTAB_FUNC(xt_compat_match_to_user, "_gpl", "");
KSYMTAB_FUNC(xt_compat_check_entry_offsets, "", "");
KSYMTAB_FUNC(xt_check_entry_offsets, "", "");
KSYMTAB_FUNC(xt_alloc_entry_offsets, "", "");
KSYMTAB_FUNC(xt_find_jump_offset, "", "");
KSYMTAB_FUNC(xt_check_target, "_gpl", "");
KSYMTAB_FUNC(xt_copy_counters, "_gpl", "");
KSYMTAB_FUNC(xt_compat_target_offset, "_gpl", "");
KSYMTAB_FUNC(xt_compat_target_from_user, "_gpl", "");
KSYMTAB_FUNC(xt_compat_target_to_user, "_gpl", "");
KSYMTAB_FUNC(xt_alloc_table_info, "", "");
KSYMTAB_FUNC(xt_free_table_info, "", "");
KSYMTAB_FUNC(xt_find_table, "", "");
KSYMTAB_FUNC(xt_find_table_lock, "_gpl", "");
KSYMTAB_FUNC(xt_request_find_table_lock, "_gpl", "");
KSYMTAB_FUNC(xt_table_unlock, "_gpl", "");
KSYMTAB_FUNC(xt_compat_lock, "_gpl", "");
KSYMTAB_FUNC(xt_compat_unlock, "_gpl", "");
KSYMTAB_DATA(xt_recseq, "_gpl", "");
KSYMTAB_DATA(xt_tee_enabled, "_gpl", "");
KSYMTAB_FUNC(xt_counters_alloc, "", "");
KSYMTAB_FUNC(xt_replace_table, "_gpl", "");
KSYMTAB_FUNC(xt_register_table, "_gpl", "");
KSYMTAB_FUNC(xt_unregister_table, "_gpl", "");
KSYMTAB_FUNC(xt_hook_ops_alloc, "_gpl", "");
KSYMTAB_FUNC(xt_register_template, "_gpl", "");
KSYMTAB_FUNC(xt_unregister_template, "_gpl", "");
KSYMTAB_FUNC(xt_proto_init, "_gpl", "");
KSYMTAB_FUNC(xt_proto_fini, "_gpl", "");
KSYMTAB_FUNC(xt_percpu_counter_alloc, "_gpl", "");
KSYMTAB_FUNC(xt_percpu_counter_free, "_gpl", "");

SYMBOL_CRC(xt_register_target, 0xaf80cbda, "");
SYMBOL_CRC(xt_unregister_target, 0xda994d2e, "");
SYMBOL_CRC(xt_register_targets, 0x17449d4d, "");
SYMBOL_CRC(xt_unregister_targets, 0x43aca7d5, "");
SYMBOL_CRC(xt_register_match, 0xc188b0d7, "");
SYMBOL_CRC(xt_unregister_match, 0x38f6f150, "");
SYMBOL_CRC(xt_register_matches, 0xe25b8c15, "");
SYMBOL_CRC(xt_unregister_matches, 0xd4363de3, "");
SYMBOL_CRC(xt_find_match, 0x1e80acf0, "");
SYMBOL_CRC(xt_request_find_match, 0xf0a64cb3, "_gpl");
SYMBOL_CRC(xt_request_find_target, 0x46e76f96, "_gpl");
SYMBOL_CRC(xt_data_to_user, 0x7bce4603, "_gpl");
SYMBOL_CRC(xt_match_to_user, 0x35f0d029, "_gpl");
SYMBOL_CRC(xt_target_to_user, 0x8168c062, "_gpl");
SYMBOL_CRC(xt_find_revision, 0xddf68fc6, "_gpl");
SYMBOL_CRC(xt_check_proc_name, 0x48012e28, "");
SYMBOL_CRC(xt_check_match, 0x1ab4f4c3, "_gpl");
SYMBOL_CRC(xt_check_table_hooks, 0x3bf9d084, "");
SYMBOL_CRC(xt_compat_add_offset, 0x823edea5, "_gpl");
SYMBOL_CRC(xt_compat_flush_offsets, 0x04e27719, "_gpl");
SYMBOL_CRC(xt_compat_calc_jump, 0xc7fae024, "_gpl");
SYMBOL_CRC(xt_compat_init_offsets, 0x50873741, "");
SYMBOL_CRC(xt_compat_match_offset, 0x9ae592d9, "_gpl");
SYMBOL_CRC(xt_compat_match_from_user, 0x4de686b7, "_gpl");
SYMBOL_CRC(xt_compat_match_to_user, 0x882dcdda, "_gpl");
SYMBOL_CRC(xt_compat_check_entry_offsets, 0xa25fc115, "");
SYMBOL_CRC(xt_check_entry_offsets, 0xd87ae60d, "");
SYMBOL_CRC(xt_alloc_entry_offsets, 0x0d7f5fcd, "");
SYMBOL_CRC(xt_find_jump_offset, 0xfef779fa, "");
SYMBOL_CRC(xt_check_target, 0x49da240b, "_gpl");
SYMBOL_CRC(xt_copy_counters, 0xf6abeb06, "_gpl");
SYMBOL_CRC(xt_compat_target_offset, 0x46a0d0b0, "_gpl");
SYMBOL_CRC(xt_compat_target_from_user, 0x9145a5a6, "_gpl");
SYMBOL_CRC(xt_compat_target_to_user, 0x62bc2176, "_gpl");
SYMBOL_CRC(xt_alloc_table_info, 0x977fd4bf, "");
SYMBOL_CRC(xt_free_table_info, 0xe204e042, "");
SYMBOL_CRC(xt_find_table, 0x9cbd9f56, "");
SYMBOL_CRC(xt_find_table_lock, 0x00941faa, "_gpl");
SYMBOL_CRC(xt_request_find_table_lock, 0x41ce894f, "_gpl");
SYMBOL_CRC(xt_table_unlock, 0xf3e075ec, "_gpl");
SYMBOL_CRC(xt_compat_lock, 0xa7c94f1d, "_gpl");
SYMBOL_CRC(xt_compat_unlock, 0xd1e246a2, "_gpl");
SYMBOL_CRC(xt_recseq, 0x807d2b2c, "_gpl");
SYMBOL_CRC(xt_tee_enabled, 0xd3fcc511, "_gpl");
SYMBOL_CRC(xt_counters_alloc, 0xcb3e91cc, "");
SYMBOL_CRC(xt_replace_table, 0xd258f16d, "_gpl");
SYMBOL_CRC(xt_register_table, 0xde9807b1, "_gpl");
SYMBOL_CRC(xt_unregister_table, 0xcdbf3594, "_gpl");
SYMBOL_CRC(xt_hook_ops_alloc, 0x0c681fb0, "_gpl");
SYMBOL_CRC(xt_register_template, 0xc6d0c81e, "_gpl");
SYMBOL_CRC(xt_unregister_template, 0xf5fc9d43, "_gpl");
SYMBOL_CRC(xt_proto_init, 0xf96db03c, "_gpl");
SYMBOL_CRC(xt_proto_fini, 0x7d645a75, "_gpl");
SYMBOL_CRC(xt_percpu_counter_alloc, 0x9c995c69, "_gpl");
SYMBOL_CRC(xt_percpu_counter_free, 0xbfacb837, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa916b694, "strnlen" },
	{ 0x18f58619, "try_module_get" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0x754d539c, "strlen" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x349cba85, "strchr" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x999e8297, "vfree" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xd47a039c, "module_put" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0x37a0cba, "kfree" },
	{ 0x5afc722e, "__audit_log_nfcfg" },
	{ 0x1da035f6, "make_kuid" },
	{ 0x88313973, "make_kgid" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x65f11366, "proc_create_net_data" },
	{ 0xf1e1c4c6, "proc_create_seq_private" },
	{ 0xe920511e, "proc_set_user" },
	{ 0x63fd798c, "remove_proc_entry" },
	{ 0x13fe5644, "seq_printf" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0xff1e9dd8, "seq_list_start" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x69acdf38, "memcpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xabf53b48, "rep_stos_alternative" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0x618911fc, "numa_node" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4BFBBE2F1C37D7DDBE83EE5");
