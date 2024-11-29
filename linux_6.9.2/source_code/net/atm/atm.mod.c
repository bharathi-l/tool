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

KSYMTAB_FUNC(register_atm_ioctl, "", "");
KSYMTAB_FUNC(deregister_atm_ioctl, "", "");
KSYMTAB_DATA(vcc_hash, "", "");
KSYMTAB_DATA(vcc_sklist_lock, "", "");
KSYMTAB_FUNC(vcc_insert_socket, "", "");
KSYMTAB_FUNC(vcc_release_async, "", "");
KSYMTAB_FUNC(vcc_process_recv_queue, "", "");
KSYMTAB_FUNC(atm_dev_signal_change, "", "");
KSYMTAB_FUNC(atm_dev_release_vccs, "", "");
KSYMTAB_FUNC(register_atmdevice_notifier, "_gpl", "");
KSYMTAB_FUNC(unregister_atmdevice_notifier, "_gpl", "");
KSYMTAB_FUNC(atm_charge, "", "");
KSYMTAB_FUNC(atm_alloc_charge, "", "");
KSYMTAB_FUNC(atm_pcr_goal, "", "");
KSYMTAB_FUNC(sonet_copy_stats, "", "");
KSYMTAB_FUNC(sonet_subtract_stats, "", "");
KSYMTAB_FUNC(atm_init_aal5, "", "");
KSYMTAB_FUNC(atm_dev_lookup, "", "");
KSYMTAB_FUNC(atm_dev_register, "", "");
KSYMTAB_FUNC(atm_dev_deregister, "", "");
KSYMTAB_DATA(atm_proc_root, "", "");

SYMBOL_CRC(register_atm_ioctl, 0xa00f4e0b, "");
SYMBOL_CRC(deregister_atm_ioctl, 0xf1db46d2, "");
SYMBOL_CRC(vcc_hash, 0x2cc2d52d, "");
SYMBOL_CRC(vcc_sklist_lock, 0x44c6e633, "");
SYMBOL_CRC(vcc_insert_socket, 0x342eb451, "");
SYMBOL_CRC(vcc_release_async, 0xea372566, "");
SYMBOL_CRC(vcc_process_recv_queue, 0xf3d10f9c, "");
SYMBOL_CRC(atm_dev_signal_change, 0x6c13399e, "");
SYMBOL_CRC(atm_dev_release_vccs, 0x942c85d4, "");
SYMBOL_CRC(register_atmdevice_notifier, 0xb09faf79, "_gpl");
SYMBOL_CRC(unregister_atmdevice_notifier, 0xcfb6a3da, "_gpl");
SYMBOL_CRC(atm_charge, 0x13c76149, "");
SYMBOL_CRC(atm_alloc_charge, 0x4e8f2911, "");
SYMBOL_CRC(atm_pcr_goal, 0xf49bc67a, "");
SYMBOL_CRC(sonet_copy_stats, 0xaa024146, "");
SYMBOL_CRC(sonet_subtract_stats, 0x9feaf287, "");
SYMBOL_CRC(atm_init_aal5, 0xcdf4ec01, "");
SYMBOL_CRC(atm_dev_lookup, 0x4f908466, "");
SYMBOL_CRC(atm_dev_register, 0x99dfc6f6, "");
SYMBOL_CRC(atm_dev_deregister, 0x9d6a5e15, "");
SYMBOL_CRC(atm_proc_root, 0x4443d399, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0xd4216927, "skb_free_datagram" },
	{ 0x18f58619, "try_module_get" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xea4da57c, "dev_set_name" },
	{ 0x9a25806b, "consume_skb" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0xf346231f, "seq_list_start_head" },
	{ 0xb5f5c77e, "skb_dequeue" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x96848186, "scnprintf" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x37a0cba, "kfree" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x32a7416d, "proc_create_data" },
	{ 0x4862064c, "remove_proc_subtree" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe2964344, "__wake_up" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3aca0190, "_raw_write_lock_irq" },
	{ 0x8cb09cb0, "skb_queue_purge_reason" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x7222c16a, "proto_unregister" },
	{ 0x6d334118, "__get_user_8" },
	{ 0x1000e51, "schedule" },
	{ 0x3c90e235, "sock_register" },
	{ 0x2d34b705, "__sock_recv_cmsgs" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x56fa3780, "put_device" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x910bb85d, "proto_register" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd6a7d5b2, "skb_queue_tail" },
	{ 0xd47a039c, "module_put" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xb75bceb7, "device_create_file" },
	{ 0xece43bce, "init_net" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x3973c14b, "noop_llseek" },
	{ 0x36c091de, "sk_free" },
	{ 0xdf9c13e8, "sock_wake_async" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xde85399, "sock_no_accept" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6f5598d1, "sock_no_listen" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x4be84ba, "seq_putc" },
	{ 0x325e698, "class_unregister" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xf3eaf8a7, "lock_sock_nested" },
	{ 0x2e591177, "skb_copy_datagram_iter" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x5f258127, "sk_alloc" },
	{ 0x7f683bae, "device_register" },
	{ 0x7acfab09, "device_del" },
	{ 0x9f76baf4, "_raw_write_unlock_irq" },
	{ 0xf4ba9908, "sock_no_socketpair" },
	{ 0xfb578fc5, "memset" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0x1e54ba33, "sock_no_mmap" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x75f63f0d, "skb_recv_datagram" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x63fd798c, "remove_proc_entry" },
	{ 0x13fe5644, "seq_printf" },
	{ 0x15bcc2d9, "_copy_from_iter" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x8cf244f1, "seq_puts" },
	{ 0x960990a1, "sock_gettstamp" },
	{ 0x9cbd991d, "_proc_mkdir" },
	{ 0x705f660f, "send_sig" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x754d539c, "strlen" },
	{ 0x2eebc68d, "dev_kfree_skb_any_reason" },
	{ 0x4d160fd7, "iov_iter_revert" },
	{ 0xf1e1c4c6, "proc_create_seq_private" },
	{ 0x1e980173, "class_register" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x242851e9, "sock_init_data" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x7d22e8cc, "device_remove_file" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xa5bdee8c, "release_sock" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FE9AF7673A6BF535984A6EE");
