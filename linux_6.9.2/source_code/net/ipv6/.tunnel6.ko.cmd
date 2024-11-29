savedcmd_net/ipv6/tunnel6.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/ipv6/tunnel6.ko net/ipv6/tunnel6.o net/ipv6/tunnel6.mod.o
