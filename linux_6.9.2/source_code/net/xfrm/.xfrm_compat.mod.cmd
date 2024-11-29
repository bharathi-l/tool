savedcmd_net/xfrm/xfrm_compat.mod := printf '%s\n'   xfrm_compat.o | awk '!x[$$0]++ { print("net/xfrm/"$$0) }' > net/xfrm/xfrm_compat.mod
