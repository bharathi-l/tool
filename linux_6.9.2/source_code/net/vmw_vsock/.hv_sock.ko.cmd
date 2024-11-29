savedcmd_net/vmw_vsock/hv_sock.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/vmw_vsock/hv_sock.ko net/vmw_vsock/hv_sock.o net/vmw_vsock/hv_sock.mod.o
