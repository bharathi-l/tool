#!/bin/bash

apis=("tasklet_disable"
"tasklet_enable"
"tasklet_kill"
"tasklet_schedule"
"tasklet_setup"
"alloc_ordered_workqueue"
"alloc_workqueue"
"wiphy_delayed_work_cancel"
"wiphy_delayed_work_flush"
"wiphy_delayed_work_init"
"wiphy_delayed_work_queue"
"wiphy_work_cancel"
"wiphy_work_flush"
"wiphy_work_init"
"wiphy_work_queue"
"wiphy_work_cancel"
"wiphy_work_flush"
"wiphy_work_init"
"wiphy_work_queue"
"schedule_work"
"schedule_delayed_work"
"queue_work"
"queue_delayed_work"
"destroy_workqueue"
"mod_delayed_work"
"cancel_delayed_work"
"cancel_delayed_work_sync"
"cancel_work_sync"
"flush_delayed_work"
"flush_work"
"flush_workqueue"
"add_timer"
"del_timer"
"del_timer_sync"
"timer_setup"
"timer_shutdown_sync"
"mod_timer")

for api in "${apis[@]}";
do
	x="$api"_"dbg"
	echo "Replacing $api with $x ...."

	find ./ -iname "*.c" -print | xargs sed -E -i "s/\b$api\b/$x/g"
done

