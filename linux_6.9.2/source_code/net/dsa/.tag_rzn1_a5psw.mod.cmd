savedcmd_net/dsa/tag_rzn1_a5psw.mod := printf '%s\n'   tag_rzn1_a5psw.o | awk '!x[$$0]++ { print("net/dsa/"$$0) }' > net/dsa/tag_rzn1_a5psw.mod
