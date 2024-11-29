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
	{ 0x83f51840, "__nla_parse" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x48611023, "qdisc_watchdog_init_clockid" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xca9360b5, "rb_next" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x5061cdd6, "rtnl_kfree_skbs" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf1de5c0a, "skb_clone" },
	{ 0xc1978e82, "sock_queue_err_skb" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xd83d2213, "qdisc_watchdog_schedule_range_ns" },
	{ 0x3931717e, "kfree_skb_list_reason" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x286d5f54, "register_qdisc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x5e858455, "unregister_qdisc" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x60d382d9, "qdisc_watchdog_cancel" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xd5a43273, "nla_put" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0539BC8F03982FA8EAF0ED8");
