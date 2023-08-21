#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (i);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}