#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: the first n bytes of char s2
 * Return: pointer to the allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int s1l = 0;
	unsigned int s2l = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1l++;
	for (i = 0; s2[i] != '\0'; i++)
		s2l++;

	ptr = malloc(sizeof(char) * (s1l + n));
	if (ptr == NULL)
		return (NULL);
	if (n >= s2l)
	{
		for (i = 0; s1[i] != '\0'; i++)
			ptr[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			ptr[s1l + i] = s2[i];
		ptr[s1l + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			ptr[i] = s1[i];
		for (i = 0; i < n; i++)
			ptr[s1l + i] = s2[i];
		ptr[s1l + i] = '\0';
	}
}
