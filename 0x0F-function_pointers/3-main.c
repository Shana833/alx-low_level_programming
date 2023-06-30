#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, j;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	i = atoi(argv[1]);
	op = get_op_func(argv[2]);
	j = atoi(argv[3]);

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", op(i, j));
	return (0);
}
