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
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xcce9deba, "proc_remove" },
	{ 0x32a7416d, "proc_create_data" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xd47a039c, "module_put" },
	{ 0x6a83f01d, "__xfrm_state_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x999e8297, "vfree" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x7a53770b, "__put_devmap_managed_page_refs" },
	{ 0xf8641358, "__folio_put" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0xfb578fc5, "memset" },
	{ 0x44625732, "__alloc_pages" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xd28964a6, "proc_mkdir" },
	{ 0xc162d7f5, "proc_create" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x28850071, "kmalloc_node_trace" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x4b27709a, "kthread_create_on_node" },
	{ 0x71b01fe, "kthread_bind" },
	{ 0x9262e632, "wake_up_process" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x1b9d54ff, "kthread_stop" },
	{ 0xc6cbbc89, "capable" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x18f58619, "try_module_get" },
	{ 0xa916b694, "strnlen" },
	{ 0x9e0c711d, "vzalloc_node" },
	{ 0x3efb7f15, "dev_get_by_name" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0x44f0ad9, "get_random_u16" },
	{ 0xfba7a5f5, "__get_random_u32_below" },
	{ 0x9858f364, "get_random_u8" },
	{ 0x4f332fd3, "xfrm_state_lookup_byspi" },
	{ 0x112a0bc3, "xfrm_stateonly_find" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa6257a2f, "complete" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xd73653c4, "freezer_active" },
	{ 0xe87c25ef, "freezing_slow_path" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xe3cda79b, "softnet_data" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x1b6314fd, "in_aton" },
	{ 0xe246278b, "skb_push" },
	{ 0xdc22ab35, "hrtimer_init_sleeper" },
	{ 0xde206944, "hrtimer_sleeper_start_expires" },
	{ 0x1000e51, "schedule" },
	{ 0x4a666d56, "hrtimer_cancel" },
	{ 0x28cca31b, "eth_type_trans" },
	{ 0xd17e721e, "netif_receive_skb" },
	{ 0x5089f45f, "ip_send_check" },
	{ 0xa2066eb8, "pskb_expand_head" },
	{ 0xc084677a, "skb_pull" },
	{ 0xfca361c1, "pktgen_xfrm_outer_mode_output" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x8e7a30bb, "__dev_queue_xmit" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x291818d2, "udp4_hwcsum" },
	{ 0x201b4e4b, "skb_checksum" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x41482d8b, "strndup_user" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x9493fc86, "node_states" },
	{ 0x652032cb, "mac_pton" },
	{ 0x609bcd98, "in6_pton" },
	{ 0x47d0e073, "param_ops_int" },
	{ 0x2c402ac1, "seq_read" },
	{ 0x80340e17, "seq_lseek" },
	{ 0x14f55ccf, "single_release" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x122c3a7e, "_printk" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0xf54b7f27, "single_open" },
	{ 0x8cf244f1, "seq_puts" },
	{ 0x13fe5644, "seq_printf" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x754d539c, "strlen" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x5a921311, "strncmp" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2f57fb45, "kthread_stop_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x63fd798c, "remove_proc_entry" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0x618911fc, "numa_node" },
	{ 0xdece0e7e, "__netdev_alloc_skb" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C501ED88CC4632F4D0254A2");
