savedcmd_net/nfc/hci/hci.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/nfc/hci/hci.ko net/nfc/hci/hci.o net/nfc/hci/hci.mod.o
