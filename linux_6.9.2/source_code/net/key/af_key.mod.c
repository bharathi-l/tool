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
	{ 0x55a7235c, "xfrm_policy_flush" },
	{ 0xcbbbde5f, "km_policy_notify" },
	{ 0xe40d0e55, "xfrm_state_flush" },
	{ 0xa249967c, "km_state_notify" },
	{ 0x863b8d86, "ns_capable" },
	{ 0x5f258127, "sk_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x242851e9, "sock_init_data" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x65f11366, "proc_create_net_data" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x15bcc2d9, "_copy_from_iter" },
	{ 0x4d160fd7, "iov_iter_revert" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0xaab23340, "xfrm_calg_get_byname" },
	{ 0xd6f50cf7, "xfrm_ealg_get_byname" },
	{ 0x8cb09cb0, "skb_queue_purge_reason" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x36c091de, "sk_free" },
	{ 0x1248b826, "xfrm_policy_byid" },
	{ 0x989c59bb, "xfrm_audit_policy_delete" },
	{ 0x344685a0, "xfrm_policy_destroy" },
	{ 0xc599a772, "security_xfrm_state_delete" },
	{ 0x79380683, "xfrm_state_delete" },
	{ 0x425dd356, "xfrm_audit_state_delete" },
	{ 0x6a83f01d, "__xfrm_state_destroy" },
	{ 0x7d4345ec, "xfrm_find_acq_byseq" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x87b87850, "xfrm_policy_alloc" },
	{ 0xc65304b3, "security_xfrm_policy_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x1c9ce5ab, "xfrm_policy_bysel_ctx" },
	{ 0xa9c63b69, "security_xfrm_policy_free" },
	{ 0x71b79b9e, "xfrm_policy_insert" },
	{ 0x307e96d9, "xfrm_audit_policy_add" },
	{ 0x3e8df1f9, "xfrm_find_acq" },
	{ 0x37e497e8, "verify_spi_info" },
	{ 0xada4e1e8, "xfrm_alloc_spi" },
	{ 0x4a637e59, "xfrm_state_alloc" },
	{ 0x27866435, "security_xfrm_state_alloc" },
	{ 0xc80741, "xfrm_ealg_get_byid" },
	{ 0x754d539c, "strlen" },
	{ 0xc5e2994, "xfrm_init_state" },
	{ 0x509d126f, "xfrm_state_update" },
	{ 0xa1cef67a, "xfrm_audit_state_add" },
	{ 0xb95eb023, "xfrm_state_add" },
	{ 0x5c699441, "xfrm_aalg_get_byid" },
	{ 0x72395dc1, "xfrm_calg_get_byid" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xda733252, "sock_no_bind" },
	{ 0x84b08e3b, "sock_no_connect" },
	{ 0xf4ba9908, "sock_no_socketpair" },
	{ 0xde85399, "sock_no_accept" },
	{ 0x9b8d9591, "sock_no_getname" },
	{ 0x5a49628c, "datagram_poll" },
	{ 0x62e9cfe4, "sock_no_ioctl" },
	{ 0x6f5598d1, "sock_no_listen" },
	{ 0xafeaf674, "sock_no_shutdown" },
	{ 0x1e54ba33, "sock_no_mmap" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x910bb85d, "proto_register" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0x3c90e235, "sock_register" },
	{ 0x62d93db4, "xfrm_register_km" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0x7222c16a, "proto_unregister" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf1de5c0a, "skb_clone" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x1fad1a56, "sock_rfree" },
	{ 0xd6a7d5b2, "skb_queue_tail" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x788843c6, "xfrm_policy_walk" },
	{ 0xac276017, "xfrm_policy_walk_done" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x75f63f0d, "skb_recv_datagram" },
	{ 0x2e591177, "skb_copy_datagram_iter" },
	{ 0xd4216927, "skb_free_datagram" },
	{ 0x2d34b705, "__sock_recv_cmsgs" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc9df055a, "xfrm_policy_walk_init" },
	{ 0x2db5a302, "skb_copy" },
	{ 0xa1dc51e, "xfrm_state_walk_done" },
	{ 0x8888fa8, "xfrm_state_walk" },
	{ 0x49cbcd9f, "xfrm_state_lookup" },
	{ 0x63fd798c, "remove_proc_entry" },
	{ 0xa2a427b5, "sock_i_ino" },
	{ 0x4914275a, "sock_i_uid" },
	{ 0x2788847d, "from_kuid_munged" },
	{ 0x13fe5644, "seq_printf" },
	{ 0x67b78eb3, "seq_hlist_next_rcu" },
	{ 0x1e9edfb7, "seq_hlist_start_head_rcu" },
	{ 0x5f46210e, "xfrm_unregister_km" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x69acdf38, "memcpy" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x2782b393, "xfrm_state_walk_init" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0x4ef4d2e9, "skb_put" },
	{ 0xfb578fc5, "memset" },
	{ 0x122c3a7e, "_printk" },
	{ 0x28e23139, "xfrm_probe_algs" },
	{ 0xa575945, "xfrm_count_pfkey_auth_supported" },
	{ 0x7a8ca627, "xfrm_count_pfkey_enc_supported" },
	{ 0xb73be794, "xfrm_ealg_get_byidx" },
	{ 0xc6b1fdbe, "xfrm_aalg_get_byidx" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "xfrm_algo");


MODULE_INFO(srcversion, "5212B06BDF22C61446E6D4A");
