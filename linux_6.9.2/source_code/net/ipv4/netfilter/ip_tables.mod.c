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

KSYMTAB_FUNC(ipt_alloc_initial_table, "_gpl", "");
KSYMTAB_FUNC(ipt_register_table, "", "");
KSYMTAB_FUNC(ipt_unregister_table_pre_exit, "", "");
KSYMTAB_FUNC(ipt_unregister_table_exit, "", "");
KSYMTAB_FUNC(ipt_do_table, "", "");

SYMBOL_CRC(ipt_alloc_initial_table, 0x0a2b9e22, "_gpl");
SYMBOL_CRC(ipt_register_table, 0xcbd425aa, "");
SYMBOL_CRC(ipt_unregister_table_pre_exit, 0xde9d71e3, "");
SYMBOL_CRC(ipt_unregister_table_exit, 0xbe85c16a, "");
SYMBOL_CRC(ipt_do_table, 0x28e174b4, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf96db03c, "xt_proto_init" },
	{ 0xaf4f0d7f, "nf_unregister_sockopt" },
	{ 0x50873741, "xt_compat_init_offsets" },
	{ 0x9ae592d9, "xt_compat_match_offset" },
	{ 0x46a0d0b0, "xt_compat_target_offset" },
	{ 0x823edea5, "xt_compat_add_offset" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x41ce894f, "xt_request_find_table_lock" },
	{ 0xa916b694, "strnlen" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf3e075ec, "xt_table_unlock" },
	{ 0xd47a039c, "module_put" },
	{ 0xd1e246a2, "xt_compat_unlock" },
	{ 0xa7c94f1d, "xt_compat_lock" },
	{ 0x4e27719, "xt_compat_flush_offsets" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x9c995c69, "xt_percpu_counter_alloc" },
	{ 0xf0a64cb3, "xt_request_find_match" },
	{ 0x1ab4f4c3, "xt_check_match" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xbfacb837, "xt_percpu_counter_free" },
	{ 0x46e76f96, "xt_request_find_target" },
	{ 0x49da240b, "xt_check_target" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x807d2b2c, "xt_recseq" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x941faa, "xt_find_table_lock" },
	{ 0x882dcdda, "xt_compat_match_to_user" },
	{ 0x999e8297, "vfree" },
	{ 0x62bc2176, "xt_compat_target_to_user" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0x863b8d86, "ns_capable" },
	{ 0xddf68fc6, "xt_find_revision" },
	{ 0x35f0d029, "xt_match_to_user" },
	{ 0x8168c062, "xt_target_to_user" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xd3fcc511, "xt_tee_enabled" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x70c52dc5, "nf_skb_duplicated" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf26e277b, "nf_log_trace" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xcdbf3594, "xt_unregister_table" },
	{ 0xe204e042, "xt_free_table_info" },
	{ 0xcb3e91cc, "xt_counters_alloc" },
	{ 0xd258f16d, "xt_replace_table" },
	{ 0xd7f5fcd, "xt_alloc_entry_offsets" },
	{ 0xd87ae60d, "xt_check_entry_offsets" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x3bf9d084, "xt_check_table_hooks" },
	{ 0xfef779fa, "xt_find_jump_offset" },
	{ 0x977fd4bf, "xt_alloc_table_info" },
	{ 0x69acdf38, "memcpy" },
	{ 0xde9807b1, "xt_register_table" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x17d89efe, "nf_register_net_hooks" },
	{ 0xa25fc115, "xt_compat_check_entry_offsets" },
	{ 0xfb578fc5, "memset" },
	{ 0x4de686b7, "xt_compat_match_from_user" },
	{ 0x9145a5a6, "xt_compat_target_from_user" },
	{ 0xf6abeb06, "xt_copy_counters" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9cbd9f56, "xt_find_table" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xf4f62fa0, "nf_unregister_net_hooks" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0x17449d4d, "xt_register_targets" },
	{ 0xe8cc0195, "nf_register_sockopt" },
	{ 0x43aca7d5, "xt_unregister_targets" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0xc7fae024, "xt_compat_calc_jump" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x7d645a75, "xt_proto_fini" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "ADA7ADC06FC931AC4CC7BE4");
