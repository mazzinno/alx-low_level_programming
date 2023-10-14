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
