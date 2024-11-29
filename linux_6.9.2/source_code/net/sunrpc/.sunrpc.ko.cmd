savedcmd_net/sunrpc/sunrpc.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/sunrpc/sunrpc.ko net/sunrpc/sunrpc.o net/sunrpc/sunrpc.mod.o
