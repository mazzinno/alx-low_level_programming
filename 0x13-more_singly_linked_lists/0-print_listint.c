#include "lists.h"
#include <stdio.h>
/**
 * print_listint - print linked list
 * @h: head of linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;
	const listint_t *ptr = h;

	if (ptr == NULL)
	{
		return (0);
	}
	while (ptr != NULL)
	{
	printf("%d\n", ptr->n);
	ptr = ptr->next;
	i++;
	}
	return (i);
}
