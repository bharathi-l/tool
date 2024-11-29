savedcmd_net/dsa/tag_brcm.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/dsa/tag_brcm.ko net/dsa/tag_brcm.o net/dsa/tag_brcm.mod.o
