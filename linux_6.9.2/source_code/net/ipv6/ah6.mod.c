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
	{ 0x209d2c80, "xfrm_output_resume" },
	{ 0x56470118, "__warn_printk" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xb0e602eb, "memmove" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xb17872fe, "xfrm_input_resume" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x561f0234, "crypto_alloc_ahash" },
	{ 0x3ea0e5bd, "crypto_ahash_setkey" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x49cbcd9f, "xfrm_state_lookup" },
	{ 0x1da035f6, "make_kuid" },
	{ 0x6fae2ed8, "ip6_update_pmtu" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x1d205469, "ip6_redirect" },
	{ 0x6a83f01d, "__xfrm_state_destroy" },
	{ 0x8beb6433, "skb_cow_data" },
	{ 0xe246278b, "skb_push" },
	{ 0xfb578fc5, "memset" },
	{ 0xa2066eb8, "pskb_expand_head" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0xb3a2033e, "skb_to_sgvec_nomark" },
	{ 0xd9db71d5, "crypto_ahash_digest" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x52ed276d, "xfrm6_rcv" },
	{ 0xb12c8f07, "xfrm_input" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x5f9102a1, "xfrm_register_type" },
	{ 0x95877199, "xfrm6_protocol_register" },
	{ 0x122c3a7e, "_printk" },
	{ 0x547b7709, "xfrm_unregister_type" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x14fc6972, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0x649555a7, "xfrm6_protocol_deregister" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "xfrm_algo");


MODULE_INFO(srcversion, "DFD911F6FACE39550DB310D");
