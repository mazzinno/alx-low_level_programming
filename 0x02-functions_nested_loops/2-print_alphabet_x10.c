#include "main.h"
/**
 * print_alphabet 10 times - prints the english alphabet from a-z.
 * Return: Nothing.
 */
void print_alphabet_x10(void);
{
	char c;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
		_putchar(c);
		}
	}
	_putchar('\n');
}
