savedcmd_net/netfilter/xt_AUDIT.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/xt_AUDIT.ko net/netfilter/xt_AUDIT.o net/netfilter/xt_AUDIT.mod.o
