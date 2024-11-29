savedcmd_net/netfilter/xt_set.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/xt_set.ko net/netfilter/xt_set.o net/netfilter/xt_set.mod.o
