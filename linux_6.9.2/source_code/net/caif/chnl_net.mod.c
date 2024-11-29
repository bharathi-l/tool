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
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xbcf84d46, "caif_disconnect_client" },
	{ 0x709459f5, "caif_connect_client" },
	{ 0xe7f87e08, "__dev_get_by_index" },
	{ 0x44465aeb, "dev_set_mtu" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3abbdae8, "netdev_state_change" },
	{ 0x3c0dbc1e, "register_netdevice" },
	{ 0x4a237e57, "cfpkt_tonative" },
	{ 0x5cf52384, "netif_rx" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe2964344, "__wake_up" },
	{ 0x1446b60a, "caif_client_register_refcnt" },
	{ 0x3356a89f, "netif_tx_wake_queue" },
	{ 0xd8dc1a8d, "rtnl_link_unregister" },
	{ 0x38485abd, "unregister_netdevice_queue" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x39ec7d18, "rtnl_link_register" },
	{ 0xd5a43273, "nla_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x1884ee6c, "dev_close" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xb7b6874e, "caif_free_client" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x56470118, "__warn_printk" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x9166fada, "strncpy" },
	{ 0x2a09f713, "cfpkt_fromnative" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x122c3a7e, "_printk" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "caif");


MODULE_INFO(srcversion, "783E571E2D564141FA049BE");
