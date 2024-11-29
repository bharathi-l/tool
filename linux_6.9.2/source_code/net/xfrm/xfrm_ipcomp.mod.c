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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_MITIGATION_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

KSYMTAB_FUNC(ipcomp_input, "_gpl", "");
KSYMTAB_FUNC(ipcomp_output, "_gpl", "");
KSYMTAB_FUNC(ipcomp_destroy, "_gpl", "");
KSYMTAB_FUNC(ipcomp_init_state, "_gpl", "");

SYMBOL_CRC(ipcomp_input, 0x63e26e89, "_gpl");
SYMBOL_CRC(ipcomp_output, 0x7d05f032, "_gpl");
SYMBOL_CRC(ipcomp_destroy, 0x40d73481, "_gpl");
SYMBOL_CRC(ipcomp_init_state, 0xca3693b4, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe246278b, "skb_push" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x23667ff2, "crypto_comp_compress" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x692ed195, "___pskb_trim" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xfa0073c7, "crypto_comp_decompress" },
	{ 0xf97a77c8, "alloc_pages" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x999e8297, "vfree" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x37a0cba, "kfree" },
	{ 0x14fc6972, "crypto_destroy_tfm" },
	{ 0xa21b2239, "xfrm_state_delete_tunnel" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xaab23340, "xfrm_calg_get_byname" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x618911fc, "numa_node" },
	{ 0x23fd3028, "vmalloc_node" },
	{ 0x9ee463e0, "crypto_alloc_base" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "xfrm_algo");


MODULE_INFO(srcversion, "DF12BD7219DA73FBEE82CA8");
