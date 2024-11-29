savedcmd_net/xfrm/xfrm_compat.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/xfrm/xfrm_compat.ko net/xfrm/xfrm_compat.o net/xfrm/xfrm_compat.mod.o
