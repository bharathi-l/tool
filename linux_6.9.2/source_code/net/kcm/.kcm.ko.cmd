savedcmd_net/kcm/kcm.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/kcm/kcm.ko net/kcm/kcm.o net/kcm/kcm.mod.o
