savedcmd_net/rfkill/rfkill-gpio.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/rfkill/rfkill-gpio.ko net/rfkill/rfkill-gpio.o net/rfkill/rfkill-gpio.mod.o
