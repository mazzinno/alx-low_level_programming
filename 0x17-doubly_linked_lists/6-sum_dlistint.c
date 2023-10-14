#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - sum of all the data
 * @head: list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		dlistint_t *temp;
		int sum;

		temp = head;
		sum = 0;
		while (temp != NULL)
		{
			sum = sum + temp->n;
			temp = temp->next;
		}
		return (sum);
	}
	else
		return (0);
}

