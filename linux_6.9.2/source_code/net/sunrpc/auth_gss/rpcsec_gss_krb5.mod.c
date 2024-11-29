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
	{ 0x5c7569ec, "crypto_skcipher_encrypt" },
	{ 0x561f0234, "crypto_alloc_ahash" },
	{ 0xf7271e2d, "xdr_buf_trim" },
	{ 0xb0e602eb, "memmove" },
	{ 0x353c3362, "xdr_process_buf" },
	{ 0x29cc7090, "read_bytes_from_xdr_buf" },
	{ 0x3ea0e5bd, "crypto_ahash_setkey" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x43babd19, "sg_init_one" },
	{ 0x5f4dab15, "crypto_skcipher_setkey" },
	{ 0xa6d88c4e, "gss_mech_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x14fc6972, "crypto_destroy_tfm" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6905d5f8, "crypto_skcipher_decrypt" },
	{ 0xa916b694, "strnlen" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x68924589, "crypto_ahash_init" },
	{ 0x5a5266, "crypto_shash_setkey" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x8489949a, "crypto_shash_update" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0xfb578fc5, "memset" },
	{ 0x31a89d59, "rpc_debug" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd428ef05, "xdr_buf_subsegment" },
	{ 0x21adc399, "crypto_alloc_sync_skcipher" },
	{ 0xc40f8fe4, "crypto_ahash_final" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xde1fa7a3, "crypto_shash_final" },
	{ 0xefa0ece1, "gss_mech_register" },
	{ 0xf54bd49b, "lcm" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x56470118, "__warn_printk" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x6ddcf49e, "kmalloc_trace" },
	{ 0x31caebac, "write_bytes_to_xdr_buf" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x960874f6, "crypto_ahash_update" },
	{ 0x148d5a95, "crypto_alloc_shash" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x36480fef, "kmalloc_caches" },
	{ 0x114e3d2b, "module_layout" },
};

MODULE_INFO(depends, "sunrpc,auth_rpcgss");


MODULE_INFO(srcversion, "0A5B76655CD36304A7971A0");
