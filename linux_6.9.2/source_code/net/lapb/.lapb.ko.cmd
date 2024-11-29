savedcmd_net/lapb/lapb.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/lapb/lapb.ko net/lapb/lapb.o net/lapb/lapb.mod.o
