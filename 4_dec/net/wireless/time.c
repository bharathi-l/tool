#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/sched.h>  // for current->comm
#include <linux/time.h>   // for ktime_get_real_ts64()

struct __kernel_timespec __user *uts;

static int __init my_module_init(void)
{
#if 0
    // Get the current time using ktime_get_real_ts64
    struct timespec64 ts; 
    get_timespec64(&ts, uts);  // Get current time (seconds and nanoseconds)

    // Extract hours, minutes, seconds, and milliseconds from the timestamp
    uint8_t seconds = ts.tv_sec;
    uint8_t minutes = ((uint8_t) seconds) / 60;
    uint8_t hours = ((uint8_t) minutes) / 60;
    unsigned long milliseconds = (seconds * 1000); // Convert nanoseconds to milliseconds
#endif

#if 0
        // Extract hours, minutes, seconds, and milliseconds from the timestamp
    uint8_t seconds = ts.tv_sec;
    seconds %= 60; 
    uint8_t minutes = ((uint8_t) seconds) / 60; 
    uint8_t hours = ((uint8_t) seconds) / 3600;
    unsigned long milliseconds = (seconds * 1000); // Convert nanoseconds to milliseconds
                                                   //
    // Get the module name
    const char *module_name = THIS_MODULE->name;

    // Get the thread name
    char *thread_name = current->comm;
#endif
#if 0
    // Print the required information
    pr_info("Timestamp: [%02u:%02u:%02u:%05lu], Module: [%s], Thread Name: [%s], Function: [%s], Line: [%d], Message: [nl80211_send_rx_auth : NL80211_CMD_AUTHENTICATE]\n",
            hours, minutes, seconds, milliseconds,
            module_name, thread_name, __func__, __LINE__);
#endif
    return 0;
}

static void __exit my_module_exit(void)
{
    pr_info("Exiting module\n");
}

module_init(my_module_init);
module_exit(my_module_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Bharathi");
MODULE_DESCRIPTION("Kernel module with timestamp, module name, and thread name in log");

