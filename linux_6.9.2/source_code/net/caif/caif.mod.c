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

KSYMTAB_FUNC(get_cfcnfg, "", "");
KSYMTAB_FUNC(caif_enroll_dev, "", "");
KSYMTAB_FUNC(caif_disconnect_client, "", "");
KSYMTAB_FUNC(caif_connect_client, "", "");
KSYMTAB_FUNC(cfcnfg_add_phy_layer, "", "");
KSYMTAB_FUNC(cfcnfg_set_phy_state, "", "");
KSYMTAB_FUNC(cfcnfg_del_phy_layer, "", "");
KSYMTAB_FUNC(caif_free_client, "", "");
KSYMTAB_FUNC(caif_client_register_refcnt, "", "");
KSYMTAB_FUNC(cfpkt_fromnative, "", "");
KSYMTAB_FUNC(cfpkt_tonative, "", "");
KSYMTAB_FUNC(cfpkt_extr_head, "", "");
KSYMTAB_FUNC(cfpkt_add_head, "", "");
KSYMTAB_FUNC(cfpkt_info, "", "");
KSYMTAB_FUNC(cfpkt_set_prio, "", "");

SYMBOL_CRC(get_cfcnfg, 0x42eaabc3, "");
SYMBOL_CRC(caif_enroll_dev, 0x6349c798, "");
SYMBOL_CRC(caif_disconnect_client, 0xbcf84d46, "");
SYMBOL_CRC(caif_connect_client, 0x709459f5, "");
SYMBOL_CRC(cfcnfg_add_phy_layer, 0xfb0c0920, "");
SYMBOL_CRC(cfcnfg_set_phy_state, 0x839ddb7b, "");
SYMBOL_CRC(cfcnfg_del_phy_layer, 0x38701a7c, "");
SYMBOL_CRC(caif_free_client, 0xb7b6874e, "");
SYMBOL_CRC(caif_client_register_refcnt, 0x1446b60a, "");
SYMBOL_CRC(cfpkt_fromnative, 0x2a09f713, "");
SYMBOL_CRC(cfpkt_tonative, 0x4a237e57, "");
SYMBOL_CRC(cfpkt_extr_head, 0x40babbe0, "");
SYMBOL_CRC(cfpkt_add_head, 0x3fa84493, "");
SYMBOL_CRC(cfpkt_info, 0x329dbd06, "");
SYMBOL_CRC(cfpkt_set_prio, 0x9e3e305d, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x4a04c76c, "dev_add_pack" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4c236f6f, "__x86_indirect_thunk_r15" },
	{ 0x692ed195, "___pskb_trim" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xa916b694, "strnlen" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xc084677a, "skb_pull" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0xe675d21a, "dev_remove_pack" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe246278b, "skb_push" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x8beb6433, "skb_cow_data" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x8e7a30bb, "__dev_queue_xmit" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5f7a6ef2, "pskb_put" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C1A622C73544DD1E97E9B0B");
