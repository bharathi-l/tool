savedcmd_net/bridge/netfilter/ebtables.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/bridge/netfilter/ebtables.ko net/bridge/netfilter/ebtables.o net/bridge/netfilter/ebtables.mod.o
