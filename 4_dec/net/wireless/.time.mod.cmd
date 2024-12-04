savedcmd_net/wireless/time.mod := printf '%s\n'   time.o | awk '!x[$$0]++ { print("net/wireless/"$$0) }' > net/wireless/time.mod
