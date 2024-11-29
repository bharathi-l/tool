savedcmd_net/netfilter/nft_quota.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/nft_quota.ko net/netfilter/nft_quota.o net/netfilter/nft_quota.mod.o
