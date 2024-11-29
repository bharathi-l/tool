savedcmd_net/netfilter/xt_limit.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/xt_limit.ko net/netfilter/xt_limit.o net/netfilter/xt_limit.mod.o
