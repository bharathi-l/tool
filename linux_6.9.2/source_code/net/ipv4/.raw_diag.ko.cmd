savedcmd_net/ipv4/raw_diag.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/ipv4/raw_diag.ko net/ipv4/raw_diag.o net/ipv4/raw_diag.mod.o
