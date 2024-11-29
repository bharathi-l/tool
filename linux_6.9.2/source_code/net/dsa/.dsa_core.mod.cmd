savedcmd_net/dsa/dsa_core.mod := printf '%s\n'   conduit.o devlink.o dsa.o netlink.o port.o switch.o tag.o tag_8021q.o trace.o user.o | awk '!x[$$0]++ { print("net/dsa/"$$0) }' > net/dsa/dsa_core.mod
