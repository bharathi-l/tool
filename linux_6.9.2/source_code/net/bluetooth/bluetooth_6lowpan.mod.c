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
	{ 0x18f58619, "try_module_get" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x28a445b3, "simple_attr_open" },
	{ 0x2f850adc, "debugfs_attr_write" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x9a25806b, "consume_skb" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x37a0cba, "kfree" },
	{ 0x80340e17, "seq_lseek" },
	{ 0xba661157, "l2cap_chan_create" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x27174251, "lowpan_register_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1ea76e26, "netdev_notify_peers" },
	{ 0x8605e7ae, "l2cap_chan_connect" },
	{ 0x6178095e, "dev_addr_mod" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x6373ea58, "alloc_netdev_mqs" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x56fa3780, "put_device" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0xd80b0ef6, "bt_debugfs" },
	{ 0xf259c092, "lowpan_unregister_netdev" },
	{ 0xabb08c3a, "skb_copy_expand" },
	{ 0xd47a039c, "module_put" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x191d31af, "lowpan_header_decompress" },
	{ 0xb393284c, "dev_open" },
	{ 0xb67eddb7, "debugfs_attr_read" },
	{ 0xc084677a, "skb_pull" },
	{ 0xa18af445, "debugfs_create_file_unsafe" },
	{ 0x67b08877, "simple_attr_release" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x7070c9a2, "nd_tbl" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x1884ee6c, "dev_close" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x1840543b, "debugfs_remove" },
	{ 0x2a718f47, "iov_iter_kvec" },
	{ 0x589e0a2c, "free_netdev" },
	{ 0x7b5ce5c3, "baswap" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3356a89f, "netif_tx_wake_queue" },
	{ 0xb434840, "l2cap_chan_put" },
	{ 0xdc8e7e20, "hci_get_route" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x5cf52384, "netif_rx" },
	{ 0x718b8b7, "bt_info" },
	{ 0x26733679, "l2cap_chan_close" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x2c402ac1, "seq_read" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xa940cb6c, "debugfs_create_file" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xb3b02e5a, "l2cap_add_psm" },
	{ 0x385e8aec, "neigh_destroy" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5d0849db, "l2cap_chan_send" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x13fe5644, "seq_printf" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd4085cf1, "lowpan_header_compress" },
	{ 0x2db5a302, "skb_copy" },
	{ 0xf1de5c0a, "skb_clone" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x1340f709, "l2cap_chan_del" },
	{ 0x14f55ccf, "single_release" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xf54b7f27, "single_open" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x56e2b818, "l2cap_chan_set_defaults" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "bluetooth,6lowpan");


MODULE_INFO(srcversion, "B9740E015B131EFF8355141");
