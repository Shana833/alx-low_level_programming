#include "main.h"

/**
 * _islower - check for lowercase character
 * @c: the character
 * Return: 1 if letter is lowercase, 0 if not lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
