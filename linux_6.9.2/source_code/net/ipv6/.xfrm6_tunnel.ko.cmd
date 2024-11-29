savedcmd_net/ipv6/xfrm6_tunnel.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/ipv6/xfrm6_tunnel.ko net/ipv6/xfrm6_tunnel.o net/ipv6/xfrm6_tunnel.mod.o
