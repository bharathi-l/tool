savedcmd_net/ipv6/ip6_udp_tunnel.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/ipv6/ip6_udp_tunnel.ko net/ipv6/ip6_udp_tunnel.o net/ipv6/ip6_udp_tunnel.mod.o
