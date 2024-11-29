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
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0xb1c2d56b, "tcf_action_exec" },
	{ 0xe94986d6, "sched_clock" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x5ce48880, "tc_setup_cb_call" },
	{ 0xd5a43273, "nla_put" },
	{ 0xca9e776c, "nla_reserve" },
	{ 0x69acdf38, "memcpy" },
	{ 0xca26035f, "tcf_exts_dump" },
	{ 0x32ca49e4, "tcf_exts_dump_stats" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x754d539c, "strlen" },
	{ 0x6ddd8e26, "tcf_exts_destroy" },
	{ 0x536b2bc3, "bpf_prog_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0xf405d1a1, "bpf_prog_put" },
	{ 0xa8b21c85, "__put_net" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x2d8434c2, "tcf_exts_init_ex" },
	{ 0xd9916c3a, "idr_alloc_u32" },
	{ 0xc2c0f2dc, "tcf_exts_validate" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x1bfaee4c, "bpf_prog_create" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xadd22d6e, "bpf_prog_get_type_dev" },
	{ 0xd94eb594, "tcf_block_netif_keep_dst" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0x56470118, "__warn_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xdfb8cdf0, "register_tcf_proto_ops" },
	{ 0x1e8af27c, "unregister_tcf_proto_ops" },
	{ 0xd18ba27c, "tc_setup_cb_replace" },
	{ 0x309d17d4, "tc_setup_cb_add" },
	{ 0x8246600f, "tc_setup_cb_destroy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0xb04b1f1c, "tc_setup_cb_reoffload" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E8898DD277A79FC984D1B39");
