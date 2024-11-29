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

KSYMTAB_FUNC(fou_encap_hlen, "", "");
KSYMTAB_FUNC(gue_encap_hlen, "", "");
KSYMTAB_FUNC(__fou_build_header, "", "");
KSYMTAB_FUNC(__gue_build_header, "", "");

SYMBOL_CRC(fou_encap_hlen, 0x1757d1a4, "");
SYMBOL_CRC(gue_encap_hlen, 0xf13914b3, "");
SYMBOL_CRC(__fou_build_header, 0xc2b7a689, "");
SYMBOL_CRC(__gue_build_header, 0x40089451, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x6c8f95e2, "__skb_checksum_complete" },
	{ 0x427af7f7, "ip_tunnel_encap_add_ops" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xa5cecfa, "udp_sock_create4" },
	{ 0xc760ce2d, "genlmsg_put" },
	{ 0x32a66e33, "udp_set_csum" },
	{ 0x37a0cba, "kfree" },
	{ 0x84514178, "inet_offloads" },
	{ 0xedc2e8ef, "inet_protos" },
	{ 0x69778625, "iptunnel_handle_offloads" },
	{ 0xac3201b0, "udp_flow_hashrnd" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa2066eb8, "pskb_expand_head" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4a7eeadd, "__alloc_skb" },
	{ 0xb65b063c, "__skb_get_hash" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8911bab3, "netlink_unicast" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe246278b, "skb_push" },
	{ 0xd5a43273, "nla_put" },
	{ 0xeba8170b, "unregister_pernet_device" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x279a19e6, "ip_tunnel_encap_del_ops" },
	{ 0x218e3219, "udp_tunnel_sock_release" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0x673d61d6, "register_btf_kfunc_id_set" },
	{ 0xe6778d60, "setup_udp_tunnel_sock" },
	{ 0x38f28782, "udp_sock_create6" },
	{ 0xc793d1b4, "skb_trim" },
	{ 0x268d2cca, "inet6_offloads" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xc01b7698, "genl_unregister_family" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0xf20b36c9, "genl_register_family" },
	{ 0xa802aea8, "register_pernet_device" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "ip_tunnel,udp_tunnel,ip6_udp_tunnel");


MODULE_INFO(srcversion, "6C7B880133ADDB451ABD907");
