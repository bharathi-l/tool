savedcmd_net/netfilter/ipvs/ip_vs_fo.mod := printf '%s\n'   ip_vs_fo.o | awk '!x[$$0]++ { print("net/netfilter/ipvs/"$$0) }' > net/netfilter/ipvs/ip_vs_fo.mod
