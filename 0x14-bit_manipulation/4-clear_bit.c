#include "main.h"
/**
*clear_bit - sets the value of a bit to 0 at a given index
*@n: nmbr
*@index: index
*Return: 1 if it worked, or -1 if error
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > ((sizeof(*n) * 8) - 1))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
