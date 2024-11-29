savedcmd_net/sched/act_mpls.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/sched/act_mpls.ko net/sched/act_mpls.o net/sched/act_mpls.mod.o
