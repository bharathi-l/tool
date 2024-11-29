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

KSYMTAB_FUNC(aarp_send_ddp, "", "");
KSYMTAB_FUNC(atrtr_get_dev, "", "");
KSYMTAB_FUNC(atalk_find_dev_addr, "", "");
KSYMTAB_FUNC(alloc_ltalkdev, "", "");

SYMBOL_CRC(aarp_send_ddp, 0x0b4fb133, "");
SYMBOL_CRC(atrtr_get_dev, 0xdb6653d7, "");
SYMBOL_CRC(atalk_find_dev_addr, 0xbbcd1394, "");
SYMBOL_CRC(alloc_ltalkdev, 0x1a45605c, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd4216927, "skb_free_datagram" },
	{ 0x156db041, "dev_mc_add_global" },
	{ 0x136b25da, "sock_queue_rcv_skb_reason" },
	{ 0x4914275a, "sock_i_uid" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xe2bbfa56, "proc_dointvec_jiffies" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x9a25806b, "consume_skb" },
	{ 0x4a04c76c, "dev_add_pack" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0x80816f26, "get_user_ifreq" },
	{ 0xb5f5c77e, "skb_dequeue" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xfb74d48, "unregister_snap_client" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x4862064c, "remove_proc_subtree" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x6114cf8a, "__dev_get_by_name" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8cb09cb0, "skb_queue_purge_reason" },
	{ 0xb3012895, "register_net_sysctl_sz" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x6373ea58, "alloc_netdev_mqs" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x7222c16a, "proto_unregister" },
	{ 0x3c90e235, "sock_register" },
	{ 0x5a49628c, "datagram_poll" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x910bb85d, "proto_register" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd6a7d5b2, "skb_queue_tail" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xafeaf674, "sock_no_shutdown" },
	{ 0xaa8ecca2, "register_snap_client" },
	{ 0xece43bce, "init_net" },
	{ 0xc084677a, "skb_pull" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xe675d21a, "dev_remove_pack" },
	{ 0x36c091de, "sk_free" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xde85399, "sock_no_accept" },
	{ 0xe246278b, "skb_push" },
	{ 0x6f5598d1, "sock_no_listen" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x3dfc897c, "seq_hlist_start_head" },
	{ 0xf3eaf8a7, "lock_sock_nested" },
	{ 0x2e591177, "skb_copy_datagram_iter" },
	{ 0x5f258127, "sk_alloc" },
	{ 0xd28964a6, "proc_mkdir" },
	{ 0xf4ba9908, "sock_no_socketpair" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x1e54ba33, "sock_no_mmap" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb6983911, "skb_realloc_headroom" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x8e7a30bb, "__dev_queue_xmit" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x75bda77a, "seq_hlist_next" },
	{ 0x75f63f0d, "skb_recv_datagram" },
	{ 0x73da78ac, "sock_alloc_send_pskb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x13fe5644, "seq_printf" },
	{ 0x2db5a302, "skb_copy" },
	{ 0xf1de5c0a, "skb_clone" },
	{ 0x15bcc2d9, "_copy_from_iter" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf94536c2, "proc_dointvec" },
	{ 0x8cf244f1, "seq_puts" },
	{ 0x960990a1, "sock_gettstamp" },
	{ 0xb805d2b3, "unregister_net_sysctl_table" },
	{ 0x2788847d, "from_kuid_munged" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x4d160fd7, "iov_iter_revert" },
	{ 0xf1e1c4c6, "proc_create_seq_private" },
	{ 0xf9a482f9, "msleep" },
	{ 0x242851e9, "sock_init_data" },
	{ 0x87809aeb, "put_user_ifreq" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0xa5bdee8c, "release_sock" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "psnap");


MODULE_INFO(srcversion, "3959E5565C19B7641C3FE48");
