#include <stdio.h>
/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 * no char variables
 * only use putchar (twice)
 * Return: Always 0.
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		putchar((a % 10) + '0');

	putchar('\n');

	return (0);
}
