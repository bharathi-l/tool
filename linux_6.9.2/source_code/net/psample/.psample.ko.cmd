savedcmd_net/psample/psample.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/psample/psample.ko net/psample/psample.o net/psample/psample.mod.o
