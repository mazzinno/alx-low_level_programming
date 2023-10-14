#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: list
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		while (head->next != NULL)
		{
			head = head->next;
			free(head->prev);
		}
		free(head);
	}
}
