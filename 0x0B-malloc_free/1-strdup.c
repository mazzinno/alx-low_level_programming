#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - allocate new space in memory
 * and assign a string to it.
 * @str: a string
 * Return: Pointer to the string
 */
char *_strdup(char *str)
{
	int i;
	int n = 0;
	char *copy;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		n++;

	copy = malloc(sizeof(char) * n + 1);

	if (copy == NULL)
		return (NULL);
	for (i = 0 ; str[i] != '0'; i++)
		copy[i] = str[i];

	return (copy);
}

