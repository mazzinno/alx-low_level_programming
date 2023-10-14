#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning
 * @head: list
 * @n: data
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	if (*head != NULL)
	{
		dlistint_t *temp;

		temp = malloc(sizeof(dlistint_t));
		if (temp != NULL)
		{
			temp->prev = NULL;
			temp->n = n;
			temp->next = *head;
			temp->next->prev = temp;
			*head = temp;
		}
	}
	else
	{
		*head = malloc(sizeof(dlistint_t));
		if (*head != NULL)
		{
			(*head)->n = n;
			(*head)->prev = NULL;
			(*head)->next = NULL;
		}
	}
	return (*head);
}
