savedcmd_net/netfilter/nf_nat_irc.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/nf_nat_irc.ko net/netfilter/nf_nat_irc.o net/netfilter/nf_nat_irc.mod.o
