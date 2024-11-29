savedcmd_net/ife/ife.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/ife/ife.ko net/ife/ife.o net/ife/ife.mod.o
