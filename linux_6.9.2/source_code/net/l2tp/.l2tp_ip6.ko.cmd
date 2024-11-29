savedcmd_net/l2tp/l2tp_ip6.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/l2tp/l2tp_ip6.ko net/l2tp/l2tp_ip6.o net/l2tp/l2tp_ip6.mod.o
