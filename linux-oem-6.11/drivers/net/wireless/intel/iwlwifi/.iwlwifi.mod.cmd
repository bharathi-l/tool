savedcmd_drivers/net/wireless/intel/iwlwifi/iwlwifi.mod := printf '%s\n'   iwl-io.o iwl-drv.o iwl-debug.o iwl-nvm-utils.o iwl-phy-db.o iwl-nvm-parse.o pcie/drv.o pcie/rx.o pcie/tx.o pcie/trans.o pcie/ctxt-info.o pcie/ctxt-info-gen3.o pcie/trans-gen2.o pcie/tx-gen2.o iwl-dbg-tlv.o iwl-trans.o fw/img.o fw/notif-wait.o fw/rs.o fw/dbg.o fw/pnvm.o fw/dump.o fw/regulatory.o cfg/1000.o cfg/2000.o cfg/5000.o cfg/6000.o cfg/7000.o cfg/8000.o cfg/9000.o cfg/22000.o cfg/ax210.o cfg/bz.o cfg/sc.o fw/paging.o fw/smem.o fw/init.o fw/acpi.o fw/uefi.o fw/debugfs.o iwl-devtrace.o cfg/1000.o cfg/2000.o cfg/5000.o cfg/6000.o cfg/7000.o cfg/8000.o cfg/9000.o cfg/22000.o cfg/ax210.o cfg/bz.o cfg/sc.o fw/paging.o fw/smem.o fw/init.o | awk '!x[$$0]++ { print("drivers/net/wireless/intel/iwlwifi/"$$0) }' > drivers/net/wireless/intel/iwlwifi/iwlwifi.mod
