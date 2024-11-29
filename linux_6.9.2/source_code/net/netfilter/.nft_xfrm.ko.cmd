savedcmd_net/netfilter/nft_xfrm.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/nft_xfrm.ko net/netfilter/nft_xfrm.o net/netfilter/nft_xfrm.mod.o
