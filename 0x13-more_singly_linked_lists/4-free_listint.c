#include "lists.h"
/**
 *free_list - free memory of all nodes
 *@head: head of the list
 */
void free_listint(listint_t *head)
{
listint_t *ptr = head;
  
while(ptr != NULL)
{
ptr = ptr->next;
free(head);
head = ptr;
}
}
