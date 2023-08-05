#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints its name
 * @argc: size of program arguments.
 * @argv: string pointer array to the arguments.
 *
 * Return: null
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
