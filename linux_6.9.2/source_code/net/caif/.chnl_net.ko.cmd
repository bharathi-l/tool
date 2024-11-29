savedcmd_net/caif/chnl_net.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/caif/chnl_net.ko net/caif/chnl_net.o net/caif/chnl_net.mod.o
