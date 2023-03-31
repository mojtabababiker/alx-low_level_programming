# include <stdio.h>
void b4(void)__attribute__ ((constructor));
/**
 * b4 - is a function that excute befor the main func
 */
void b4(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
