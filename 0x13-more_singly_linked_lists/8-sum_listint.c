#include "lists.h"

/**
 * sum_listint - sums of all the data of linked list
 * @head: first node in the linked list
 *
 * Return: sum of data, 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *curr = head;

	sum = 0;
	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}

	return (sum);
}
