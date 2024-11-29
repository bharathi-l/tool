savedcmd_net/sched/sch_etf.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/sched/sch_etf.ko net/sched/sch_etf.o net/sched/sch_etf.mod.o
