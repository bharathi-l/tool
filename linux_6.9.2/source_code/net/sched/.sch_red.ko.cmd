savedcmd_net/sched/sch_red.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/sched/sch_red.ko net/sched/sch_red.o net/sched/sch_red.mod.o
