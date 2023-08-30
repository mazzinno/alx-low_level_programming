#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: pointer to the list
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
listint_t *ptr;
int n;

if (head == NULL)
	return (0);
n = (*head)->n;
ptr = *head;
n = ptr->n;
*head = (*head)->next;
free(ptr);
return (n);
}
