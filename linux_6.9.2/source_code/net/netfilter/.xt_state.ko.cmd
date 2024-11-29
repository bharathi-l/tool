savedcmd_net/netfilter/xt_state.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/xt_state.ko net/netfilter/xt_state.o net/netfilter/xt_state.mod.o
