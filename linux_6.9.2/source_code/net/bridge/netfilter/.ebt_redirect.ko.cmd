savedcmd_net/bridge/netfilter/ebt_redirect.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/bridge/netfilter/ebt_redirect.ko net/bridge/netfilter/ebt_redirect.o net/bridge/netfilter/ebt_redirect.mod.o
