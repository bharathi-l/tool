savedcmd_net/l2tp/l2tp_debugfs.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/l2tp/l2tp_debugfs.ko net/l2tp/l2tp_debugfs.o net/l2tp/l2tp_debugfs.mod.o
