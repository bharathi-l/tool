savedcmd_net/sched/em_cmp.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/sched/em_cmp.ko net/sched/em_cmp.o net/sched/em_cmp.mod.o
