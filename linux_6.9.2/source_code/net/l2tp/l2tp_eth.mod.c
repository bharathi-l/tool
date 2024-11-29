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
	{ 0x6178095e, "dev_addr_mod" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x337f2432, "l2tp_nl_unregister_ops" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x38485abd, "unregister_netdevice_queue" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xd47a039c, "module_put" },
	{ 0x3b33a619, "dev_forward_skb" },
	{ 0x7d7b346f, "__skb_ext_del" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x986d6241, "dst_release" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xa916b694, "strnlen" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x2aa68f59, "l2tp_session_create" },
	{ 0x6373ea58, "alloc_netdev_mqs" },
	{ 0xf3eaf8a7, "lock_sock_nested" },
	{ 0x6bbc7e08, "kernel_sock_ip_overhead" },
	{ 0xa5bdee8c, "release_sock" },
	{ 0x6ccdb4a9, "l2tp_session_inc_refcount" },
	{ 0xe45ea475, "l2tp_session_register" },
	{ 0x3c0dbc1e, "register_netdevice" },
	{ 0x66f07741, "l2tp_session_dec_refcount" },
	{ 0xdc2b2807, "__module_get" },
	{ 0x6e068e63, "ip6_mtu" },
	{ 0x37a0cba, "kfree" },
	{ 0x589e0a2c, "free_netdev" },
	{ 0x33338211, "rcuref_get_slowpath" },
	{ 0xbb40642d, "l2tp_session_delete" },
	{ 0x9c6690db, "ipv4_mtu" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xc169e3e4, "eth_mac_addr" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x539cf921, "l2tp_nl_register_ops" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x13fe5644, "seq_printf" },
	{ 0x89f8df2b, "ether_setup" },
	{ 0x83269e6c, "l2tp_xmit_skb" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "l2tp_netlink,l2tp_core");


MODULE_INFO(srcversion, "8D97CC700A7E9076A9446C4");
