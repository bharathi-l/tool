savedcmd_net/sched/sch_tbf.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/sched/sch_tbf.ko net/sched/sch_tbf.o net/sched/sch_tbf.mod.o
