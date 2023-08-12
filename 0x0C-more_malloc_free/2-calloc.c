#include "main.h"
#include <stdlib.h>

/**
 * _calloc - calloc func using mallRc
 *@nmemb: array lenght
 *@size: size of each one
 *Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = calloc(nmemb, size);
	if (ptr == NULL)
		return (NULL);
	else
		return (ptr);
}
