savedcmd_net/bluetooth/cmtp/cmtp.mod := printf '%s\n'   core.o sock.o capi.o | awk '!x[$$0]++ { print("net/bluetooth/cmtp/"$$0) }' > net/bluetooth/cmtp/cmtp.mod
