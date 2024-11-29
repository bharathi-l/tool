savedcmd_net/netfilter/nft_masq.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/nft_masq.ko net/netfilter/nft_masq.o net/netfilter/nft_masq.mod.o
