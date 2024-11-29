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
	{ 0xe113bbbc, "csum_partial" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xe5688684, "pskb_trim_rcsum_slow" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x6949866, "kthread_create_worker" },
	{ 0x22a3fa83, "kthread_queue_work" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x2c0c50bd, "netdev_txq_to_tc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x86a2dbfd, "dsa_tag_drivers_register" },
	{ 0xde4012b4, "kthread_destroy_worker" },
	{ 0x37a0cba, "kfree" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x7c05db6c, "skb_checksum_help" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xce0b0456, "dsa_tag_drivers_unregister" },
	{ 0xbf907607, "ptp_parse_header" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "dsa_core");


MODULE_INFO(srcversion, "AAC4AF3D7A12D8C4A29D0B3");
