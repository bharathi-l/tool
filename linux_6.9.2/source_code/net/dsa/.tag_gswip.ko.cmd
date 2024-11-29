savedcmd_net/dsa/tag_gswip.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/dsa/tag_gswip.ko net/dsa/tag_gswip.o net/dsa/tag_gswip.mod.o
