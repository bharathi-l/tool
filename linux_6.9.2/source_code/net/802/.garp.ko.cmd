savedcmd_net/802/garp.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/802/garp.ko net/802/garp.o net/802/garp.mod.o
