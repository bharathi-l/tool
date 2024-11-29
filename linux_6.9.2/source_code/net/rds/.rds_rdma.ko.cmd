savedcmd_net/rds/rds_rdma.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/rds/rds_rdma.ko net/rds/rds_rdma.o net/rds/rds_rdma.mod.o
