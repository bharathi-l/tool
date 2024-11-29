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

KSYMTAB_FUNC(hsr_get_version, "", "");
KSYMTAB_FUNC(is_hsr_master, "", "");

SYMBOL_CRC(hsr_get_version, 0xf8d20bad, "");
SYMBOL_CRC(is_hsr_master, 0x37aa794a, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x44465aeb, "dev_set_mtu" },
	{ 0x42e5f7b5, "__skb_pad" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0x971613f5, "eth_header" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xa529e434, "netdev_update_features" },
	{ 0xb0e602eb, "memmove" },
	{ 0x39ec7d18, "rtnl_link_register" },
	{ 0xc760ce2d, "genlmsg_put" },
	{ 0x8f2bdc79, "dev_uc_sync_multiple" },
	{ 0x37a0cba, "kfree" },
	{ 0x583ba754, "dev_set_promiscuity" },
	{ 0x80340e17, "seq_lseek" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0x1eff3830, "netdev_warn" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x38485abd, "unregister_netdevice_queue" },
	{ 0xc0943440, "netlink_ack" },
	{ 0x50b2b15, "__pskb_copy_fclone" },
	{ 0xcc8786e7, "dev_uc_unsync" },
	{ 0x89f8df2b, "ether_setup" },
	{ 0x2357245f, "netlink_broadcast_filtered" },
	{ 0xeb6f6ea3, "netdev_err" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2bdf1e29, "netdev_upper_dev_link" },
	{ 0x6178095e, "dev_addr_mod" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x927604c7, "netdev_rx_handler_unregister" },
	{ 0xedc48d52, "eth_header_parse" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xabb08c3a, "skb_copy_expand" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xe7f87e08, "__dev_get_by_index" },
	{ 0xd8dc1a8d, "rtnl_link_unregister" },
	{ 0xece43bce, "init_net" },
	{ 0xc084677a, "skb_pull" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8911bab3, "netlink_unicast" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x7990f761, "dev_get_by_index_rcu" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xcda3b26d, "netdev_printk" },
	{ 0xe246278b, "skb_push" },
	{ 0x1840543b, "debugfs_remove" },
	{ 0x414ecb99, "netdev_upper_dev_unlink" },
	{ 0xd5a43273, "nla_put" },
	{ 0x316de5fa, "netdev_set_operstate" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0x5cf52384, "netif_rx" },
	{ 0xdece0e7e, "__netdev_alloc_skb" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2c402ac1, "seq_read" },
	{ 0x3451452d, "debugfs_rename" },
	{ 0xa940cb6c, "debugfs_create_file" },
	{ 0x8e7a30bb, "__dev_queue_xmit" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x960da8bf, "call_netdevice_notifiers" },
	{ 0xf96afcdc, "dev_set_allmulti" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe10bc0d2, "netif_carrier_off" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x13fe5644, "seq_printf" },
	{ 0xf1de5c0a, "skb_clone" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xbc8054bd, "netif_carrier_on" },
	{ 0x65cd0c57, "netdev_rx_handler_register" },
	{ 0x8cf244f1, "seq_puts" },
	{ 0x14f55ccf, "single_release" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xc01b7698, "genl_unregister_family" },
	{ 0xc42aaabf, "dev_disable_lro" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x2eebc68d, "dev_kfree_skb_any_reason" },
	{ 0xf54b7f27, "single_open" },
	{ 0xfe67de01, "debugfs_create_dir" },
	{ 0x2a7b130c, "dev_mc_unsync" },
	{ 0xf20b36c9, "genl_register_family" },
	{ 0x75696413, "netdev_core_stats_inc" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0xb2a49696, "netdev_info" },
	{ 0xbdf70adc, "dev_mc_sync_multiple" },
	{ 0x3c0dbc1e, "register_netdevice" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FB1CC9A47B4E6ACA5BDC8A6");
