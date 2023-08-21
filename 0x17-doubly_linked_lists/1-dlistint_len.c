#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: head
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	i = 0;

	if (h == NULL)
		return (i);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}