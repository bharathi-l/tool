savedcmd_net/caif/caif_socket.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/caif/caif_socket.ko net/caif/caif_socket.o net/caif/caif_socket.mod.o
