savedcmd_net/bridge/netfilter/ebt_dnat.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/bridge/netfilter/ebt_dnat.ko net/bridge/netfilter/ebt_dnat.o net/bridge/netfilter/ebt_dnat.mod.o
