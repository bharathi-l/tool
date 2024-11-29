savedcmd_net/netfilter/xt_owner.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/xt_owner.ko net/netfilter/xt_owner.o net/netfilter/xt_owner.mod.o
