#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/sched.h>  // for current->comm
#include <linux/time.h>   // for getnstimeofday()

//#define pr_info(fmt, ...) printk(KERN_INFO fmt, ##__VA_ARGS__)

static int __init my_module_init(void)
{
    // Get the current time
    struct timespec ts;
    ktime_get_real(&ts);  // Function to get the current time

    // Extract hours, minutes, seconds, and milliseconds from the timestamp
    unsigned long hours = ts.tv_sec / 3600;
    unsigned long minutes = (ts.tv_sec % 3600) / 60;
    unsigned long seconds = ts.tv_sec % 60;
    unsigned long milliseconds = ts.tv_nsec / 1000000; // Convert nanoseconds to milliseconds

    // Get the thread name
    char *thread_name = current->comm;

    // Print module name, timestamp (formatted), thread name, function name, and line number
    pr_info("Module Name: [%s], Timestamp: [%02lu:%02lu:%02lu.%03lu], Thread Name: [%s], Function: [%s], Line: [%d], Message: [%s]\n",
            THIS_MODULE->name, hours, minutes, seconds, milliseconds,
            thread_name, __func__, __LINE__,
            "nl80211_send_rx_auth : NL80211_CMD_AUTHENTICATE");

    return 0;
}

static void __exit my_module_exit(void)
{
    pr_info("Exiting module\n");
}

module_init(my_module_init);
module_exit(my_module_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("CFG80211");
MODULE_DESCRIPTION("Kernel module example with detailed log information");

