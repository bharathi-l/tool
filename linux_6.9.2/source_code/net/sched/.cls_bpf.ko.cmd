savedcmd_net/sched/cls_bpf.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/sched/cls_bpf.ko net/sched/cls_bpf.o net/sched/cls_bpf.mod.o
