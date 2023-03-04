/**
 * Programmer: k213118 - Ismail Qayyum
 * Desc: 
 * Date: 4/03/2023
 * Other Related Files:
 * Assignment/Project : Assignment one (Kernal Setup)
 **/



#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>
int main()
{
long int i = syscall(335);
printf("System call sys_hello returned %ld\n", i);
return 0;
}
