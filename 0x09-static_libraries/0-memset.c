#include "main.h"
/**
 *_memset - function that fills memory with a constant byte.
 *@n: number of bytes to change
 *@s: pointer
 *@b: data to change
 *Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
