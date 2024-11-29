savedcmd_net/netfilter/xt_cpu.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/xt_cpu.ko net/netfilter/xt_cpu.o net/netfilter/xt_cpu.mod.o
