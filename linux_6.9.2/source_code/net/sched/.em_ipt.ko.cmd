savedcmd_net/sched/em_ipt.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/sched/em_ipt.ko net/sched/em_ipt.o net/sched/em_ipt.mod.o
