savedcmd_net/netfilter/nft_osf.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/nft_osf.ko net/netfilter/nft_osf.o net/netfilter/nft_osf.mod.o
