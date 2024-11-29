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
	{ 0x8e7a30bb, "__dev_queue_xmit" },
	{ 0xeced00ee, "ovs_vport_alloc" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x3c4e55fe, "gretap_fb_dev_create" },
	{ 0x5b0a6c1c, "dev_change_flags" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xd36e955, "ovs_netdev_link" },
	{ 0xfb20242b, "rtnl_delete_link" },
	{ 0xd265ebaa, "ovs_vport_free" },
	{ 0xb5b9027f, "ovs_vport_ops_unregister" },
	{ 0xab37f7e4, "ovs_netdev_tunnel_destroy" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x70033dab, "__ovs_vport_ops_register" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "openvswitch,ip_gre");


MODULE_INFO(srcversion, "23BA1ACE3AF7CB02F8A39C9");
