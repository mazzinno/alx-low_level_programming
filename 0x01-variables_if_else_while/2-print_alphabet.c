#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, followed by a new line.
 *description - writing char from a to z
 * Return: Always 0 (Success)
 */
int main(void)
{
	char let;

	for (let = 'a'; let <= 'z'; ++let)
	{
		putchar(let);
	}
	putchar('\n');

	return (0);
}
