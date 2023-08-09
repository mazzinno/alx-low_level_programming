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
	char *p;
	int lenghOfStr;
	int i = 0;

	if (str == NULL)
		return (NULL);

	lenghOfStr = strlen(str) + 1;
	p = (char *)malloc(sizeof(char) * lenghOfStr);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < lenghOfStr; i++)
	{
		*(p + i) = str[i];
	}
	return (p);
}
