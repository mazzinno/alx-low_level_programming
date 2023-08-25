#include "lists.h"
/**
 *free_list - frees the memory of all nodes
 *@head: head of the list
 */
void free_list(list_t *head)
{
	list_t *next;

	while (head)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}
