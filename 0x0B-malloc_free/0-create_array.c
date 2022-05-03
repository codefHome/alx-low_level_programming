#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of char and initialize to char
 * @c: char
 * @size: size of array
 * Return: Null if size is zero or pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	if (size == 0)
		return (NULL);
	if ( arr == NULL)
		return (NULL);
	return (arr);
}

