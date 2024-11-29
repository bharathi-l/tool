savedcmd_net/ipv4/gre.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/ipv4/gre.ko net/ipv4/gre.o net/ipv4/gre.mod.o
