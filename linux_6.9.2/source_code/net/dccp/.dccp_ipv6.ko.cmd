savedcmd_net/dccp/dccp_ipv6.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/dccp/dccp_ipv6.ko net/dccp/dccp_ipv6.o net/dccp/dccp_ipv6.mod.o
