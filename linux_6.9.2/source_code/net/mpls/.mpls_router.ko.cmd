savedcmd_net/mpls/mpls_router.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/mpls/mpls_router.ko net/mpls/mpls_router.o net/mpls/mpls_router.mod.o
