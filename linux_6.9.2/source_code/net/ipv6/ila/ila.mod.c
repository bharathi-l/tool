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
	{ 0xa2e9dc6a, "__do_once_done" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0xa629c6cf, "xfrm_lookup" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xeff25db6, "ip_output" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb7f54816, "nla_put_64bit" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x5ae36a40, "inet_proto_csum_replace_by_diff" },
	{ 0xc760ce2d, "genlmsg_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xff0bd83a, "ip6_output" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x4b5acf74, "rhashtable_init" },
	{ 0xe5ce1a56, "rhashtable_walk_enter" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe8fbf4fa, "__alloc_bucket_spinlocks" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x17d89efe, "nf_register_net_hooks" },
	{ 0x2b3cbef0, "ip6_route_output_flags" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8911bab3, "netlink_unicast" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x8162c74, "free_bucket_spinlocks" },
	{ 0xaa96cad3, "dst_cache_get" },
	{ 0xd5a43273, "nla_put" },
	{ 0x9a5dce5c, "rhashtable_walk_start_check" },
	{ 0xf4f62fa0, "nf_unregister_net_hooks" },
	{ 0xeba8170b, "unregister_pernet_device" },
	{ 0x9cd7551a, "rhashtable_walk_stop" },
	{ 0x5d2aa5fb, "rhashtable_walk_peek" },
	{ 0x7f6cee89, "rhashtable_free_and_destroy" },
	{ 0xb202f0d7, "rht_bucket_nested_insert" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x7f2dc4a6, "lwtunnel_state_alloc" },
	{ 0xaee35d50, "pv_ops" },
	{ 0xe0313d71, "rhashtable_insert_slow" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xcdfb2c95, "dst_cache_set_ip6" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x986d6241, "dst_release" },
	{ 0x54651f9b, "rhashtable_walk_next" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xc01b7698, "genl_unregister_family" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x83f51840, "__nla_parse" },
	{ 0xe6a6bad8, "lwtunnel_encap_add_ops" },
	{ 0xf20b36c9, "genl_register_family" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0xf188a662, "rhashtable_walk_exit" },
	{ 0xa802aea8, "register_pernet_device" },
	{ 0x1e478da3, "lwtunnel_encap_del_ops" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E2ED63CD4364D81411B247A");
