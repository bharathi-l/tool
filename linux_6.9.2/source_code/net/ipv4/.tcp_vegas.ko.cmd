savedcmd_net/ipv4/tcp_vegas.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/ipv4/tcp_vegas.ko net/ipv4/tcp_vegas.o net/ipv4/tcp_vegas.mod.o
