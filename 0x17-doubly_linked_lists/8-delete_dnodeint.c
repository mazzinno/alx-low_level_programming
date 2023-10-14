#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a node at index
 * @head: list
 * @index: index
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *aux = *head;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		if (aux->next)
			aux->next->prev = NULL;
		*head = aux->next;
		free(aux);
		return (1);
	}
	while (aux != NULL)
	{
		if (count == index)
		{
			aux->prev->next = aux->next;
			if (aux->next != NULL)
				aux->next->prev = aux->prev;
			free(aux);
			return (1);
		}
		aux = aux->next;
		count++;
	}
	return (-1);
}
