#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *curr, *next;

	if (head == NULL)
		return;

	curr = *head;
	while (curr != NULL)
	{
		next = curr;
		curr = curr->next;
		free(next);
	}

	*head = NULL;
}

