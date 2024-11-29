savedcmd_net/dccp/dccp.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/dccp/dccp.ko net/dccp/dccp.o net/dccp/dccp.mod.o
