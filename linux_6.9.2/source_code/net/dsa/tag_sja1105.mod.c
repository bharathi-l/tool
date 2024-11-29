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
	{ 0x967c7abb, "dsa_8021q_xmit" },
	{ 0xe246278b, "skb_push" },
	{ 0xb0e602eb, "memmove" },
	{ 0xa2066eb8, "pskb_expand_head" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x6949866, "kthread_create_worker" },
	{ 0x2eebc68d, "dev_kfree_skb_any_reason" },
	{ 0x2c0c50bd, "netdev_txq_to_tc" },
	{ 0xc0e2a98f, "dsa_tag_8021q_standalone_vid" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x22a3fa83, "kthread_queue_work" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xf13e1803, "vid_is_dsa_8021q" },
	{ 0x2a37285f, "dsa_tag_8021q_find_port_by_vbid" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x1eff3830, "netdev_warn" },
	{ 0xdcfe2703, "br_vlan_get_info_rcu" },
	{ 0x59a2f0ee, "packing" },
	{ 0xac809b58, "dsa_8021q_rcv" },
	{ 0x56567557, "_dev_err" },
	{ 0x75c8414a, "skb_pull_rcsum" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0xe5688684, "pskb_trim_rcsum_slow" },
	{ 0xa1f418a2, "dsa_switch_find" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x86a2dbfd, "dsa_tag_drivers_register" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xde4012b4, "kthread_destroy_worker" },
	{ 0x37a0cba, "kfree" },
	{ 0xce0b0456, "dsa_tag_drivers_unregister" },
	{ 0x7705472, "br_vlan_get_proto" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xd783d861, "br_vlan_enabled" },
	{ 0x45ca5090, "dsa_tag_8021q_bridge_vid" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "dsa_core,bridge");


MODULE_INFO(srcversion, "E4F29CCAA26BAC92AF9519B");
