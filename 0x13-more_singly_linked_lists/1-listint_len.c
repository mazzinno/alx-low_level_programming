#include "lists.h"
/**
 * listint_len - calculate number of nodes
 * @h: linked list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
int i = 0;
const listint_t *ptr = NULL;

ptr = h;

if (ptr == NULL)
{
	return (0);
}
while (ptr != NULL)
{
	i++;
	ptr = ptr->next;
}
return (i);
}
