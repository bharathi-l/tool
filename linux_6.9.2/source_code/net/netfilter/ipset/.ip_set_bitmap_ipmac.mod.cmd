savedcmd_net/netfilter/ipset/ip_set_bitmap_ipmac.mod := printf '%s\n'   ip_set_bitmap_ipmac.o | awk '!x[$$0]++ { print("net/netfilter/ipset/"$$0) }' > net/netfilter/ipset/ip_set_bitmap_ipmac.mod
