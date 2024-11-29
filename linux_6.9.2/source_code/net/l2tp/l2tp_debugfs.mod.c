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
	{ 0x13fe5644, "seq_printf" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x8cf244f1, "seq_puts" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x66f07741, "l2tp_session_dec_refcount" },
	{ 0x6cf025ba, "l2tp_tunnel_dec_refcount" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x9dc3e5ef, "get_net_ns_by_pid" },
	{ 0x90d9e2c3, "seq_open" },
	{ 0x37a0cba, "kfree" },
	{ 0xa8b21c85, "__put_net" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x996daa7, "seq_release" },
	{ 0x3910ccd2, "l2tp_session_get_nth" },
	{ 0xa0872143, "l2tp_tunnel_get_nth" },
	{ 0x80340e17, "seq_lseek" },
	{ 0x2c402ac1, "seq_read" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xfe67de01, "debugfs_create_dir" },
	{ 0xa940cb6c, "debugfs_create_file" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1840543b, "debugfs_remove" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "l2tp_core");


MODULE_INFO(srcversion, "F89F835078B0C00C4D8C706");
