savedcmd_net/can/j1939/can-j1939.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/can/j1939/can-j1939.ko net/can/j1939/can-j1939.o net/can/j1939/can-j1939.mod.o
