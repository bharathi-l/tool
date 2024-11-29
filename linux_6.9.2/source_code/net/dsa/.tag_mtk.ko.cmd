savedcmd_net/dsa/tag_mtk.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/dsa/tag_mtk.ko net/dsa/tag_mtk.o net/dsa/tag_mtk.mod.o
