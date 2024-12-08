Step 1:- Follow below command to clone linux-oem-6.11.0
-------------------------------------------------------
sudo git clone -b applied/ubuntu/devel https://git.launchpad.net/ubuntu/+source/linux-oem-6.11

=========================================================================================================================================
Step 2:- Do kernel compilation for linux-oem-6.11.0 and follow below link
--------------------------------------------------------------------------
https://c-pointers.com/osp/bare_linux/x86-64/secA/step1.html

		OR

https://phoenixnap.com/kb/build-linux-kernel

==========================================================================================================================================
Step 3:- Create folder and copy base codes for net/mac80211, net/wireless and drivers/net/wireless/intel/iwiwifi - linux-oem-6.11.0 

===========================================================================================================================================
Step 4:- Create folder and copy base codes for net/mac80211, net/wireless and drivers/net/wireless/intel/iwiwifi - linux-6.9.2 

===========================================================================================================================================
Step 5:-In linux kernel 6.9.2 net/mac80211, net/wireless and intel/iwlwifi meld all these folders to linux-oem-6.11.0
	Step 5.1:- meld command - sudo meld linux-6.9.2 to linux-oem-.6.11.0
	Step 5.2:- Add .h file at inlcude/linux -- To get current thread and module name
	Step 5.3:- Copy all printk respective folders to linux-oem-6.11.0 using meld command
	Step 5.4:- All printk copied to linux-oem-6.11.0 net/mac80211, net/wireless and drivers/net/wireless/intel/iwiwifi
	
===========================================================================================================================================
Step 6:- Once compilation is completed for linux-oem-6.11.0 .ko files generated.
	Step 6.1:- Now copy net/mac80211, net/wireless and drivers/net/wireless/intel/iwiwifi which included printk in linux-oem-6.11.0 to where kernel compilation is completed 
	Step 6.2:- Compile mac80211 folder using below command
			sudo make -C . M=net/mac80211
	Step 6.3:- Compile wireless folder using below command
			sudo make -C . M=net/wireless
	Step 6.4:- Compile intel/iwlwifi folder using below command
			sudo make -C . M=drivers/net/wireless/intel/iwlwifi

===========================================================================================================================================
Step 7:- Kill ongoing wireless activities
	Step 7.1:- Below is the command to kill
		sudo killall wpa_supplicant
		sudo killall wpa_cli
		sudo killall hostapd
		sudo killall hostapd_cli
		sudo systemctl stop NetworkManager
		sudo rfkill list all
		sudo ifconfig wlp4s0 down
		sudo ifconfig wlp4s0 up
		sudo iwconfig wlp4s0
		sudo ifconfig wlp4s0	
		sudo rfkill unblock all
		sudo rfkill list all
					
===========================================================================================================================================
Step 8:- Remove all modules
	Step 8.1:- Below modules should be removed
		sudo rmmod iwlmvm
		sudo rmmod iwldvm
		sudo rmmod iwlwifi
		sudo rmmod mac80211
		sudo rmmod lib80211_crypt_tkip
		sudo rmmod lib80211_crypt_ccmp
		sudo rmmod lib80211_crypt_wep
		sudo rmmod lib80211
		sudo rmmod cfg80211
		sudo rmmod libarc4

===========================================================================================================================================
Step 9:- Clear all old dmesg, below is the command
	sudo dmesg -c				
	
===========================================================================================================================================
Step 10:- Insert all modules
	Step 10.1:- Below modules should be insert
		sudo insmod ./net/wireless/cfg80211.ko
		sudo insmod ./net/wireless/lib80211.ko
		sudo insmod ./lib/crypto/libarc4.ko
		sudo insmod ./net/wireless/lib80211_crypt_wep.ko
		sudo insmod ./net/wireless/lib80211_crypt_ccmp.ko
		sudo insmod ./net/wireless/lib80211_crypt_tkip.ko
		sudo insmod ./net/mac80211/mac80211.ko
		sudo insmod ./drivers/net/wireless/intel/iwlwifi/iwlwifi.ko
		sudo insmod ./drivers/net/wireless/intel/iwlwifi/dvm/iwldvm.ko
		sudo insmod ./drivers/net/wireless/intel/iwlwifi/mvm/iwlmvm.ko
		
===========================================================================================================================================
Step 11:- Run wpa_supplicant, take dmesg logs
	Step 11.1:- In dmesg log all printk will reflect.
	
=============================================================================================================================================	
































		
			
