savedcmd_net/netfilter/xt_string.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/xt_string.ko net/netfilter/xt_string.o net/netfilter/xt_string.mod.o
