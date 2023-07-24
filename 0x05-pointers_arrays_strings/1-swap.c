#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: pointer one
 * @b: pointer second
 * return: always 0.
 */

void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
