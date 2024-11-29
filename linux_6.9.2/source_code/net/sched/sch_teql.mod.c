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
	{ 0x5e858455, "unregister_qdisc" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xb6b61110, "qdisc_reset" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x56470118, "__warn_printk" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x4f30f1bd, "noop_qdisc" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x62f336d9, "neigh_lookup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0xe3cda79b, "softnet_data" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd0fb65d8, "__neigh_event_send" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x3011c54a, "__neigh_create" },
	{ 0x385e8aec, "neigh_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x9a25806b, "consume_skb" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x47d0e073, "param_ops_int" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x3356a89f, "netif_tx_wake_queue" },
	{ 0x8cb09cb0, "skb_queue_purge_reason" },
	{ 0x9ecb4adc, "register_netdev" },
	{ 0xa916b694, "strnlen" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x286d5f54, "register_qdisc" },
	{ 0x6373ea58, "alloc_netdev_mqs" },
	{ 0x589e0a2c, "free_netdev" },
	{ 0xfe71b7d9, "unregister_netdev" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0699482BD713DD83C6B26AD");
