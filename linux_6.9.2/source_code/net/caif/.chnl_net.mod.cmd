savedcmd_net/caif/chnl_net.mod := printf '%s\n'   chnl_net.o | awk '!x[$$0]++ { print("net/caif/"$$0) }' > net/caif/chnl_net.mod
