#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - exe func on each element of an array
 * @array: the array
 * @size: size of the array
 * @action: func
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
