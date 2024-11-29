savedcmd_net/vmw_vsock/hv_sock.mod := printf '%s\n'   hyperv_transport.o | awk '!x[$$0]++ { print("net/vmw_vsock/"$$0) }' > net/vmw_vsock/hv_sock.mod
