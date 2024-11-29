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

KSYMTAB_FUNC(esp6_output_head, "_gpl", "");
KSYMTAB_FUNC(esp6_output_tail, "_gpl", "");
KSYMTAB_FUNC(esp6_input_done2, "_gpl", "");

SYMBOL_CRC(esp6_output_head, 0x0f4af260, "_gpl");
SYMBOL_CRC(esp6_output_tail, 0xf7bc615a, "_gpl");
SYMBOL_CRC(esp6_input_done2, 0xcdbec071, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe2384317, "crypto_aead_setauthsize" },
	{ 0x44aeae89, "crypto_aead_setkey" },
	{ 0x37a0cba, "kfree" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x49cbcd9f, "xfrm_state_lookup" },
	{ 0x1da035f6, "make_kuid" },
	{ 0x6fae2ed8, "ip6_update_pmtu" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x1d205469, "ip6_redirect" },
	{ 0x6a83f01d, "__xfrm_state_destroy" },
	{ 0x36c091de, "sk_free" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0x398231f4, "ipv6_skip_exthdr" },
	{ 0xb7af4f8a, "km_new_mapping" },
	{ 0x75c8414a, "skb_pull_rcsum" },
	{ 0x692ed195, "___pskb_trim" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xb17872fe, "xfrm_input_resume" },
	{ 0x8beb6433, "skb_cow_data" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0x81530595, "skb_to_sgvec" },
	{ 0xc4fe251, "crypto_aead_decrypt" },
	{ 0xe246278b, "skb_push" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xfbe215e4, "sg_next" },
	{ 0xb0e10370, "napi_pp_put_page" },
	{ 0x7a53770b, "__put_devmap_managed_page_refs" },
	{ 0xf8641358, "__folio_put" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc5f675ef, "__inet6_lookup_established" },
	{ 0xbc2d8cd7, "tcp_is_ulp_esp" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x638732c1, "espintcp_push_skb" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x1ba2c97c, "espintcp_queue_out" },
	{ 0xc4a34a8, "xfrm_dev_resume" },
	{ 0x209d2c80, "xfrm_output_resume" },
	{ 0x7d7b346f, "__skb_ext_del" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0xecf7e38c, "xfrm_trans_queue_net" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xfb578fc5, "memset" },
	{ 0xe94ef447, "crypto_aead_encrypt" },
	{ 0xbb59dffb, "skb_page_frag_refill" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x5f7a6ef2, "pskb_put" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xd4c00a4a, "xfrm_state_mtu" },
	{ 0x52ed276d, "xfrm6_rcv" },
	{ 0xb12c8f07, "xfrm_input" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x201b4e4b, "skb_checksum" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x5f9102a1, "xfrm_register_type" },
	{ 0x95877199, "xfrm6_protocol_register" },
	{ 0x122c3a7e, "_printk" },
	{ 0x547b7709, "xfrm_unregister_type" },
	{ 0x14fc6972, "crypto_destroy_tfm" },
	{ 0x649555a7, "xfrm6_protocol_deregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x666d1046, "crypto_alloc_aead" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "xfrm_algo");


MODULE_INFO(srcversion, "9FDD3BA4563F611FBD5203C");
