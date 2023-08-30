#include "lists.h"
/**
 * get_nodeint_at_index - get index of n in lis t
 * @head: the pointer to the list
 * @index: the index needed
 * Return: pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	ptr = head;
	for (i = 0; i < index; i++)
	{
	if (ptr == NULL)
		return (NULL);
	ptr = ptr->next;
	}
	return (ptr);
}
