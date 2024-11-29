savedcmd_net/netfilter/nft_redir.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/nft_redir.ko net/netfilter/nft_redir.o net/netfilter/nft_redir.mod.o
