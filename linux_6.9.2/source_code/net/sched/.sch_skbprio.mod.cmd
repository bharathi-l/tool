savedcmd_net/sched/sch_skbprio.mod := printf '%s\n'   sch_skbprio.o | awk '!x[$$0]++ { print("net/sched/"$$0) }' > net/sched/sch_skbprio.mod
