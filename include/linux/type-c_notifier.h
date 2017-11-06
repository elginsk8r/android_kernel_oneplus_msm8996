#ifndef _LINUX_TYPEC_NOTIFIER_H
#define _LINUX_TYPEC_NOTIFIER_H

#include <linux/notifier.h>
#include <linux/export.h>


extern int bc_register_client(struct notifier_block *nb);

extern int bc_unregister_client(struct notifier_block *nb);

extern int bc_notifier_call_chain(unsigned long val);

#endif
