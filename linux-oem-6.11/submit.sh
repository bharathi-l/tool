#!/bin/bash

delete_folders()
{
	echo "======= DELEET FOLDERS AT GIT LOCAL ============"

	cd $HOME/tool/linux-oem-6.11

	del_folds=("net/mac80211" "net/wireless" "drivers/net/wireless/intel/iwlwifi")

	for del_fold in "${del_folds[@]}";
	do
		echo "========== DELETE : "$del_fold" =============="

		sudo rm -rf "$del_fold"

		echo "========== DELETED : "$del_fold" =============="
	done

	if [ -d "net/mac80211" ] && [ -d "net/wireless" ] && [ -d "drivers/net/wireless/intel/iwlwifi" ]; then
		echo "---------- FAILED TO DELETE FOLDERS --------"
		exit
	else
		echo "---------- FOLDERS DELETED SUCCESSFULLY --------"
	fi
}

copy_folders()
{
	echo "======= COPY FOLDERS AT GIT LOCAL ============"

	cd $HOME/Downloads/temp/git_x/linux-oem-6.11

	copy_folds=("net/mac80211" "net/wireless" "drivers/net/wireless/intel/iwlwifi")

	for copy_fold in "${copy_folds[@]}"; 
	do
		echo "========== COPYING FOLDER : $copy_fold =============="

		if [[ "$copy_fold" == "drivers/net/wireless/intel/iwlwifi" ]]; then

			echo "========== COPYING FOLDER : $copy_fold =============="

			sudo cp -rvf "$copy_fold" $HOME/tool/linux-oem-6.11/drivers/net/wireless/intel/
		else
			echo "========== COPYING FOLDER : $copy_fold =============="
	
			sudo cp -rvf "$copy_fold" $HOME/tool/linux-oem-6.11/net
		fi
	done

	if [ -d "net/mac80211" ] && [ -d "net/wireless" ] && [ -d "drivers/net/wireless/intel/iwlwifi" ]; then
		echo "---------- COPIED FOLDERS SUCCESSFULLY --------"
	else
		echo "---------- FAILED TO COPY FOLDERS --------"
		exit
	fi
}

remove_dot_files()
{
	echo "======= REMOVE DOT FILES AT GIT LOCAL ============"

	dot_files=("*.ko" "*.cmd" "*.mod.c" "*.mod" "*.o" "*.d" "*.a" "Module.symvers" "modules.order" "tags" "cscope.out")

	for dot_file in "${dot_files[@]}"
	do
		echo "==== DELETE DOT FILES: "$dot_file" ========="

		find ./ -iname "$dot_file" -print | sudo xargs rm -f

		echo "==== DELETED DOT FILES: "$dot_file" ========="
	done
}

check_git_status()
{
	echo "======= GIT LOCAL STATUS ============"

	git status
}

delete_folders
copy_folders
remove_dot_files
check_git_status
