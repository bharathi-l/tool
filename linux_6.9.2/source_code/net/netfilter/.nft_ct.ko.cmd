savedcmd_net/netfilter/nft_ct.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/nft_ct.ko net/netfilter/nft_ct.o net/netfilter/nft_ct.mod.o
