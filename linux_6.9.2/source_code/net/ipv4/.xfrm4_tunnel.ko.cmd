savedcmd_net/ipv4/xfrm4_tunnel.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/ipv4/xfrm4_tunnel.ko net/ipv4/xfrm4_tunnel.o net/ipv4/xfrm4_tunnel.mod.o
