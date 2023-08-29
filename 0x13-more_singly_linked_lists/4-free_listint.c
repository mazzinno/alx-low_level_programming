#include "lists.h"
/**
 * free_listint - frees the list
 * @head: pointer to the list
 */
void free_listint(listint_t *head)
{
listint_t *ptr = head;

while (ptr != NULL)
{
ptr = ptr->next;
free(head);
gead = ptr;
}
}
