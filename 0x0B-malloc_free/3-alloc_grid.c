#include "main.h"
#include <stdlib.h>


/**
 * alloc_grid - return pointer to new allocated 2d array
 * @width: int
 * @height: int
 * Return: malloc value
 */

int **alloc_grid(int width, int height)
{
	int **i;
	int j, k, h;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	i = malloc(sizeof(int *) * height);
	if (i == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < height; k++)
	{
		i[k] = malloc(sizeof(int) * width);
		if (i[k] == NULL)
		{
			for (j = 0; j < k; j++)
			{
				free(i[j]);
				free(i);
			}
			return (NULL);
		}
		for (h = 0; h < width; h++)
			i[k][h] = 0;
	}
	return (i);
}
