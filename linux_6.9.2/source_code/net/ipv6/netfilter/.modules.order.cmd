savedcmd_net/ipv6/netfilter/modules.order := {   echo net/ipv6/netfilter/ip6_tables.o;   echo net/ipv6/netfilter/ip6table_filter.o;   echo net/ipv6/netfilter/ip6table_mangle.o;   echo net/ipv6/netfilter/ip6table_raw.o;   echo net/ipv6/netfilter/ip6table_security.o;   echo net/ipv6/netfilter/ip6table_nat.o;   echo net/ipv6/netfilter/nf_defrag_ipv6.o;   echo net/ipv6/netfilter/nf_socket_ipv6.o;   echo net/ipv6/netfilter/nf_tproxy_ipv6.o;   echo net/ipv6/netfilter/nf_reject_ipv6.o;   echo net/ipv6/netfilter/nf_dup_ipv6.o;   echo net/ipv6/netfilter/nft_reject_ipv6.o;   echo net/ipv6/netfilter/nft_dup_ipv6.o;   echo net/ipv6/netfilter/nft_fib_ipv6.o;   echo net/ipv6/netfilter/ip6t_ah.o;   echo net/ipv6/netfilter/ip6t_eui64.o;   echo net/ipv6/netfilter/ip6t_frag.o;   echo net/ipv6/netfilter/ip6t_ipv6header.o;   echo net/ipv6/netfilter/ip6t_mh.o;   echo net/ipv6/netfilter/ip6t_hbh.o;   echo net/ipv6/netfilter/ip6t_rpfilter.o;   echo net/ipv6/netfilter/ip6t_rt.o;   echo net/ipv6/netfilter/ip6t_srh.o;   echo net/ipv6/netfilter/ip6t_NPT.o;   echo net/ipv6/netfilter/ip6t_REJECT.o;   echo net/ipv6/netfilter/ip6t_SYNPROXY.o; :; } > net/ipv6/netfilter/modules.order
