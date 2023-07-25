#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 * @s: string printed
 * Return: void
 */
void print_rev(char *s)
{
	int leng = 0;
	int rev;

	while (*s != '\0')
	{
		leng++;
		s++;
	}
	s--;
	for (rev = leng; rev > 0; rev--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
