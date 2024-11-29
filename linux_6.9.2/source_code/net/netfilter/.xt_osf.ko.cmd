savedcmd_net/netfilter/xt_osf.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/xt_osf.ko net/netfilter/xt_osf.o net/netfilter/xt_osf.mod.o
