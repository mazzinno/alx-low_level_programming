#include "main.h"

/**
 * check - check for natural square root
 * @n: arg 1
 * @b: arg 2
 * Return: resault
 */
int check(int n, int b)
{
	if (n * n == b)
		return (n);
	if (n * n > b)
		return (-1);
	return (check(n + 1, b));
}
/**
 * _sqrt_recursion - resault
 * @n: arg 1
 * Return: resault
 */
int _sqrt_recursion(int n)
{
	return (check(1, n));
}
