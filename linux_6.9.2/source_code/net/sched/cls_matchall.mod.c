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



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x6ddd8e26, "tcf_exts_destroy" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xa8b21c85, "__put_net" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x8246600f, "tc_setup_cb_destroy" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0x309d17d4, "tc_setup_cb_add" },
	{ 0x5ce48880, "tc_setup_cb_call" },
	{ 0xcf1a6c3f, "tcf_action_update_hw_stats" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xd5a43273, "nla_put" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xb7f54816, "nla_put_64bit" },
	{ 0xca26035f, "tcf_exts_dump" },
	{ 0x32ca49e4, "tcf_exts_dump_stats" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x2d8434c2, "tcf_exts_init_ex" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xedb43cac, "tcf_exts_validate_ex" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x56470118, "__warn_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xb1c2d56b, "tcf_action_exec" },
	{ 0xdfb8cdf0, "register_tcf_proto_ops" },
	{ 0xf9c39012, "tcf_exts_num_actions" },
	{ 0xd7fa33c7, "flow_rule_alloc" },
	{ 0x688be7a6, "tc_setup_offload_action" },
	{ 0xb04b1f1c, "tc_setup_cb_reoffload" },
	{ 0xce562c80, "tc_cleanup_offload_action" },
	{ 0x37a0cba, "kfree" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1e8af27c, "unregister_tcf_proto_ops" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C5F22D93D7B54EACFE96F81");
