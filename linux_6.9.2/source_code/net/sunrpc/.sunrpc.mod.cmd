savedcmd_net/sunrpc/sunrpc.mod := printf '%s\n'   clnt.o xprt.o socklib.o xprtsock.o sched.o auth.o auth_null.o auth_tls.o auth_unix.o svc.o svcsock.o svcauth.o svcauth_unix.o addr.o rpcb_clnt.o timer.o xdr.o sunrpc_syms.o cache.o rpc_pipe.o sysfs.o svc_xprt.o xprtmultipath.o debugfs.o backchannel_rqst.o stats.o sysctl.o | awk '!x[$$0]++ { print("net/sunrpc/"$$0) }' > net/sunrpc/sunrpc.mod
