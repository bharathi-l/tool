savedcmd_net/netfilter/xt_mac.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/xt_mac.ko net/netfilter/xt_mac.o net/netfilter/xt_mac.mod.o
