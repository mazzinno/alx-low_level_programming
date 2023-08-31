#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at idx position
 * @head: pointer to the list
 * @idx: index
 * @n: data
 * Return: adress of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *ptr = *head;
listint_t *temp = malloc(sizeof(listint_t));
if (temp == NULL)
return (NULL);
temp->n = n;
temp->next = NULL;
if (idx == 0)
{
temp->next = *head;
*head = temp;
return (temp);
}
idx--;
while (idx != 1)
{
ptr = ptr->next;
idx--;
}
temp->next = ptr->next;
ptr->next = temp;
return (temp);
}
