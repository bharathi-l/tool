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
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4150f887, "rxrpc_kernel_check_life" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xee6e7493, "rxrpc_kernel_shutdown_call" },
	{ 0xd584b49a, "rxrpc_kernel_put_call" },
	{ 0xb1518e15, "cancel_work" },
	{ 0x122c3a7e, "_printk" },
	{ 0xa89fef19, "rxrpc_kernel_recv_data" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x92e3c42f, "iov_iter_discard" },
	{ 0x9d70009c, "kernel_listen" },
	{ 0x9604c6bb, "kernel_sock_shutdown" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x26ed65de, "sock_release" },
	{ 0x851725d3, "key_put" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x31bf3ca3, "rxrpc_debug_id" },
	{ 0x5424ebc2, "rxrpc_kernel_charge_accept" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0xfcdbfba6, "keyring_alloc" },
	{ 0xfe1d2e94, "key_create_or_update" },
	{ 0xf8311014, "key_link" },
	{ 0xece43bce, "init_net" },
	{ 0xb3824a12, "sock_create_kern" },
	{ 0x2a17e794, "rxrpc_sock_set_min_security_level" },
	{ 0x5d7642cb, "rxrpc_sock_set_security_keyring" },
	{ 0x4bbbcb6f, "kernel_bind" },
	{ 0xd9feb6ad, "rxrpc_kernel_new_call_notification" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29cace06, "rxrpc_kernel_set_tx_length" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x8c3f85ca, "iov_iter_bvec" },
	{ 0xb22cf48, "rxrpc_kernel_send_data" },
	{ 0x2a718f47, "iov_iter_kvec" },
	{ 0x71354e3e, "rxrpc_kernel_abort_call" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "rxrpc");


MODULE_INFO(srcversion, "C1068380B46E3B1EED07AC4");
