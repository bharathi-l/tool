savedcmd_net/caif/caif_usb.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/caif/caif_usb.ko net/caif/caif_usb.o net/caif/caif_usb.mod.o
