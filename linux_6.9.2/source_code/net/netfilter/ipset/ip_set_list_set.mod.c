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
	{ 0xfd37b06d, "ip_set_match_extensions" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbf5dd39f, "ip_set_extensions" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8f48926b, "ip_set_elem_len" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x37a0cba, "kfree" },
	{ 0xd5a43273, "nla_put" },
	{ 0x84a0402, "ip_set_name_byindex" },
	{ 0xa916b694, "strnlen" },
	{ 0x618e36fd, "ip_set_put_extensions" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xa7488f76, "ip_set_put_flags" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x24d273d1, "add_timer" },
	{ 0x8e81f6b1, "ip_set_get_extensions" },
	{ 0xcf2bc875, "ip_set_get_byname" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x91662c5f, "ip_set_type_register" },
	{ 0x240ddc75, "ip_set_put_byindex" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xdf237453, "timer_shutdown_sync" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x24852a11, "ip_set_init_comment" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xd78994af, "ip_set_type_unregister" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x2dbafa6d, "ip_set_del" },
	{ 0x4acd6fba, "ip_set_add" },
	{ 0x7751f9b, "ip_set_test" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "ip_set");


MODULE_INFO(srcversion, "20575C923B3D95D2B4F6307");
