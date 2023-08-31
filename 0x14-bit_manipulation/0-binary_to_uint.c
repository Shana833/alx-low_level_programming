#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to string containing binary number
 *
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int value = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		value = 2 * value + (b[i] - '0');
	}

	return (value);
}
