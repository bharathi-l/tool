savedcmd_net/dsa/built-in.a := rm -f net/dsa/built-in.a;  printf "net/dsa/%s " stubs.o | xargs ar cDPrST net/dsa/built-in.a
