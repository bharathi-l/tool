savedcmd_net/qrtr/qrtr-tun.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/qrtr/qrtr-tun.ko net/qrtr/qrtr-tun.o net/qrtr/qrtr-tun.mod.o
