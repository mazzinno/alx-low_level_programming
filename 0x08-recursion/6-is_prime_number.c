#include "main.h"

/**
 * check - checks the input from is_prime_number
 * @n: iterator
 * @b: base number to check
 * Return: 1 if n is a prime, else return 0 otherwise.
 */
int check(int n, int b)
{
	if (b % n == 0 || b < 2)
		return (0);
	else if (n == b - 1)
		return (1);
	else if (b > n)
		return (check(n + 1, b));
	return (1);
}
/**
 * is_prime_number - checks if the number is a prime number
 * @n: the number to check
 * Return: 1 if n is a prime, else return 0 otherwise.
 */
int is_prime_number(int n)
{
	return (check(2, n));
}
