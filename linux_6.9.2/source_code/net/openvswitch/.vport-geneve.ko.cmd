savedcmd_net/openvswitch/vport-geneve.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/openvswitch/vport-geneve.ko net/openvswitch/vport-geneve.o net/openvswitch/vport-geneve.mod.o
