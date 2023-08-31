#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int curr;
	unsigned long int diff = n ^ m;
	unsigned int bits;

	bits = sizeof(unsigned long int) * 8;

	for (i = bits; i >= 0; i--)
	{
		curr = diff >> i;
		if (curr & 1)
			count++;
	}

	return (count);
}
