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
	{ 0xd47a039c, "module_put" },
	{ 0xc084677a, "skb_pull" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xf6a573c1, "ppp_input_error" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x2fc4e87c, "ppp_output_wakeup" },
	{ 0xf1db46d2, "deregister_atm_ioctl" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x50efec3b, "ppp_channel_index" },
	{ 0xe8eaa35c, "ppp_unit_number" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0xc6cbbc89, "capable" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xca7d7826, "ppp_register_channel" },
	{ 0xdc2b2807, "__module_get" },
	{ 0xf3d10f9c, "vcc_process_recv_queue" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xe246278b, "skb_push" },
	{ 0xb6983911, "skb_realloc_headroom" },
	{ 0x9a25806b, "consume_skb" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa00f4e0b, "register_atm_ioctl" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x27747bb9, "ppp_input" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xf1d16909, "ppp_unregister_channel" },
	{ 0x37a0cba, "kfree" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "atm");


MODULE_INFO(srcversion, "EA38761BE71F0EA714F4FF7");
