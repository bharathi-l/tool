savedcmd_net/sched/sch_fq.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/sched/sch_fq.ko net/sched/sch_fq.o net/sched/sch_fq.mod.o
