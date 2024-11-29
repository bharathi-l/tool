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
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x9a25806b, "consume_skb" },
	{ 0xa85bbe00, "__SCT__tp_func_sk_data_ready" },
	{ 0x70581244, "phonet_stream_ops" },
	{ 0xfe71b7d9, "unregister_netdev" },
	{ 0xb5f5c77e, "skb_dequeue" },
	{ 0x300bb0f1, "pn_skb_send" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xdc0192a7, "__tracepoint_sk_data_ready" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8cb09cb0, "skb_queue_purge_reason" },
	{ 0x493328ea, "phonet_proto_unregister" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x6373ea58, "alloc_netdev_mqs" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd6a7d5b2, "skb_queue_tail" },
	{ 0x21c148f4, "__sk_receive_skb" },
	{ 0xda959b0f, "__SCK__tp_func_sk_data_ready" },
	{ 0x36c091de, "sk_free" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xe246278b, "skb_push" },
	{ 0x9ecb4adc, "register_netdev" },
	{ 0x589e0a2c, "free_netdev" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xf3eaf8a7, "lock_sock_nested" },
	{ 0x2e591177, "skb_copy_datagram_iter" },
	{ 0x5f258127, "sk_alloc" },
	{ 0x3356a89f, "netif_tx_wake_queue" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0xff9635d5, "pn_sock_get_port" },
	{ 0x5cf52384, "netif_rx" },
	{ 0xdece0e7e, "__netdev_alloc_skb" },
	{ 0xbe478f6a, "sk_common_release" },
	{ 0x1fad1a56, "sock_rfree" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x6782c518, "phonet_proto_register" },
	{ 0x54e9d54b, "pn_sock_hash" },
	{ 0x1a8c0f81, "skb_set_owner_w" },
	{ 0x75f63f0d, "skb_recv_datagram" },
	{ 0x73da78ac, "sock_alloc_send_pskb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xe10bc0d2, "netif_carrier_off" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x9a87163a, "sk_stream_wait_connect" },
	{ 0x15bcc2d9, "_copy_from_iter" },
	{ 0x90ba4099, "pn_sock_unhash" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x4d160fd7, "iov_iter_revert" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x242851e9, "sock_init_data" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xa5bdee8c, "release_sock" },
	{ 0x1c5402a3, "skb_queue_head" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "phonet");


MODULE_INFO(srcversion, "0262E2E9B22C30F71C66D76");
