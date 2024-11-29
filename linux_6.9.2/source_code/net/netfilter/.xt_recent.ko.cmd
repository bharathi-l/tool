savedcmd_net/netfilter/xt_recent.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/xt_recent.ko net/netfilter/xt_recent.o net/netfilter/xt_recent.mod.o
