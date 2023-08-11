#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory memory using malloc
 * @b: space allocated
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
