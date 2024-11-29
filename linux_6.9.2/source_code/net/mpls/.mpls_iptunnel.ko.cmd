savedcmd_net/mpls/mpls_iptunnel.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/mpls/mpls_iptunnel.ko net/mpls/mpls_iptunnel.o net/mpls/mpls_iptunnel.mod.o
