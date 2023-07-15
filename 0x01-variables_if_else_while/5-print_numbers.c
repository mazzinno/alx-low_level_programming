#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char nm;

	for (nm = 0; nm <= 9; nm++)
	{
		printf("%d", nm);
	}
	putchar('\n');
	return (0);
}
