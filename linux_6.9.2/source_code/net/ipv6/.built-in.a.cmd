savedcmd_net/ipv6/built-in.a := rm -f net/ipv6/built-in.a;  printf "net/ipv6/%s " af_inet6.o anycast.o ip6_output.o ip6_input.o addrconf.o addrlabel.o route.o ip6_fib.o ipv6_sockglue.o ndisc.o udp.o udplite.o raw.o icmp.o mcast.o reassembly.o tcp_ipv6.o ping.o exthdrs.o datagram.o ip6_flowlabel.o inet6_connection_sock.o udp_offload.o seg6.o fib6_notifier.o rpl.o ioam6.o sysctl_net_ipv6.o ip6mr.o xfrm6_policy.o xfrm6_state.o xfrm6_input.o xfrm6_output.o xfrm6_protocol.o netfilter.o fib6_rules.o proc.o syncookies.o calipso.o seg6_iptunnel.o seg6_local.o seg6_hmac.o ioam6_iptunnel.o netfilter/built-in.a addrconf_core.o exthdrs_core.o ip6_checksum.o ip6_icmp.o output_core.o protocol.o ip6_offload.o tcpv6_offload.o exthdrs_offload.o inet6_hashtables.o mcast_snoop.o | xargs ar cDPrST net/ipv6/built-in.a
