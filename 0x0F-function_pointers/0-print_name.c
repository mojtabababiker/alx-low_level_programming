#include "function_pointers.h"

/**
 * print_name - print what ever is pointer nmae point to
 *              using callback function
 * @name: pointer to char array to be print
 * @f: is the callback function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name);
}
