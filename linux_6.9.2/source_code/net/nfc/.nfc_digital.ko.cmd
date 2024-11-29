savedcmd_net/nfc/nfc_digital.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/nfc/nfc_digital.ko net/nfc/nfc_digital.o net/nfc/nfc_digital.mod.o
