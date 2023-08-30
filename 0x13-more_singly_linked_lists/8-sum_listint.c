#include "lists.h"
/**
 * sum_listint - sum of all the data
 * @head: pointer to the list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
listint_t *ptr;
unsigned int sum = 0;

ptr = head;
if (ptr == NULL)
	return (0);
while (ptr != NULL)
{
sum += ptr->n;
ptr = ptr->next;
}
return (sum);
}
