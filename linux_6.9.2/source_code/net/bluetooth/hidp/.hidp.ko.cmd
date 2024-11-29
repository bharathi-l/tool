savedcmd_net/bluetooth/hidp/hidp.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/bluetooth/hidp/hidp.ko net/bluetooth/hidp/hidp.o net/bluetooth/hidp/hidp.mod.o
