#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, ls1 = 0, ls2 = 0;

	while (s1 && s1[ls1])
		ls1++;
	while (s2 && s2[ls2])
		ls2++;

	if (n < ls2)
		s = malloc(sizeof(char) * (ls1 + n + 1));
	else
		s = malloc(sizeof(char) * (ls1 + ls2 + 1));

	if (!s)
		return (NULL);

	while (i < ls1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < ls2 && i < (ls1 + n))
		s[i++] = s2[j++];

	while (n >= ls2 && i < (ls1 + ls2))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
