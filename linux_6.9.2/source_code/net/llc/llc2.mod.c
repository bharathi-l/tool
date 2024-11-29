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
	{ 0xda10ec3, "security_sock_graft" },
	{ 0x136b25da, "sock_queue_rcv_skb_reason" },
	{ 0x4914275a, "sock_i_uid" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xe2bbfa56, "proc_dointvec_jiffies" },
	{ 0xdbf09180, "llc_build_and_send_ui_pkt" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xab667667, "llc_sap_close" },
	{ 0xb5f5c77e, "skb_dequeue" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x113ea25, "llc_sap_open" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8f099454, "put_cmsg" },
	{ 0x8cb09cb0, "skb_queue_purge_reason" },
	{ 0xb3012895, "register_net_sysctl_sz" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x7222c16a, "proto_unregister" },
	{ 0x44dc4b5d, "dev_getfirstbyhwtype" },
	{ 0x3c90e235, "sock_register" },
	{ 0x5a49628c, "datagram_poll" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x910bb85d, "proto_register" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xd6a7d5b2, "skb_queue_tail" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x33338211, "rcuref_get_slowpath" },
	{ 0xa021e647, "llc_add_pack" },
	{ 0xece43bce, "init_net" },
	{ 0x197f49c1, "llc_sap_find" },
	{ 0x38b92846, "llc_remove_pack" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc0cb301e, "dev_get_by_index" },
	{ 0x36c091de, "sk_free" },
	{ 0x7990f761, "dev_get_by_index_rcu" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xe246278b, "skb_push" },
	{ 0xbc74b7d, "llc_mac_hdr_init" },
	{ 0x52d7b2fd, "llc_sap_list" },
	{ 0x863b8d86, "ns_capable" },
	{ 0xf3eaf8a7, "lock_sock_nested" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x2e591177, "skb_copy_datagram_iter" },
	{ 0x5f258127, "sk_alloc" },
	{ 0xd28964a6, "proc_mkdir" },
	{ 0x3f43d8d5, "llc_set_station_handler" },
	{ 0xf4ba9908, "sock_no_socketpair" },
	{ 0x844c5de4, "sock_efree" },
	{ 0x790c3085, "sk_wait_data" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x1e54ba33, "sock_no_mmap" },
	{ 0x11ed6da9, "skb_unlink" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1fad1a56, "sock_rfree" },
	{ 0x8e7a30bb, "__dev_queue_xmit" },
	{ 0x1a8c0f81, "skb_set_owner_w" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x73da78ac, "sock_alloc_send_pskb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x63fd798c, "remove_proc_entry" },
	{ 0x13fe5644, "seq_printf" },
	{ 0xf1de5c0a, "skb_clone" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x15bcc2d9, "_copy_from_iter" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x8cf244f1, "seq_puts" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb805d2b3, "unregister_net_sysctl_table" },
	{ 0x84c4c172, "dev_getbyhwaddr_rcu" },
	{ 0x2788847d, "from_kuid_munged" },
	{ 0x4d160fd7, "iov_iter_revert" },
	{ 0xf1e1c4c6, "proc_create_seq_private" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x242851e9, "sock_init_data" },
	{ 0xa5bdee8c, "release_sock" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "llc");


MODULE_INFO(srcversion, "7869D53FC5D110FE6A6CF10");
