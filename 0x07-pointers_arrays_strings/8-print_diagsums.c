#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, ans;

	sum1 = 0;
	sum2 = 0;

	for (ans = 0; ans < size; ans++)
	{
		sum1 = sum1 + a[ans * size + ans];
	}

	for (ans = size - 1; ans >= 0; ans--)
	{
		sum2 += a[ans * size + (size - ans - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
