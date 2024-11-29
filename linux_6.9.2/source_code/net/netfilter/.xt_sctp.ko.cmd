savedcmd_net/netfilter/xt_sctp.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/xt_sctp.ko net/netfilter/xt_sctp.o net/netfilter/xt_sctp.mod.o
