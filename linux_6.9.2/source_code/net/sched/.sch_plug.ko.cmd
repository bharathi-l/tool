savedcmd_net/sched/sch_plug.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/sched/sch_plug.ko net/sched/sch_plug.o net/sched/sch_plug.mod.o
