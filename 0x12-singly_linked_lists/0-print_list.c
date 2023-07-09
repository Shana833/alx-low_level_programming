#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list (linked list)
 * @h:pointer to list_t
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		a++;
		h = h->next;
	}
	return (a);
}
