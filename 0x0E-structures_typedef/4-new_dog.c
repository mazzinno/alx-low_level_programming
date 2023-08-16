#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - length of the string
 * @s: strings
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	for (; *s != '\0'; s++)
	{
		len++;
	}

	return (len);
}

/**
 * _strcopy - Copies a string pointed to by src
 * @d: The buffer storing the string copy
 * @src: The src string.
 * Return: The pointer to d
 */
char *_strcopy(char *d, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		d[i] = src[i];

	d[i] = '\0';

	return (d);
}

/**
 * new_dog - Creates a new dog
 * @name: name of the dog
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Return: new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	newDog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	newDog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	newDog->name = _strcopy(newDog->name, name);
	newDog->age = age;
	newDog->owner = _strcopy(newDog->owner, owner);

	return (newDog);
}
