savedcmd_net/9p/9pnet.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/9p/9pnet.ko net/9p/9pnet.o net/9p/9pnet.mod.o
