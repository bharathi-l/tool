savedcmd_net/ipv6/netfilter/ip6table_raw.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/ipv6/netfilter/ip6table_raw.ko net/ipv6/netfilter/ip6table_raw.o net/ipv6/netfilter/ip6table_raw.mod.o
