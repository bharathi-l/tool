savedcmd_net/tipc/tipc_diag.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/tipc/tipc_diag.ko net/tipc/tipc_diag.o net/tipc/tipc_diag.mod.o
