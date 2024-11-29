savedcmd_net/netfilter/xt_policy.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/xt_policy.ko net/netfilter/xt_policy.o net/netfilter/xt_policy.mod.o
