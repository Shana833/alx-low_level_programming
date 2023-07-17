#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return:  the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	unsigned int i;
	listint_t *curr;

	new  = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	curr = *head;
	for (i = 0; curr && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = curr->next;
			curr->next = new;
			return (new);
		}
		else
			curr = curr->next;
		return (NULL);
	}
	return (new);
}
