savedcmd_net/sctp/sctp_diag.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/sctp/sctp_diag.ko net/sctp/sctp_diag.o net/sctp/sctp_diag.mod.o
