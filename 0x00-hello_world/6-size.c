#include <stdio.h>
/**
 * main - write a C pprogram that prints size of data types
 *
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of a char: %lu byte(S)\n", (unsigned long)sizeof(a));
	printf("size of a int: %lu byte(S)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %lu byte(S)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %lu byte(S)\n", (unsigned long)sizeof(d));
	printf("size of a floa: %lu byte(S)\n", (unsigned long)sizeof(e));
	return (0);
}
