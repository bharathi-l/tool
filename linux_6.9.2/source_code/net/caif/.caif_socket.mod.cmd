savedcmd_net/caif/caif_socket.mod := printf '%s\n'   caif_socket.o | awk '!x[$$0]++ { print("net/caif/"$$0) }' > net/caif/caif_socket.mod
