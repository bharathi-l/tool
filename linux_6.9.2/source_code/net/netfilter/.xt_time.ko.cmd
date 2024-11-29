savedcmd_net/netfilter/xt_time.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/xt_time.ko net/netfilter/xt_time.o net/netfilter/xt_time.mod.o
