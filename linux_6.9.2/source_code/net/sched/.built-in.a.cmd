savedcmd_net/sched/built-in.a := rm -f net/sched/built-in.a;  printf "net/sched/%s " sch_generic.o sch_mq.o sch_frag.o sch_api.o sch_blackhole.o cls_api.o act_api.o sch_fifo.o ematch.o | xargs ar cDPrST net/sched/built-in.a
