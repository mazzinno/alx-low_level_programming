#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - print list elements
 * @h: list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
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
			printf("%d\n", temp->n);
			temp = temp->next;
		}
		printf("%d\n", temp->n);
		return (count + 1);
	}
	else
	{
		return (0);
	}
}
