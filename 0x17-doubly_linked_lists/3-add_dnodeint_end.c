#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end
 * @head: list
 * @n: data
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	if (*head != NULL)
	{
		dlistint_t *temp;
		dlistint_t *new;

		new = malloc(sizeof(dlistint_t));
		if (new != NULL)
		{
			temp = *head;
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = new;
			new->prev = temp;
			new->n = n;
			new->next = NULL;
			return (new);
		}
		else
			return (NULL);
	}
	else
	{
		*head = malloc(sizeof(dlistint_t));
		if (*head != NULL)
		{
			(*head)->n = n;
			(*head)->prev = NULL;
			(*head)->next = NULL;
			return (*head);
		}
		return (NULL);
	}
}
