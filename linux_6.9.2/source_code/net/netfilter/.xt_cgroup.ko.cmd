savedcmd_net/netfilter/xt_cgroup.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/xt_cgroup.ko net/netfilter/xt_cgroup.o net/netfilter/xt_cgroup.mod.o
