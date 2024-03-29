#include "lists.h"
/**
 * add_nodeint_end - add node at the end of a list
 * @head: pointer to the list
 * @n: data
 * Return: adress of new element of NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp = malloc(sizeof(listint_t));
listint_t *ptr;
if (temp == NULL)
{
	return (NULL);
}
ptr = *head;
temp->n = n;
temp->next = NULL;
if (ptr == NULL)
{
*head = temp;
return (temp);
}
while (ptr->next != NULL)
{
	ptr = ptr->next;
}
ptr->next = temp;
return (temp);
}
