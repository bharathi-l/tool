#ifndef DRV_DBG_H
#define DRV_DBG_H

#define HANDLERS_DBG_PRINT 1

extern spinlock_t my_lock;

struct iwl_rx_handlers;

extern void debug_handler_print(const struct iwl_rx_handlers* handlers, size_t num_handlers);

static inline const char* get_thread_name(void);

static inline const char* get_thread_name(void)
{
	if (current && current->comm) {
		return current->comm;
	}
	return "unknown"; 
}


#endif /* DRV_DBG_H */
