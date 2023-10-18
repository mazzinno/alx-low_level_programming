#include "main.h"
/**
 * _isalpha - to check for alphabetic character.
 * @c: The character to print
 *
 * Return: is 0 or 1
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
