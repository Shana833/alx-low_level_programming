#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: singly linked list to print
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;	/*num: number of nodes*/

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}

	return (num);
}
