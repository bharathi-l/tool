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
	{ 0xabe1d0c5, "tcf_idrinfo_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xd5a43273, "nla_put" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0xb7f54816, "nla_put_64bit" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x50d6da, "tcf_unregister_action" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x3387ad29, "tcf_idr_check_alloc" },
	{ 0x634b9988, "tcf_action_check_ctrlact" },
	{ 0x88f10548, "tcf_action_set_ctrlact" },
	{ 0x4344bb9b, "tcf_chain_put_by_act" },
	{ 0x9a3bab78, "tcf_idr_create_from_flags" },
	{ 0xeae3dd71, "tcf_idr_release" },
	{ 0xc8479a0, "tcf_idr_cleanup" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xa2066eb8, "pskb_expand_head" },
	{ 0x67377444, "inet_proto_csum_replace4" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x35880cce, "tcf_register_action" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9A216DE8D8615A47620A76E");
