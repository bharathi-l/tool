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
	{ 0xc793d1b4, "skb_trim" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xfba7a5f5, "__get_random_u32_below" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0x92c1f310, "qdisc_tree_reduce_backlog" },
	{ 0xeff39aad, "flow_keys_dissector" },
	{ 0x9d4077c6, "__skb_flow_dissect" },
	{ 0x360d67f, "make_flow_keys_digest" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x56470118, "__warn_printk" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x286d5f54, "register_qdisc" },
	{ 0x3e329f16, "gnet_stats_copy_app" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x5061cdd6, "rtnl_kfree_skbs" },
	{ 0xfb578fc5, "memset" },
	{ 0x5e858455, "unregister_qdisc" },
	{ 0xd5a43273, "nla_put" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B37DC64DB7E7C40CB72E3A8");
