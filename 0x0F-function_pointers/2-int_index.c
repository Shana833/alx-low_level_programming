#include "function_pointers.h"
/**
 * int_index - search for integer
 * @array: array
 * @size: number of elements in array
 * @cmp: pointer to function to compare value
 * Return: index of first element
 * for which the cmp function does not return 0
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
