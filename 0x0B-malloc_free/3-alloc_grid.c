#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **i;
	int j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	i = malloc(sizeof(int *) * height);

	if (i == NULL)
		return (NULL);

	for (j = 0; j < height; j++)
	{
		i[j] = malloc(sizeof(int) * width);

		if (i[j] == NULL)
		{
			for (; j >= 0; j--)
				free(i[j]);

			free(i);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			i[j][k] = 0;
	}

	return (i);
}
