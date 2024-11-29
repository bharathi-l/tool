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

KSYMTAB_FUNC(ebt_register_template, "", "");
KSYMTAB_FUNC(ebt_unregister_template, "", "");
KSYMTAB_FUNC(ebt_unregister_table_pre_exit, "", "");
KSYMTAB_FUNC(ebt_register_table, "", "");
KSYMTAB_FUNC(ebt_unregister_table, "", "");
KSYMTAB_FUNC(ebt_do_table, "", "");

SYMBOL_CRC(ebt_register_template, 0xca5c7095, "");
SYMBOL_CRC(ebt_unregister_template, 0x03f9033a, "");
SYMBOL_CRC(ebt_unregister_table_pre_exit, 0x3e9ff0d0, "");
SYMBOL_CRC(ebt_register_table, 0x75910b4f, "");
SYMBOL_CRC(ebt_unregister_table, 0x9e6b7c11, "");
SYMBOL_CRC(ebt_do_table, 0xe99eb419, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xaf80cbda, "xt_register_target" },
	{ 0xe8cc0195, "nf_register_sockopt" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0xda994d2e, "xt_unregister_target" },
	{ 0xaf4f0d7f, "nf_unregister_sockopt" },
	{ 0x46a0d0b0, "xt_compat_target_offset" },
	{ 0xa916b694, "strnlen" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x7bce4603, "xt_data_to_user" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0xfb578fc5, "memset" },
	{ 0xf0a64cb3, "xt_request_find_match" },
	{ 0x9ae592d9, "xt_compat_match_offset" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x69acdf38, "memcpy" },
	{ 0x823edea5, "xt_compat_add_offset" },
	{ 0x999e8297, "vfree" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x618911fc, "numa_node" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x23fd3028, "vmalloc_node" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x50873741, "xt_compat_init_offsets" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x5afc722e, "__audit_log_nfcfg" },
	{ 0xa7c94f1d, "xt_compat_lock" },
	{ 0x4e27719, "xt_compat_flush_offsets" },
	{ 0xd1e246a2, "xt_compat_unlock" },
	{ 0x18f58619, "try_module_get" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x863b8d86, "ns_capable" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x17d89efe, "nf_register_net_hooks" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xae04012c, "__vmalloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x37a0cba, "kfree" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc7fae024, "xt_compat_calc_jump" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1e80acf0, "xt_find_match" },
	{ 0xd47a039c, "module_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x1ab4f4c3, "xt_check_match" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x46e76f96, "xt_request_find_target" },
	{ 0x49da240b, "xt_check_target" },
	{ 0x29332499, "__x86_indirect_thunk_rsi" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xf4f62fa0, "nf_unregister_net_hooks" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "D1D48DD83FAC7DEE093F608");
