#include "lists.h"
/**
 * add_nodeint - add node at the beginning of a list
 * @head: pointer to the list
 * @n: data
 * Return: adress of new element of NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *ptr = malloc(sizeof(listint_t));

if (ptr == NULL)
{
	return (NULL);
}
ptr->n = n;
ptr->next = NULL;
ptr->next = *head;
*head = ptr;
return (ptr);
}
