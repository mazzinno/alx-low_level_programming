#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: number of times / should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int str, space;

	if (n <= 0)
		_putchar('\n');
	else
		for (space = 0; space < n; space++)
		{
			for (str = 0; str < n; str++)
			{
				_putchar(' ');
				_putchar('\\');
			}
		_putchar('\n');
		}
}
