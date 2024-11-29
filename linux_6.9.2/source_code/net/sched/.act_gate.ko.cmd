savedcmd_net/sched/act_gate.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/sched/act_gate.ko net/sched/act_gate.o net/sched/act_gate.mod.o
