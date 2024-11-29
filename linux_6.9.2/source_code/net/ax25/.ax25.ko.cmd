savedcmd_net/ax25/ax25.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/ax25/ax25.ko net/ax25/ax25.o net/ax25/ax25.mod.o
