savedcmd_net/ipv4/udp_tunnel.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/ipv4/udp_tunnel.ko net/ipv4/udp_tunnel.o net/ipv4/udp_tunnel.mod.o
