savedcmd_net/mac802154/mac802154.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/mac802154/mac802154.ko net/mac802154/mac802154.o net/mac802154/mac802154.mod.o
