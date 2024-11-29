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
	{ 0xc6f46339, "init_timer_key" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x9e98722b, "ip_set_get_ipaddr6" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa7488f76, "ip_set_put_flags" },
	{ 0xfd37b06d, "ip_set_match_extensions" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x24852a11, "ip_set_init_comment" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x81fff2d1, "ip_set_netmask_map" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x91662c5f, "ip_set_type_register" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xd78994af, "ip_set_type_unregister" },
	{ 0xbf5dd39f, "ip_set_extensions" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x37a0cba, "kfree" },
	{ 0x397f6231, "ip_set_free" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xd5a43273, "nla_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x618e36fd, "ip_set_put_extensions" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x122c3a7e, "_printk" },
	{ 0xa293f8a6, "ip_set_get_ipaddr4" },
	{ 0x8e81f6b1, "ip_set_get_extensions" },
	{ 0x7924b6de, "ip_set_hostmask_map" },
	{ 0x22d966c6, "ip_set_range_to_cidr" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0xf3b4d4ae, "ip_set_alloc" },
	{ 0x8f48926b, "ip_set_elem_len" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "ip_set");


MODULE_INFO(srcversion, "7543F9ED49914353701B5FA");
