#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/delay.h>
#include "debug_print.h"

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Linux_usr");

void add(void)
{
	msleep(1000);
        debug_func(__func__);
}

void sub(void)
{
	msleep(1000);
        debug_func(__func__);
}

void mul(void)
{
	msleep(1000);
        debug_func(__func__);
}

void div(void)
{
	msleep(1000);
        debug_func(__func__);
}

void mod(void)
{
	msleep(1000);
        debug_func(__func__);
}

void abc(void)
{
	msleep(1000);
        debug_func(__func__);
}

static int __init hello_start(void)
{
	pr_info("Hello world \n");

	debug_func(__func__);
        add();
        sub();
        mul();
        div();
        mod();
        abc();
	
	return 0;
}

static void __exit hello_exit(void)
{
	pr_info("Good bye world \n");
}
module_init(hello_start);
module_exit(hello_exit);

