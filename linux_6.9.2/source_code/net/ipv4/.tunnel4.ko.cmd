savedcmd_net/ipv4/tunnel4.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/ipv4/tunnel4.ko net/ipv4/tunnel4.o net/ipv4/tunnel4.mod.o
