#include "main.h"
/**
*print_rec - prints the binary representation of d n
*@n: the number to print
*/
void print_rec(unsigned long int n)
{
	if (n == 0)
		return;
	print_rec(n >> 1);
	_putchar((n & 1) + '0');
}
/**
*print_binary - prints the binary representation of n
*@n: number to print
*/
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_rec(n);
}
