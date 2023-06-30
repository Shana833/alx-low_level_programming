#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by ptrb
 * @ptrb: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to ptrb
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		ptrb[i] = src[i];
	}
	ptrb[i] = '\0';

	return (ptrb);
}

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

