#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the list_t list
 * @str: new string to add
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;
	char *str_copy = strdup(str);

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	if (str_copy == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = strdup(str);
	new->len = len;
	new->str = str_copy;
	new->next = *head;
	*head = new;

	return (*head);
}
