savedcmd_net/netfilter/ipset/ip_set_hash_netnet.mod := printf '%s\n'   ip_set_hash_netnet.o | awk '!x[$$0]++ { print("net/netfilter/ipset/"$$0) }' > net/netfilter/ipset/ip_set_hash_netnet.mod
