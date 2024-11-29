savedcmd_net/caif/caif_usb.mod := printf '%s\n'   caif_usb.o | awk '!x[$$0]++ { print("net/caif/"$$0) }' > net/caif/caif_usb.mod
