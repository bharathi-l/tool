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

KSYMTAB_FUNC(can_sock_destruct, "", "");
KSYMTAB_FUNC(can_send, "", "");
KSYMTAB_FUNC(can_rx_register, "", "");
KSYMTAB_FUNC(can_rx_unregister, "", "");
KSYMTAB_FUNC(can_proto_register, "", "");
KSYMTAB_FUNC(can_proto_unregister, "", "");

SYMBOL_CRC(can_sock_destruct, 0x7bedcff7, "");
SYMBOL_CRC(can_send, 0x829f575e, "");
SYMBOL_CRC(can_rx_register, 0x791c5dc8, "");
SYMBOL_CRC(can_rx_unregister, 0xd8cf7a4d, "");
SYMBOL_CRC(can_proto_register, 0xbcef7b55, "");
SYMBOL_CRC(can_proto_unregister, 0x0e39d41c, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x18f58619, "try_module_get" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x9a25806b, "consume_skb" },
	{ 0x4a04c76c, "dev_add_pack" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x3754fb97, "kmem_cache_create" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0x8cb09cb0, "skb_queue_purge_reason" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x7222c16a, "proto_unregister" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x3c90e235, "sock_register" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x3cfdd46f, "kmem_cache_alloc" },
	{ 0x910bb85d, "proto_register" },
	{ 0xd47a039c, "module_put" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xe675d21a, "dev_remove_pack" },
	{ 0x36c091de, "sk_free" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4ebf36a1, "kmem_cache_free" },
	{ 0x4be84ba, "seq_putc" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0x5f258127, "sk_alloc" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0x844c5de4, "sock_efree" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x5cf52384, "netif_rx" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x8e7a30bb, "__dev_queue_xmit" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x63fd798c, "remove_proc_entry" },
	{ 0x13fe5644, "seq_printf" },
	{ 0x1e1661a6, "proc_create_net_single" },
	{ 0xf1de5c0a, "skb_clone" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x8cf244f1, "seq_puts" },
	{ 0x9cbd991d, "_proc_mkdir" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x47d0e073, "param_ops_int" },
	{ 0x242851e9, "sock_init_data" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x560cd29a, "kmem_cache_destroy" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7CAE03265D1C4E46F23218E");
