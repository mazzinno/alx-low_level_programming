#include <string.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * @head: pointer to start of the linked list
 * @str: string
 * Return: address of new element, or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t size = 0;
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);
	ptr->next = *head;
	ptr->str = strdup(str);
	if (ptr->str)
		while (ptr->str[size])
			++size;
	ptr->len = size;
	*head = ptr;
	return (ptr);
}
