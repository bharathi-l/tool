savedcmd_net/ipv6/ipcomp6.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/ipv6/ipcomp6.ko net/ipv6/ipcomp6.o net/ipv6/ipcomp6.mod.o
