#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @x: The string to get the length of
 * Return: int
 */
int _strlen(char *x)
{
	size_t length = 0;

	while (*x++)
	{
		length++;
	}

	return (length);
}

