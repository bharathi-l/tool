savedcmd_net/wireless/cfg80211.mod := printf '%s\n'   core.o sysfs.o radiotap.o util.o reg.o scan.o nl80211.o mlme.o ibss.o sme.o chan.o ethtool.o mesh.o ap.o trace.o ocb.o pmsr.o debugfs.o wext-compat.o wext-sme.o shipped-certs.o thread_name.o | awk '!x[$$0]++ { print("net/wireless/"$$0) }' > net/wireless/cfg80211.mod
