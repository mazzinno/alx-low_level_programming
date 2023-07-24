#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: char to check.
 * Return: 0 is success
 */
int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
	{
		++n;
	}
	return (n);
}
