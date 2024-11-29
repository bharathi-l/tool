savedcmd_net/netfilter/xt_ipvs.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/xt_ipvs.ko net/netfilter/xt_ipvs.o net/netfilter/xt_ipvs.mod.o
