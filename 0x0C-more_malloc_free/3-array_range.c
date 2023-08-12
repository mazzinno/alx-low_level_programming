#include "main.h"
#include <stdlib.h>

/**
 * array_range - create array range
 * @min: first num
 * @max: last num
 * Return: pointer to the allocated memory
 */
int *array_range(int min, int max)
{
	int l;
	int *p;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	l = (max - min) + 1;
	p = malloc(l * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l; i++)
	{
		*(p + i) = min + i;
	}
	return (p);
}
