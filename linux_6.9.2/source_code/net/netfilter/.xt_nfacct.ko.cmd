savedcmd_net/netfilter/xt_nfacct.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/xt_nfacct.ko net/netfilter/xt_nfacct.o net/netfilter/xt_nfacct.mod.o
