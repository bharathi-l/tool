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
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xddf68fc6, "xt_find_revision" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0xac7da2f2, "__nlmsg_put" },
	{ 0x754d539c, "strlen" },
	{ 0xd5a43273, "nla_put" },
	{ 0x144dfedb, "nfnetlink_unicast" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x46e76f96, "xt_request_find_target" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0xf0a64cb3, "xt_request_find_match" },
	{ 0xa916b694, "strnlen" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6e984c22, "nft_register_expr" },
	{ 0x21c04549, "nfnetlink_subsys_register" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x122c3a7e, "_printk" },
	{ 0x94d0fab8, "nft_unregister_expr" },
	{ 0xd47a039c, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa3b6d95, "nft_chain_validate_hooks" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c8dabba, "nfnetlink_subsys_unregister" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xca9e776c, "nla_reserve" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfb578fc5, "memset" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x3251d762, "nf_tables_trans_destroy_flush_work" },
	{ 0x1ab4f4c3, "xt_check_match" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x49da240b, "xt_check_target" },
	{ 0xdabd605c, "nft_request_module" },
	{ 0x18f58619, "try_module_get" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "x_tables,nfnetlink,nf_tables");


MODULE_INFO(srcversion, "9DB39BB6F0B7A98DE799821");
