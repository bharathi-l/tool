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
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x8bc96d1c, "br_handle_frame_finish" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7d7b346f, "__skb_ext_del" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x4c236f6f, "__x86_indirect_thunk_r15" },
	{ 0x6e52ff7e, "nf_br_ops" },
	{ 0x37a0cba, "kfree" },
	{ 0x983836c5, "ip_route_output_flow" },
	{ 0xabca843, "nf_ct_hook" },
	{ 0x75c8414a, "skb_pull_rcsum" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa2066eb8, "pskb_expand_head" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0xb3012895, "register_net_sysctl_sz" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x17d89efe, "nf_register_net_hooks" },
	{ 0x9e343252, "nf_ipv6_ops" },
	{ 0x7e75a225, "ip_route_input_noref" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0x1ede5775, "br_forward_finish" },
	{ 0x33338211, "rcuref_get_slowpath" },
	{ 0xece43bce, "init_net" },
	{ 0xb37701bf, "nf_ip6_check_hbh_len" },
	{ 0xc084677a, "skb_pull" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x7990f761, "dev_get_by_index_rcu" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xe246278b, "skb_push" },
	{ 0xf4f62fa0, "nf_unregister_net_hooks" },
	{ 0x8143aa3f, "br_dev_queue_push_xmit" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0x32bffce8, "nf_hook_slow" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd83898d5, "nf_hooks_needed" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x385e8aec, "neigh_destroy" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xef428d13, "__vlan_find_dev_deep_rcu" },
	{ 0x986d6241, "dst_release" },
	{ 0xf94536c2, "proc_dointvec" },
	{ 0x623ac8b4, "ip_do_fragment" },
	{ 0xb805d2b3, "unregister_net_sysctl_table" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x929856a9, "skb_ext_add" },
	{ 0xe5688684, "pskb_trim_rcsum_slow" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "bridge");


MODULE_INFO(srcversion, "8D8A244FE7A391F1C9D11FB");
