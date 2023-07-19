#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, k, l, m;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (j = 1; j <= 9; j++)
		{
			k = i * j;
			l = k / 10;
			m = k % 10;
			if (k <= 9)
			{
				_putchar(' ');
				_putchar('0' + m);
			}
			else
			{
				_putchar('0' + l);
				_putchar('0' + m);
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
