savedcmd_net/dsa/tag_ksz.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/dsa/tag_ksz.ko net/dsa/tag_ksz.o net/dsa/tag_ksz.mod.o
