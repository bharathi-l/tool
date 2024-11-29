savedcmd_net/smc/smc_diag.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/smc/smc_diag.ko net/smc/smc_diag.o net/smc/smc_diag.mod.o
