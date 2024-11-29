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
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xac7da2f2, "__nlmsg_put" },
	{ 0xd786c3ef, "param_ops_uint" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xd8cf7a4d, "can_rx_unregister" },
	{ 0x579e0bf5, "rtnl_unregister_all" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x3754fb97, "kmem_cache_create" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x706bb784, "netlink_capable" },
	{ 0x3cfdd46f, "kmem_cache_alloc" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x829f575e, "can_send" },
	{ 0xe7f87e08, "__dev_get_by_index" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x4ebf36a1, "kmem_cache_free" },
	{ 0xd5a43273, "nla_put" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xadb3c445, "rtnl_register_module" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x2db5a302, "skb_copy" },
	{ 0xf1de5c0a, "skb_clone" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x7b52e38, "rtnl_unregister" },
	{ 0x791c5dc8, "can_rx_register" },
	{ 0x560cd29a, "kmem_cache_destroy" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "can");


MODULE_INFO(srcversion, "248438F6A489EFE4BF048FA");
