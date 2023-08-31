#include "main.h"

/**
 * get_bit - returns the value of a bit at an index 
 * @n: number to return
 * @index: index of the bit
 *
 * Return: value of the bit, or -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits;

bits = sizeof(n) * 8;

	if (index >= bits)
		return (-1);

	bits = (n >> index) & 1;

	return (bits);
}
