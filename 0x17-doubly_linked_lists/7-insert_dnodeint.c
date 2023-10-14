#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: list
 * @idx:  index
 * @n: data
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *aux = *h;
	unsigned int count = 0;

	if (h == NULL || (idx != 0 && *h == NULL))
		return (NULL);
	if (idx == 0)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->prev = NULL;
		if (*h == NULL)
			new->next = NULL;
		else
		{
			new->next = *h;
			(*h)->prev = new;
		}
		*h = new;
		return (new);
	}
	while (aux->next && count != (idx - 1))
	{
		aux = aux->next;
		count++;
	}
	if (idx - 1 != count)
		return (NULL);
	new = malloc(sizeof(dlistint_t));

