savedcmd_net/phonet/phonet.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/phonet/phonet.ko net/phonet/phonet.o net/phonet/phonet.mod.o
