savedcmd_net/bluetooth/cmtp/cmtp.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/bluetooth/cmtp/cmtp.ko net/bluetooth/cmtp/cmtp.o net/bluetooth/cmtp/cmtp.mod.o
