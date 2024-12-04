savedcmd_net/wireless/time.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/wireless/time.ko net/wireless/time.o net/wireless/time.mod.o
