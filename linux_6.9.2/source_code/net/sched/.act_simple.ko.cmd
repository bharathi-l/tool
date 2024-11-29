savedcmd_net/sched/act_simple.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/sched/act_simple.ko net/sched/act_simple.o net/sched/act_simple.mod.o
