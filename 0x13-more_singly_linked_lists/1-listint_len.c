#include "lists.h"

/**
 * listint_len - returns the number of elements in a listint_t lists
 * @h: linked list (listint_t) to print
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}

	return (num);
}
