savedcmd_net/sched/act_nat.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/sched/act_nat.ko net/sched/act_nat.o net/sched/act_nat.mod.o
