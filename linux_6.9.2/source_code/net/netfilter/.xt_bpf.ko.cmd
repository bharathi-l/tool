savedcmd_net/netfilter/xt_bpf.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/xt_bpf.ko net/netfilter/xt_bpf.o net/netfilter/xt_bpf.mod.o
