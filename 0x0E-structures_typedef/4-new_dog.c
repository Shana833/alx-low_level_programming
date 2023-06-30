#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success),
 * NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int len1, len2;

	if (name == NULL || owner == NULL)
	return (NULL);

	newdog = malloc(sizeof(newdog));
	if (newdog == NULL)
	{
		return (NULL);
	}

	len1 = strlen(name);
	len2 = strlen(owner);

	newdog->name = malloc(sizeof(char) * (len1 + 1));
	newdog->owner = malloc(sizeof(char) * (len2 + 1));
	if (newdog->name == NULL || newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}

	strcpy(newdog->name, name);
	newdog->name[len1] = '\0';

	strcpy(newdog->owner, owner);
	newdog->owner[len2] = '\0';

	newdog->age = age;

	return (newdog);
}

