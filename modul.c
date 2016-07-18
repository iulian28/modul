#include <linux/init.h>
#include <linux/module.h>
MODULE_LICENSE("Dual BSD/GPL");

static int __init hello_init(void)
{
	pr_debug("Hello World!");
	return 0;
}
static void __exit hello_exit(void)
{
	pr_debug("Bye!\n");
}
module_init(hello_init);
module_exit(hello_exit);

