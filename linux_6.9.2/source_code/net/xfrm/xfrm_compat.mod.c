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
	{ 0x69acdf38, "memcpy" },
	{ 0xfb578fc5, "memset" },
	{ 0x4e547048, "__kmalloc_node_track_caller" },
	{ 0x37a0cba, "kfree" },
	{ 0x4a0c7516, "xfrm_msg_min" },
	{ 0xac7da2f2, "__nlmsg_put" },
	{ 0x122c3a7e, "_printk" },
	{ 0xd5a43273, "nla_put" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xb7f54816, "nla_put_64bit" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x205adfce, "xfrma_policy" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x163cc413, "xfrm_register_translator" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x55d3fc85, "xfrm_unregister_translator" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "xfrm_user");


MODULE_INFO(srcversion, "99CE136508CAB09C13660A5");
