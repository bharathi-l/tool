savedcmd_net/rxrpc/rxperf.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/rxrpc/rxperf.ko net/rxrpc/rxperf.o net/rxrpc/rxperf.mod.o
