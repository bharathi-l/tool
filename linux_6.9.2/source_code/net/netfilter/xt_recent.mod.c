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
	{ 0x37a0cba, "kfree" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x48012e28, "xt_check_proc_name" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xa2e9dc6a, "__do_once_done" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xa916b694, "strnlen" },
	{ 0x65441f22, "init_user_ns" },
	{ 0x1da035f6, "make_kuid" },
	{ 0x88313973, "make_kgid" },
	{ 0x32a7416d, "proc_create_data" },
	{ 0xe920511e, "proc_set_user" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x4841bdee, "strnchr" },
	{ 0x609bcd98, "in6_pton" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0x2c402ac1, "seq_read" },
	{ 0x80340e17, "seq_lseek" },
	{ 0xcdd18860, "seq_release_private" },
	{ 0xd786c3ef, "param_ops_uint" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc648bd3c, "__seq_open_private" },
	{ 0x13fe5644, "seq_printf" },
	{ 0x4be84ba, "seq_putc" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0xe25b8c15, "xt_register_matches" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xd4363de3, "xt_unregister_matches" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd28964a6, "proc_mkdir" },
	{ 0x63fd798c, "remove_proc_entry" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "5F5B3BA05ACF4CE71C79A8B");
