savedcmd_net/l2tp/l2tp_ppp.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/l2tp/l2tp_ppp.ko net/l2tp/l2tp_ppp.o net/l2tp/l2tp_ppp.mod.o
