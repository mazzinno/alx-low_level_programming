#include "lists.h"

/**
 * list_len - number of elements in a linked list
 * @h: pointer to linked list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
