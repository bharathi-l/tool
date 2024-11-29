savedcmd_net/nfc/nci/nci_uart.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/nfc/nci/nci_uart.ko net/nfc/nci/nci_uart.o net/nfc/nci/nci_uart.mod.o
