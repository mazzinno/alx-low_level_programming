#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - searches for h an integer
 * @array: array
 * @size: the array size
 * @cmp: function used to search
 *
 * Return: index of number founded
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
				{
					return (i);
				}
			}
		}
	}
	return (-1);
}
