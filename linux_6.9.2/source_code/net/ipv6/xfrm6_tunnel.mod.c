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

KSYMTAB_FUNC(xfrm6_tunnel_spi_lookup, "", "");
KSYMTAB_FUNC(xfrm6_tunnel_alloc_spi, "", "");

SYMBOL_CRC(xfrm6_tunnel_spi_lookup, 0xf6d59cb3, "");
SYMBOL_CRC(xfrm6_tunnel_alloc_spi, 0x3d90385a, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe246278b, "skb_push" },
	{ 0x4ebf36a1, "kmem_cache_free" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x659ded26, "xfrm_flush_gc" },
	{ 0xe40d0e55, "xfrm_state_flush" },
	{ 0x8b15674f, "pcpu_hot" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x3cfdd46f, "kmem_cache_alloc" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x849536b3, "xfrm6_rcv_spi" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x3754fb97, "kmem_cache_create" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0x5f9102a1, "xfrm_register_type" },
	{ 0x69670d46, "xfrm6_tunnel_register" },
	{ 0xc35e0b3f, "xfrm6_tunnel_deregister" },
	{ 0x547b7709, "xfrm_unregister_type" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0x560cd29a, "kmem_cache_destroy" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "tunnel6");


MODULE_INFO(srcversion, "2EE080432F7BC13D5E7B9D3");
