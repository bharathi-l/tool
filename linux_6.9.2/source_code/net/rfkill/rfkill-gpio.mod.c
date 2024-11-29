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
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0xb6f5a1f2, "devm_kmalloc" },
	{ 0x1be3b3f, "device_property_read_string" },
	{ 0x50b73ce2, "rfkill_find_type" },
	{ 0x65d4ec94, "is_acpi_device_node" },
	{ 0x4a7e31e7, "acpi_match_device" },
	{ 0x64f5f940, "devm_acpi_dev_add_driver_gpios" },
	{ 0x30bd6492, "devm_clk_get" },
	{ 0xa176cca8, "devm_gpiod_get_optional" },
	{ 0x7111cb97, "gpiod_direction_output" },
	{ 0x92e44c7f, "rfkill_alloc" },
	{ 0xff282521, "rfkill_register" },
	{ 0x1184cffd, "_dev_info" },
	{ 0x56567557, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x73ffa2e5, "platform_driver_unregister" },
	{ 0x44d3484c, "gpiod_set_value_cansleep" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x815588a6, "clk_enable" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x203ef2e9, "__platform_driver_register" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Crfkill-gpio");
MODULE_ALIAS("of:N*T*Crfkill-gpioC*");
MODULE_ALIAS("acpi*:BCM4752:*");
MODULE_ALIAS("acpi*:LNV4752:*");

MODULE_INFO(srcversion, "4534346DC4FDADFBD504F8E");
