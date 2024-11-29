savedcmd_net/xdp/xsk_diag.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/xdp/xsk_diag.ko net/xdp/xsk_diag.o net/xdp/xsk_diag.mod.o
