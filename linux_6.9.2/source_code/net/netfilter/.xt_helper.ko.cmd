savedcmd_net/netfilter/xt_helper.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/xt_helper.ko net/netfilter/xt_helper.o net/netfilter/xt_helper.mod.o
