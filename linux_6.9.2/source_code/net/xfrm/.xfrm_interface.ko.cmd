savedcmd_net/xfrm/xfrm_interface.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/xfrm/xfrm_interface.ko net/xfrm/xfrm_interface.o net/xfrm/xfrm_interface.mod.o
