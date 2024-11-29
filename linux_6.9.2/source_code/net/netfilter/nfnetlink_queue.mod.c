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
	{ 0x6aba4631, "nf_queue" },
	{ 0x816dfe80, "ip_route_me_harder" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x13fe5644, "seq_printf" },
	{ 0xd7ea7094, "nf_unregister_queue_handler" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x391df80a, "netstamp_needed_key" },
	{ 0x9359f1d8, "nfnl_ct_hook" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0x5521c697, "skb_tx_error" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xac7da2f2, "__nlmsg_put" },
	{ 0x3e3532bd, "__nla_reserve" },
	{ 0xd5a43273, "nla_put" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xed61f6b3, "security_release_secctx" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x65441f22, "init_user_ns" },
	{ 0x2788847d, "from_kuid_munged" },
	{ 0x9164d2c3, "from_kgid_munged" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0xee079f77, "skb_zerocopy" },
	{ 0xa90f69f6, "skb_zerocopy_headlen" },
	{ 0x7c05db6c, "skb_checksum_help" },
	{ 0x144dfedb, "nfnetlink_unicast" },
	{ 0xf44d53da, "security_secid_to_secctx" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x63fd798c, "remove_proc_entry" },
	{ 0x65f11366, "proc_create_net_data" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x5bb5fa3f, "__skb_gso_segment" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x7a4b187f, "nf_queue_entry_get_refs" },
	{ 0x37a0cba, "kfree" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc9271504, "skb_ensure_writable" },
	{ 0xabb08c3a, "skb_copy_expand" },
	{ 0x692ed195, "___pskb_trim" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x18f58619, "try_module_get" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0xd47a039c, "module_put" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0x21c04549, "nfnetlink_subsys_register" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x8ba64a57, "nf_register_queue_handler" },
	{ 0x122c3a7e, "_printk" },
	{ 0x3c8dabba, "nfnetlink_subsys_unregister" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xabca843, "nf_ct_hook" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x508c94a, "nf_queue_entry_free" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x9e343252, "nf_ipv6_ops" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "755CC5F38F88CEF529054C4");
