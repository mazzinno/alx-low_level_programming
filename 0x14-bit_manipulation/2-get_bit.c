#include "main.h"
/**
*get_bit - value of a bit at a given index
*@n: number to convert
*@index: index
*Return: byte
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > ((sizeof(n) * 8) - 1))
		return (-1);
	return ((n >> index) & 1);
}
