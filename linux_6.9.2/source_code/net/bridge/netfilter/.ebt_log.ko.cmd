savedcmd_net/bridge/netfilter/ebt_log.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/bridge/netfilter/ebt_log.ko net/bridge/netfilter/ebt_log.o net/bridge/netfilter/ebt_log.mod.o
