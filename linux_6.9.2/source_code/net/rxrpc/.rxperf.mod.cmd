savedcmd_net/rxrpc/rxperf.mod := printf '%s\n'   rxperf.o | awk '!x[$$0]++ { print("net/rxrpc/"$$0) }' > net/rxrpc/rxperf.mod
