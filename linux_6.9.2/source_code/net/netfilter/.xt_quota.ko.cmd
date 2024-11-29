savedcmd_net/netfilter/xt_quota.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/xt_quota.ko net/netfilter/xt_quota.o net/netfilter/xt_quota.mod.o
