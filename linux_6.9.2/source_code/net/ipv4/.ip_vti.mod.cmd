savedcmd_net/ipv4/ip_vti.mod := printf '%s\n'   ip_vti.o | awk '!x[$$0]++ { print("net/ipv4/"$$0) }' > net/ipv4/ip_vti.mod
