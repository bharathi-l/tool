#ifndef DRV_DBG_H
#define DRV_DBG_H

static inline const char* get_thread_name(void);

static inline const char* get_thread_name(void)
{
	if (current && current->comm) {
		return current->comm;
	}
	return "unknown"; 
}

#endif /* DRV_DBG_H */
