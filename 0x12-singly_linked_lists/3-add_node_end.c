#include "lists.h"
#include <string.h>
/**
 *add_node_end - add node to the end of it
 *@head: the pointer that points to a pointer
 *@str: that string
 *Return: new or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t i = 0;
	list_t *last = *head;
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);
	ptr->next = NULL;
	ptr->str = strdup(str);
	if (ptr->str)
		while (str[i])
			++i;
	ptr->len = i;
	if (last)
	{
		while (last->next)
			last = last->next;
		last->next = ptr;
	}
	else
		*head = ptr;
	return (ptr);
}
