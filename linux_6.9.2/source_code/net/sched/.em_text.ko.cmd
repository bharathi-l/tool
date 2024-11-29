savedcmd_net/sched/em_text.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/sched/em_text.ko net/sched/em_text.o net/sched/em_text.mod.o
