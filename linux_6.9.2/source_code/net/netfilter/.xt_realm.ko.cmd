savedcmd_net/netfilter/xt_realm.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/xt_realm.ko net/netfilter/xt_realm.o net/netfilter/xt_realm.mod.o
