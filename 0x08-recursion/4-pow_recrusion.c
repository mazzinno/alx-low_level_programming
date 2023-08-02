#include "main.h"

/**
 * _pow_recursion - factorial of a given number
 * @x: arg 1
 * @y: arg 2
 * Return: resault
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
