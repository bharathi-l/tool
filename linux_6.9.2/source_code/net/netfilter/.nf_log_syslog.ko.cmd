savedcmd_net/netfilter/nf_log_syslog.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netfilter/nf_log_syslog.ko net/netfilter/nf_log_syslog.o net/netfilter/nf_log_syslog.mod.o
