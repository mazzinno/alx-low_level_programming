#include <stdio.h>
#include "main.h"
/**
 * _puts - prints a string
 *@str: string to print
 *return : always 0
 */
void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
