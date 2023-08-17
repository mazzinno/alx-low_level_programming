#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - print name based on a func
 * @name: the name printed
 * @f: pointer to a func
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
