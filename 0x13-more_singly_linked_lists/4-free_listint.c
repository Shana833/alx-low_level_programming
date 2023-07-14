#include "lists.h"

/**
 * free_listint - frees a list_t list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *curr;

	while (head)
	{
		curr = head->next;
		free(head);
		head = curr;
	}
}
