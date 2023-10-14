#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - count list elements
 * @h: list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	if (h != NULL)
	{
		size_t count;
		const dlistint_t *temp;

		temp = h;
		count = 0;
		while (temp->next != NULL)
		{
			count++;
			temp = temp->next;
		}
		return (count + 1);
	}
	else
	{
		return (0);
	}
}
/**
 * get_dnodeint_at_index - get node at index
 * @head: list
 * @index: index
 * Return: pointer to new node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head != NULL)
	{
		dlistint_t *temp;
		unsigned int i;
		unsigned int len;

		temp = head;
		len = dlistint_len(head);
		if (len <= index)
		{
			return (NULL);
		}
		for (i = 0; i < index; i++)
		{
			temp = temp->next;
		}
		return (temp);
	}
	else
		return (NULL);
}
