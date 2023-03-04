
/**
 * Programmer: k213118 - Ismail Qayyum
 * Desc: 
 * Date: 4/03/2023
 * Other Related Files: 
 * Assignment/Project : Assignment one (Kernal Setup)
 **/
#include <linux/kernel.h>
asmlinkage long sys_hello(void)
{
printk("Hello world\n");
return 0;
}
