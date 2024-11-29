savedcmd_net/bluetooth/bnep/bnep.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/bluetooth/bnep/bnep.ko net/bluetooth/bnep/bnep.o net/bluetooth/bnep/bnep.mod.o
