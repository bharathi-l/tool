savedcmd_net/dsa/tag_trailer.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/dsa/tag_trailer.ko net/dsa/tag_trailer.o net/dsa/tag_trailer.mod.o
