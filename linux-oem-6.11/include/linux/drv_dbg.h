#ifndef DRV_DBG_H
#define DRV_DBG_H

#include <linux/skbuff.h>
#include <linux/module.h>
#include <linux/printk.h>
#include <linux/thread_info.h>
#include <linux/ieee80211.h> 
#include <linux/if_ether.h>


#define HANDLERS_DBG_PRINT 1
#define ETH_P_EAPOL 0x888E

struct iwl_rx_handlers;

extern void debug_handler_print(const struct iwl_rx_handlers* handlers, size_t num_handlers);

static inline const char* get_thread_name(void)
{
	if (current && current->comm) {
		return current->comm;
	}
	return "unknown";
}

static inline void get_packet_type(struct sk_buff *skb)
{
	if (!skb) {
		pr_info("Skb is null [%s] [%d]\n", __func__, __LINE__);
		return;
	}

	pr_info("[MODULE -> %s], [THREAD -> %s]  [SKB_DATA -> %40ph] [%s] [%d]\n",
			THIS_MODULE->name, get_thread_name(), skb->data, __func__, __LINE__);

	u8 *ip_data = (u8 *)skb->data;
	u8 byte0 = ip_data[0];

	u8 frame_type = (byte0 & 0x0C) >> 2;
	u8 frame_subtype = (byte0 & 0xF0);

	const char *type_str = "Unknown Packet";  
	const char *subtype_str = "Unknown Frame";  

	if (frame_type == 0) {
		type_str = "Management packet"; 
		switch (frame_subtype) {
			case IEEE80211_STYPE_PROBE_RESP:
				subtype_str = "Probe Response Frame";
				break;
			case IEEE80211_STYPE_ASSOC_REQ:
				subtype_str = "Association Request Frame";
				break;
			case IEEE80211_STYPE_ASSOC_RESP:
				subtype_str = "Association Response Frame";
				break;
			case IEEE80211_STYPE_REASSOC_REQ:
				subtype_str = "Reassociation Request Frame";
				break;
			case IEEE80211_STYPE_REASSOC_RESP:
				subtype_str = "Reassociation Response Frame";
				break;
			case IEEE80211_STYPE_BEACON:
				subtype_str = "Beacon Frame";
				break;
			case IEEE80211_STYPE_AUTH:
				subtype_str = "Authentication Frame";
				break;
			case IEEE80211_STYPE_DEAUTH:
				subtype_str = "Deauthentication Frame";
				break;
			default:
				subtype_str = "Other Management Frame";
				break;
		}
	}
	pr_info("[MODULE -> %s], [THREAD -> %s]  [SKB -> %p] [TYPE -> %s] [SUBTYPE -> %s] [%s] [%d]\n",
			THIS_MODULE->name, get_thread_name(), skb, type_str, subtype_str, __func__, __LINE__);
}

static inline void get_data_type(struct sk_buff *skb)
{
	if (!skb || skb->len < sizeof(struct ethhdr)) {
		pr_err("Invalid skb or insufficient length\n");
		return;
	}

	pr_info("[MODULE -> %s], [THREAD -> %s]  [SKB_DATA -> %40ph] [%s] [%d]\n",
			THIS_MODULE->name, get_thread_name(), skb->data, __func__, __LINE__);
	struct ethhdr *eth_hdr = (struct ethhdr *)skb->data;

	u8 *ip_data = (u8 *)skb->data;

	u8 byte0 = ip_data[0];

	u8 frame_type = (byte0 & 0xC0) >> 5;

	const char *type_str = "Unknown Packet";

	if (frame_type == 0x02) {
		type_str = "Data Packet";
		u16 eth_proto = ntohs(eth_hdr->h_proto);
		if (eth_proto == ETH_P_EAPOL) {
			pr_info("[MODULE -> %s], [THREAD -> %s]  [SKB -> %p] [TYPE -> %s] [ETHER_TYPE -> %04x] [%s] [%d]\n",
					THIS_MODULE->name, get_thread_name(), skb, type_str, eth_proto, __func__, __LINE__);
		} else {
			pr_info("[MODULE -> %s], [THREAD -> %s] [Not an EAPOL packet] [%s] [%d]\n",THIS_MODULE->name, get_thread_name(), __func__, __LINE__);
		}
	}
}
#endif /* DRV_DBG_H */

