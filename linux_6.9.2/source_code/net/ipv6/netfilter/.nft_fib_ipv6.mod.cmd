savedcmd_net/ipv6/netfilter/nft_fib_ipv6.mod := printf '%s\n'   nft_fib_ipv6.o | awk '!x[$$0]++ { print("net/ipv6/netfilter/"$$0) }' > net/ipv6/netfilter/nft_fib_ipv6.mod
