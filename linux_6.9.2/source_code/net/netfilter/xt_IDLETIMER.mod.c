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
	{ 0x3213f038, "mutex_unlock" },
	{ 0x58316029, "alarm_cancel" },
	{ 0xa916b694, "strnlen" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x8aeb0e01, "alarm_start_relative" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x66066bca, "sysfs_notify" },
	{ 0x43aca7d5, "xt_unregister_targets" },
	{ 0x48012e28, "xt_check_proc_name" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbc515321, "alarm_expires_remaining" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xcb9be910, "sysfs_create_file_ns" },
	{ 0x7e9a4b63, "kobject_uevent" },
	{ 0x6dd326e1, "alarm_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6000c7cb, "class_create" },
	{ 0x8a36ab0e, "device_create" },
	{ 0x17449d4d, "xt_register_targets" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x540c33e0, "device_destroy" },
	{ 0xc6fb6350, "class_destroy" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdf237453, "timer_shutdown_sync" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x580aab75, "sysfs_remove_file_ns" },
	{ 0x37a0cba, "kfree" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "E08A3B76E93F339D87C0C92");
