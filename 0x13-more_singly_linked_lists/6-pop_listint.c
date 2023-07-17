#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the list
 *
 * Return: the data inside the head node,
 * or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *curr;
	int i;

	if (*head == NULL)
		return (0);

	curr = *head;
	*head = curr->next;
	i = curr->n;
	free(curr);

	return (i);
}
