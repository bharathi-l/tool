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
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x838816d8, "nf_log_set" },
	{ 0x7990f761, "dev_get_by_index_rcu" },
	{ 0xf5d586df, "skb_copy_bits" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xece43bce, "init_net" },
	{ 0x9aaeefce, "sysctl_nf_log_all_netns" },
	{ 0xd4961de, "nf_log_buf_open" },
	{ 0x80c68137, "nf_log_buf_close" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0x911e4d6a, "nf_log_register" },
	{ 0x9bcbeb85, "nf_log_unregister" },
	{ 0x122c3a7e, "_printk" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc4c4b2b2, "nf_log_unset" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x65441f22, "init_user_ns" },
	{ 0x9164d2c3, "from_kgid_munged" },
	{ 0x2788847d, "from_kuid_munged" },
	{ 0xcd6f2dc9, "nf_log_buf_add" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "582CEC5BF1E45F8A0BFB75F");
