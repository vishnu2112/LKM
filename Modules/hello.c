#include <linux/module.h>    
#include <linux/kernel.h>    
#include <linux/init.h>      
static int __init load_in(void)
{
    printk(KERN_INFO "I am loaded\n");
    return 0;    
}

static void __exit load_out(void)
{
    printk(KERN_INFO "Bye, I am unloaded\n");
}
module_init(load_in);
module_exit(load_out);


