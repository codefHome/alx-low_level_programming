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
	int i;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * max);
	if (arr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		arr[i] = i;
	}
	return (arr);
}
