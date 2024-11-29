savedcmd_net/ipv4/fou.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/ipv4/fou.ko net/ipv4/fou.o net/ipv4/fou.mod.o
