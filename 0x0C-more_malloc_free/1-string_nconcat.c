#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings yea
 * @s1: first string
 * @s2: second string
 * @n: the first n bytes of s2
 * Return: pointer to the allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int i = 0, k = 0, len = 0, size;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

while (len < strlen(s1))
len++;
size = (len + n) * sizeof(*p);
p = malloc(size + 1);
if (p == NULL)
return (NULL);

while (i < size && i < strlen(s1))
{
p[i] = s1[i];
i++;
}

while (i < size && k < strlen(s2))
{
p[i] = s2[k];
i++;
k++;
}
p[i] = '\0';
return (p);
}
