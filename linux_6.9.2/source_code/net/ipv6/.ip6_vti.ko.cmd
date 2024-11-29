savedcmd_net/ipv6/ip6_vti.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/ipv6/ip6_vti.ko net/ipv6/ip6_vti.o net/ipv6/ip6_vti.mod.o
