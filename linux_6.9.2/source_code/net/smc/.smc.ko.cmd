savedcmd_net/smc/smc.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/smc/smc.ko net/smc/smc.o net/smc/smc.mod.o
