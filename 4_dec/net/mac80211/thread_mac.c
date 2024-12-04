// net/wireless/thread_name.c

#include <linux/sched.h>  // For current->comm
#include "thread_mac.h"

// Function to get the current thread name
const char* get_thread_name(void)
{
    if (current && current->comm) {
        return current->comm;  // Return the thread name
    }
    return "unknown";  // Return "unknown" if no thread name is found
}

