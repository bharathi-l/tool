savedcmd_net/dsa/tag_sja1105.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/dsa/tag_sja1105.ko net/dsa/tag_sja1105.o net/dsa/tag_sja1105.mod.o
