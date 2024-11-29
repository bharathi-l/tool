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
	{ 0x27f5781b, "inet_bhash2_reset_saddr" },
	{ 0x3ad8a105, "inet6_csk_addr2sockaddr" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xb1191365, "inet6_lookup_reuseport" },
	{ 0xf0aa1c11, "dccp_v4_connect" },
	{ 0xec445fa7, "ip_queue_xmit" },
	{ 0xe5af7dec, "__fl6_sock_lookup" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x9fbf5caa, "dccp_shutdown" },
	{ 0x1252c788, "inet_bhash2_update_saddr" },
	{  0x5d39c, "dccp_connect" },
	{ 0x9a25806b, "consume_skb" },
	{ 0x1b02f62d, "dccp_rcv_state_process" },
	{ 0x32d3b027, "dccp_reqsk_send_ack" },
	{ 0xcfa981c7, "inet6_bind" },
	{ 0x9ca4742b, "inet_csk_accept" },
	{ 0xeb3b4eaa, "inet6_unregister_protosw" },
	{ 0xbe4eb6ed, "secure_dccpv6_sequence_number" },
	{ 0xebe48bde, "sock_common_getsockopt" },
	{ 0xb20bf420, "__inet_inherit_port" },
	{ 0xf30c6ca2, "inet_dccp_listen" },
	{ 0xd4592578, "security_inet_conn_request" },
	{ 0x37a0cba, "kfree" },
	{ 0x26e67e99, "security_req_classify_flow" },
	{ 0xfdd6607c, "__xfrm_policy_check" },
	{ 0x10124f43, "inet6_sk_rebuild_header" },
	{ 0xa8a6dd54, "sock_common_setsockopt" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xac7f6213, "__sk_mem_schedule" },
	{ 0xfdc99e60, "ipv6_setsockopt" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0xfa9b602d, "inet_csk_reqsk_queue_hash_add" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x58d5b5de, "dccp_syn_ack_timeout" },
	{ 0x4cdd391d, "dccp_feat_list_purge" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x87a132ef, "sk_error_report" },
	{ 0x120b30f5, "register_pernet_subsys" },
	{ 0xc3c8005, "inet_ehash_nolisten" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x3126ab0d, "inet6_del_protocol" },
	{ 0x122c3a7e, "_printk" },
	{ 0x3d360ebe, "dccp_invalid_packet" },
	{ 0xe4587f31, "inet_stream_connect" },
	{ 0x7222c16a, "proto_unregister" },
	{ 0xfce1c946, "dccp_v4_send_check" },
	{ 0xa043c43b, "inet_reqsk_alloc" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x2290148f, "inet_twsk_purge" },
	{ 0xcf8c33a4, "dccp_done" },
	{ 0x7ca0d2a2, "__sk_dst_check" },
	{ 0x6e993426, "dccp_disconnect" },
	{ 0x910bb85d, "proto_register" },
	{ 0xf0ef1225, "dccp_destruct_common" },
	{ 0x21c148f4, "__sk_receive_skb" },
	{ 0x5d21854, "inet6_compat_ioctl" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x236a6e89, "dccp_poll" },
	{ 0xdf1f6af0, "inet_ctl_sock_create" },
	{ 0x8171199a, "dccp_death_row" },
	{ 0x256b1bae, "inet_csk_get_port" },
	{ 0x23f650d8, "sk_filter_trim_cap" },
	{ 0xc26d3adc, "inet_csk_reqsk_queue_drop_and_put" },
	{ 0x43e99bb9, "inet6_hash" },
	{ 0x87042761, "inet_accept" },
	{ 0x2504a82, "inet6_hash_connect" },
	{ 0x745d9a0c, "dccp_sync_mss" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6e068e63, "ip6_mtu" },
	{ 0xd75b7072, "dccp_orphan_count" },
	{ 0x3e316b3c, "inet_shutdown" },
	{ 0x36c091de, "sk_free" },
	{ 0x555c1b5c, "dccp_close" },
	{ 0x276385e1, "kfree_skb_reason" },
	{ 0xcbe3af45, "dccp_reqsk_init" },
	{ 0x4ebf36a1, "kmem_cache_free" },
	{ 0x770a5ae9, "fl6_update_dst" },
	{ 0xcf725d12, "inet6_csk_route_req" },
	{ 0xbcfc27c2, "inet6_ioctl" },
	{ 0x7fdeed2c, "security_sk_classify_flow" },
	{ 0xb080cd1b, "dccp_getsockopt" },
	{ 0x7ed73fa6, "dccp_parse_options" },
	{ 0xebb2c434, "dccp_v4_request_recv_sock" },
	{ 0xc5f675ef, "__inet6_lookup_established" },
	{ 0x51a18956, "unregister_pernet_subsys" },
	{ 0x3cc6ccd9, "ip6_dst_lookup_flow" },
	{ 0x201b4e4b, "skb_checksum" },
	{ 0xf4ba9908, "sock_no_socketpair" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x1e54ba33, "sock_no_mmap" },
	{ 0x68946dc7, "__pskb_pull_tail" },
	{ 0xc9db1b5d, "dccp_child_process" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x246cf6ad, "sock_common_recvmsg" },
	{ 0xd2115e9a, "dccp_setsockopt" },
	{ 0xcc72ca5e, "dccp_ioctl" },
	{ 0xff24b7e1, "inet6_csk_xmit" },
	{ 0x1fad1a56, "sock_rfree" },
	{ 0x920dfaa0, "inet6_getname" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x75f70029, "inet6_sock_destruct" },
	{ 0xdb204e8f, "inet_sk_rebuild_header" },
	{ 0x76f08fe9, "ip6_xmit" },
	{ 0x9c6690db, "ipv4_mtu" },
	{ 0xe5b67eab, "dccp_recvmsg" },
	{ 0xec38d952, "inet6_register_protosw" },
	{ 0xae316c11, "icmpv6_err_convert" },
	{ 0x1d0b7eb, "inet6_release" },
	{ 0x32486a71, "inet_sendmsg" },
	{ 0xd8040259, "dccp_check_req" },
	{ 0xf7ef0fb3, "ipv6_dup_options" },
	{ 0x27bbe710, "dccp_create_openreq_child" },
	{ 0x8082774a, "inet_csk_prepare_forced_close" },
	{ 0xbdf6bb58, "dccp_v4_conn_request" },
	{ 0x56876eb1, "security_skb_classify_flow" },
	{ 0xaff6c906, "dccp_req_err" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x97791338, "sock_pfree" },
	{ 0x557f9790, "dccp_rcv_established" },
	{ 0xf1de5c0a, "skb_clone" },
	{ 0x986d6241, "dst_release" },
	{ 0x26ed65de, "sock_release" },
	{ 0xabbb2310, "dccp_make_response" },
	{ 0xac2b3161, "dccp_destroy_sock" },
	{ 0xa3a2eff, "dccp_ctl_make_reset" },
	{ 0x960990a1, "sock_gettstamp" },
	{ 0x581978af, "sk_setup_caps" },
	{ 0x8e13debf, "ipv6_opt_accepted" },
	{ 0x67ea18eb, "dccp_sendmsg" },
	{ 0x11b36a7b, "inet6_lookup_listener" },
	{ 0xf9f9ed2, "inet6_add_protocol" },
	{ 0xcd5835b, "ipv6_flowlabel_exclusive" },
	{ 0xd7cdb975, "dccp_hashinfo" },
	{ 0xefd4db5a, "inet_twsk_put" },
	{ 0xfeac3c08, "inet_unhash" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x38de3c7b, "ipv6_getsockopt" },
	{ 0x30bfdeb6, "dccp_set_state" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x4dadfd81, "inet6_csk_update_pmtu" },
	{ 0x4fef8749, "dccp_v4_do_rcv" },
	{ 0xe7352373, "__kfree_skb" },
	{ 0x7934b67f, "inet6_ehashfn" },
	{ 0x20039d5d, "dccp_init_sock" },
	{ 0x59814a84, "dccp_statistics" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "dccp_ipv4,dccp");


MODULE_INFO(srcversion, "7118FDBAC5E57723B0A26D1");
