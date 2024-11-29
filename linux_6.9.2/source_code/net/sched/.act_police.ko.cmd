savedcmd_net/sched/act_police.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/sched/act_police.ko net/sched/act_police.o net/sched/act_police.mod.o
