savedcmd_net/ipv6/ip6_tunnel.mod := printf '%s\n'   ip6_tunnel.o | awk '!x[$$0]++ { print("net/ipv6/"$$0) }' > net/ipv6/ip6_tunnel.mod
