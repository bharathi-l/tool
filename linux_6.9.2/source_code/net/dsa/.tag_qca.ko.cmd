savedcmd_net/dsa/tag_qca.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/dsa/tag_qca.ko net/dsa/tag_qca.o net/dsa/tag_qca.mod.o
