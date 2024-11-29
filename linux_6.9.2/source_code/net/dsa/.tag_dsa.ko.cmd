savedcmd_net/dsa/tag_dsa.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/dsa/tag_dsa.ko net/dsa/tag_dsa.o net/dsa/tag_dsa.mod.o
