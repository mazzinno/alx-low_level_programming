#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Merge 2 strings
 * @s1: first string
 * @s2: second string
 * Return: Merged string
 */
char *str_concat(char *s1, char *s2)
{
	int s1l = 0;
	int s2l = 0;
	int i;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1l++;
	for (i = 0; s2[i] != '\0'; i++)
		s2l++;

	ptr = malloc(sizeof(char) * (s1l + s2l) + 1);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		ptr[s1l + i] = s2[i];
	return (ptr);
}

