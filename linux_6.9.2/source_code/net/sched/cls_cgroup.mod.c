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
	{ 0x1e8af27c, "unregister_tcf_proto_ops" },
	{ 0xd5a43273, "nla_put" },
	{ 0xca26035f, "tcf_exts_dump" },
	{ 0x4e5129f5, "tcf_em_tree_dump" },
	{ 0x32ca49e4, "tcf_exts_dump_stats" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x6ddd8e26, "tcf_exts_destroy" },
	{ 0xd5c0f6e6, "tcf_em_tree_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0xa8b21c85, "__put_net" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x2d8434c2, "tcf_exts_init_ex" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xc2c0f2dc, "tcf_exts_validate" },
	{ 0x992a6d98, "tcf_em_tree_validate" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x27c98e1f, "task_cls_state" },
	{ 0xb1c2d56b, "tcf_action_exec" },
	{ 0x6e0476a, "__tcf_em_tree_match" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdfb8cdf0, "register_tcf_proto_ops" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5851D796545AD77148ABFBF");
