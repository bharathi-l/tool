savedcmd_net/xfrm/xfrm_interface.mod := printf '%s\n'   xfrm_interface_core.o | awk '!x[$$0]++ { print("net/xfrm/"$$0) }' > net/xfrm/xfrm_interface.mod
