savedcmd_net/netfilter/xt_NFLOG.mod := printf '%s\n'   xt_NFLOG.o | awk '!x[$$0]++ { print("net/netfilter/"$$0) }' > net/netfilter/xt_NFLOG.mod
