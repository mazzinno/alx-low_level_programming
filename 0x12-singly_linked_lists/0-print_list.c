#include "lists.h"

/**
 * print_list - print the linked list
 * @h: pointer to linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *ptr;

	ptr = h;

	if (ptr == NULL)
	{
		return (0);
	}

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
		}
		ptr = ptr->next;
		count++;
	}
	return (count);
}
