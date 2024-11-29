savedcmd_net/tipc/tipc.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/tipc/tipc.ko net/tipc/tipc.o net/tipc/tipc.mod.o
