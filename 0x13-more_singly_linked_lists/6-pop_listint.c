#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: pointer to the list
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int s;

	if (*head == NULL)
		return (0);
	s = (*head)->n;
	ptr = *head;
	*head = (*head)->next;
	free(ptr);
	return (s);
}
