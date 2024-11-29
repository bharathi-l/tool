savedcmd_net/netfilter/xt_l2tp.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/xt_l2tp.ko net/netfilter/xt_l2tp.o net/netfilter/xt_l2tp.mod.o
