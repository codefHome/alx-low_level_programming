#include "main.h"
#include <stdlib.h>

/**
 * array_range - allocate array of integer
 * @min: int
 * @max: int
 * Return: integer from min to max including max
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, y, z;

	y = (max - min) + 1;
	z = min;
	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * y);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < y; i++)
	{
		arr[i] = z;
		z++;
	}
	return (arr);
}
