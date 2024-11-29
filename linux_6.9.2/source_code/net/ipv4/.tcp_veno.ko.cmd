savedcmd_net/ipv4/tcp_veno.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/ipv4/tcp_veno.ko net/ipv4/tcp_veno.o net/ipv4/tcp_veno.mod.o
