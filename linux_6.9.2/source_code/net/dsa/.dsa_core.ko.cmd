savedcmd_net/dsa/dsa_core.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/dsa/dsa_core.ko net/dsa/dsa_core.o net/dsa/dsa_core.mod.o
