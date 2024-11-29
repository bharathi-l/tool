savedcmd_net/6lowpan/6lowpan.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/6lowpan/6lowpan.ko net/6lowpan/6lowpan.o net/6lowpan/6lowpan.mod.o
