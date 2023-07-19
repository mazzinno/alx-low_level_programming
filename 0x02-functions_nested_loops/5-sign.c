#include "main.h"
/**
 * print_sign - prints the sign of a number.
 * @n : number to compare
 *
 * Return: is 0 or 1 or -1
 *
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar("%d", n);
		return (1);
	}
	else if (n == 0)
	{
		_putchar("%d", n);
		return (0);
	}
	else
	{
		_putchar("%d", n);
		return (-1);
	}
}
