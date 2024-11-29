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
	{ 0xd4216927, "skb_free_datagram" },
	{ 0x136b25da, "sock_queue_rcv_skb_reason" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x9a25806b, "consume_skb" },
	{ 0x4a04c76c, "dev_add_pack" },
	{ 0x80816f26, "get_user_ifreq" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xebe48bde, "sock_common_getsockopt" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0xa8a6dd54, "sock_common_setsockopt" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8f099454, "put_cmsg" },
	{ 0x8cb09cb0, "skb_queue_purge_reason" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x7222c16a, "proto_unregister" },
	{ 0x44dc4b5d, "dev_getfirstbyhwtype" },
	{ 0x3c90e235, "sock_register" },
	{ 0x5a49628c, "datagram_poll" },
	{ 0x2d34b705, "__sock_recv_cmsgs" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x910bb85d, "proto_register" },
	{ 0xc6cbbc89, "capable" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xafeaf674, "sock_no_shutdown" },
	{ 0xece43bce, "init_net" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xe675d21a, "dev_remove_pack" },
	{ 0xc0cb301e, "dev_get_by_index" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xde85399, "sock_no_accept" },
	{ 0xe246278b, "skb_push" },
	{ 0x6f5598d1, "sock_no_listen" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x863b8d86, "ns_capable" },
	{ 0xf3eaf8a7, "lock_sock_nested" },
	{ 0xda733252, "sock_no_bind" },
	{ 0x2e591177, "skb_copy_datagram_iter" },
	{ 0x5f258127, "sk_alloc" },
	{ 0xf4ba9908, "sock_no_socketpair" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x38297715, "ieee802154_hdr_pull" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x1e54ba33, "sock_no_mmap" },
	{ 0x246cf6ad, "sock_common_recvmsg" },
	{ 0xbe478f6a, "sk_common_release" },
	{ 0x8e7a30bb, "__dev_queue_xmit" },
	{ 0x75f63f0d, "skb_recv_datagram" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x73da78ac, "sock_alloc_send_pskb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x9b8d9591, "sock_no_getname" },
	{ 0x3efb7f15, "dev_get_by_name" },
	{ 0xf1de5c0a, "skb_clone" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x986d6241, "dst_release" },
	{ 0x15bcc2d9, "_copy_from_iter" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x960990a1, "sock_gettstamp" },
	{ 0x84c4c172, "dev_getbyhwaddr_rcu" },
	{ 0x4d160fd7, "iov_iter_revert" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x242851e9, "sock_init_data" },
	{ 0xc888cf8e, "dev_load" },
	{ 0x3611cec5, "sk_ioctl" },
	{ 0x87809aeb, "put_user_ifreq" },
	{ 0xa5bdee8c, "release_sock" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "ieee802154");


MODULE_INFO(srcversion, "CA4EC86803E504251DABB7A");
