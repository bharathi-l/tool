savedcmd_net/netfilter/xt_helper.mod := printf '%s\n'   xt_helper.o | awk '!x[$$0]++ { print("net/netfilter/"$$0) }' > net/netfilter/xt_helper.mod
