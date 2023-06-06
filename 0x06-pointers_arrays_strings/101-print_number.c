#include "main.h"
/**
 * print_number - prints an integer (numbers chars)
 *@n: integer params
 * Return: 0
 */
void print_number(int n)
{
	unsigned int n;

	n = n;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}

	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
