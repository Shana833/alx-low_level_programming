#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *curr;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		curr = (*head)->next;
*head = curr;
		free(*head);
	}

	*head = NULL;
}
