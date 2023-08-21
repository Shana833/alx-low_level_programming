#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
	}
	else
	{
		dlistint_t *current;
		unsigned int i;
		current = *h;
		for (i = 0; i < idx - 1 && current != NULL; i++)
		{
			current = current->next;
		}

		if (current == NULL)
		{
			free(new);
			return (NULL);
		}
		
		new->prev = current;
		new->next = current->next;
		
		if (current->next != NULL)
			current->next->prev = new;
		current->next = new;
	}

	return (new);
}
