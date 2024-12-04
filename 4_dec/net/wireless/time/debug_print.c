#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/ktime.h>
#include <linux/time.h>
#include "debug_print.h"

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Linux_usr");

static unsigned int index;
//struct debug dbg[FUNCTIONS_STORED];

char *timestamp_func(char *buff)
{
	u64 ts = ktime_get_ns();
	unsigned long rem_nsec = do_div(ts, 1000000000);

        //printk("[%5lu.%06lu]", (unsigned long)ts, (rem_nsec / 1000));

	sprintf(buff, "%5lu.%06lu", (unsigned long)ts, (rem_nsec / 1000));

	//printk("[%s] \n", buff);
	
	return buff;
}

void debug_func(const char* func)
{
	struct debug dbg[FUNCTIONS_STORED];
	char buff[BUFFER_SIZE]; //BUFFER_SIZE = 100
	unsigned int count;
	
	printk("*** CG_DEBUG [%d] ***\n", index);
        dbg[index].timestamp = timestamp_func(buff);
        dbg[index].name = func;
	
	printk("*** CG_DEBUG [%s] [%s] [%d] ***\n", dbg[index].timestamp, dbg[index].name, index);
        index = (index + 1) % FUNCTIONS_STORED; //FUNCTIONS_STORED = 10

        if ((index % FUNCTIONS_PRINT) == 0) //FUNCTIONS_PRINT = 7
        {
                for (count = 0; count < FUNCTIONS_STORED; count++)
                {
                        if (dbg[count].name != NULL)
                        {
                                printk("[%s] [%s] [%d] \n", dbg[count].timestamp, dbg[count].name, count);
                        }
                }
#if 0
		printk("[%s] [%s] \n", dbg[0].timestamp, dbg[0].name);
		printk("[%s] [%s] \n", dbg[1].timestamp, dbg[1].name);
		printk("[%s] [%s] \n", dbg[2].timestamp, dbg[2].name);
		printk("[%s] [%s] \n", dbg[3].timestamp, dbg[3].name);
		printk("[%s] [%s] \n", dbg[4].timestamp, dbg[4].name);
		printk("[%s] [%s] \n", dbg[5].timestamp, dbg[5].name);
		printk("[%s] [%s] \n", dbg[6].timestamp, dbg[6].name);
#endif
	}
}
