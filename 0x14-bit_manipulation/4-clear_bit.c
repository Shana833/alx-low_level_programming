#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to changing number
 * @index: index of the bit 
 *
 * Return: 1 (success), -1 if error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int bits;

bits = sizeof(unsigned long int) * 8;

	if (index > bits)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
