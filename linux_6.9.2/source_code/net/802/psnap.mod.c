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

KSYMTAB_FUNC(register_snap_client, "", "");
KSYMTAB_FUNC(unregister_snap_client, "", "");

SYMBOL_CRC(register_snap_client, 0xaa8ecca2, "");
SYMBOL_CRC(unregister_snap_client, 0x0fb74d48, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x122c3a7e, "_printk" },
	{ 0xe246278b, "skb_push" },
	{ 0xdbf09180, "llc_build_and_send_ui_pkt" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x37a0cba, "kfree" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x75c8414a, "skb_pull_rcsum" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xab667667, "llc_sap_close" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x113ea25, "llc_sap_open" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "llc");


MODULE_INFO(srcversion, "39B1E42D6C2F13D46ADD06B");
