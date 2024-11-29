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
	{ 0xa8b21c85, "__put_net" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xac7da2f2, "__nlmsg_put" },
	{ 0x144dfedb, "nfnetlink_unicast" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x56470118, "__warn_printk" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x63fd798c, "remove_proc_entry" },
	{ 0xc4c4b2b2, "nf_log_unset" },
	{ 0x65f11366, "proc_create_net_data" },
	{ 0x1da035f6, "make_kuid" },
	{ 0x88313973, "make_kgid" },
	{ 0xe920511e, "proc_set_user" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x894f17b7, "nf_log_unbind_pf" },
	{ 0x9359f1d8, "nfnl_ct_hook" },
	{ 0xa90e288c, "nf_log_bind_pf" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x18f58619, "try_module_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x754d539c, "strlen" },
	{ 0xd5a43273, "nla_put" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x24d273d1, "add_timer" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0x391df80a, "netstamp_needed_key" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x2788847d, "from_kuid_munged" },
	{ 0x9164d2c3, "from_kgid_munged" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0x21c04549, "nfnetlink_subsys_register" },
	{ 0x911e4d6a, "nf_log_register" },
	{ 0x122c3a7e, "_printk" },
	{ 0x3c8dabba, "nfnetlink_subsys_unregister" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x13fe5644, "seq_printf" },
	{ 0x9bcbeb85, "nf_log_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xd47a039c, "module_put" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "362EE026B7F44AAE2915CB1");
