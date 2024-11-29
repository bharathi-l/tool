savedcmd_net/rose/rose.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/rose/rose.ko net/rose/rose.o net/rose/rose.mod.o
