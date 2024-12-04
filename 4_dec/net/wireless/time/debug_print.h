/* Linux Kernel debug_print module header file */

#ifndef LINUX_DEBUG_PRINT_H
#define LINUX_DEBUG_PRINT_H

#define BUFFER_SIZE		100 // To store the timestamp value as a string
#define FUNCTIONS_STORED 	10 // Total number of functions to be stored in a buffer
#define FUNCTIONS_PRINT 	7   // Total number of functions to be printed on a console

/*# define do_div(n, base) ({                                             \
        unsigned int __base = (base);                                   \
        unsigned int __rem;                                             \
        __rem = ((unsigned long long)(n)) % __base;                     \
        (n) = ((unsigned long long)(n)) / __base;                       \
        __rem;                                                          \
})*/

struct debug {
        //long int timestamp; 	//timestamp of a function executed
        char *timestamp;
	const char* name; 	//name of the function
};

//long int timestamp(void);
char *timestamp_func(char *buff);
void debug_func(const char* func);

void add(void);
void sub(void);
void mul(void);
void div(void);
void mod(void);
void abc(void);

#endif /* LINUX_DEBUG_PRINT_H */
