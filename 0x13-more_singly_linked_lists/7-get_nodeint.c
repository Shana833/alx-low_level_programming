#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: first node in the linked list
 * @index: index of the node
 *
 * Return: pointer to the nth node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr = head;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (curr == NULL)
		return (NULL);

		curr = curr->next;
	}

	return (curr);
}
