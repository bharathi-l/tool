savedcmd_net/netfilter/xt_TRACE.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/xt_TRACE.ko net/netfilter/xt_TRACE.o net/netfilter/xt_TRACE.mod.o
