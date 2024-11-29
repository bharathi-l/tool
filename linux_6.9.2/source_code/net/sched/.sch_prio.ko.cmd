savedcmd_net/sched/sch_prio.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/sched/sch_prio.ko net/sched/sch_prio.o net/sched/sch_prio.mod.o
