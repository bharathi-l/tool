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

KSYMTAB_FUNC(nfnl_lock, "_gpl", "");
KSYMTAB_FUNC(nfnl_unlock, "_gpl", "");
KSYMTAB_FUNC(nfnetlink_subsys_register, "_gpl", "");
KSYMTAB_FUNC(nfnetlink_subsys_unregister, "_gpl", "");
KSYMTAB_FUNC(nfnetlink_has_listeners, "_gpl", "");
KSYMTAB_FUNC(nfnetlink_send, "_gpl", "");
KSYMTAB_FUNC(nfnetlink_set_err, "_gpl", "");
KSYMTAB_FUNC(nfnetlink_unicast, "_gpl", "");
KSYMTAB_FUNC(nfnetlink_broadcast, "_gpl", "");

SYMBOL_CRC(nfnl_lock, 0x5ce3b588, "_gpl");
SYMBOL_CRC(nfnl_unlock, 0xdb065657, "_gpl");
SYMBOL_CRC(nfnetlink_subsys_register, 0x21c04549, "_gpl");
SYMBOL_CRC(nfnetlink_subsys_unregister, 0x3c8dabba, "_gpl");
SYMBOL_CRC(nfnetlink_has_listeners, 0x0c11cbc0, "_gpl");
SYMBOL_CRC(nfnetlink_send, 0x715447a0, "_gpl");
SYMBOL_CRC(nfnetlink_set_err, 0xdd5faa42, "_gpl");
SYMBOL_CRC(nfnetlink_unicast, 0x144dfedb, "_gpl");
SYMBOL_CRC(nfnetlink_broadcast, 0xcfd2d2b8, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x19f33626, "nf_ctnetlink_has_listener" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba45ad9d, "netlink_kernel_release" },
	{ 0x75bf1b49, "netlink_has_listeners" },
	{ 0x359c0f25, "netlink_set_err" },
	{ 0xc49c06b, "netlink_broadcast" },
	{ 0xbd525403, "nlmsg_notify" },
	{ 0x8911bab3, "netlink_unicast" },
	{ 0x3f6aa608, "__netlink_kernel_create" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x83f51840, "__nla_parse" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf1de5c0a, "skb_clone" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x18f58619, "try_module_get" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xc0943440, "netlink_ack" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xd47a039c, "module_put" },
	{ 0xc084677a, "skb_pull" },
	{ 0xfa6cb112, "netlink_net_capable" },
	{ 0x1169908d, "netlink_rcv_skb" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F288615435849546E2E38A4");
