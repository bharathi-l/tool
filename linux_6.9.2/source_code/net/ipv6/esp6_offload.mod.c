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
	{ 0x3b34aabc, "inet6_del_offload" },
	{ 0xcdbec071, "esp6_input_done2" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xe246278b, "skb_push" },
	{ 0x398231f4, "ipv6_skip_exthdr" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x743e791d, "xfrm_parse_spi" },
	{ 0xb12c8f07, "xfrm_input" },
	{ 0xb27cd817, "secpath_set" },
	{ 0x49cbcd9f, "xfrm_state_lookup" },
	{ 0x7d7b346f, "__skb_ext_del" },
	{ 0xf4af260, "esp6_output_head" },
	{ 0x929856a9, "skb_ext_add" },
	{ 0xf7bc615a, "esp6_output_tail" },
	{ 0x268d2cca, "inet6_offloads" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf05a9d6, "skb_eth_gso_segment" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x78140114, "xfrm_register_type_offload" },
	{ 0x230368a6, "inet6_add_offload" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x122c3a7e, "_printk" },
	{ 0x4f4e6906, "xfrm_unregister_type_offload" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "esp6");


MODULE_INFO(srcversion, "F3B67061E1F117554534D31");
