#include "main.h"
/**
 * _isupper - checking for upper case characters
 * @c: The character to print
 * Return: is 1 or 0
 */
int _isupper(int c)
{
	char c;

	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
