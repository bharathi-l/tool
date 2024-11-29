savedcmd_net/ipv4/ipip.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/ipv4/ipip.ko net/ipv4/ipip.o net/ipv4/ipip.mod.o
