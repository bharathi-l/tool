savedcmd_net/netfilter/xt_NFLOG.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/xt_NFLOG.ko net/netfilter/xt_NFLOG.o net/netfilter/xt_NFLOG.mod.o
