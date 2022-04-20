#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @x: The string to get the length of
 * Return: int
 */
int _strlen(char *x)
{
	int count;

	while (*x != '\0')
	{
		count++;
		x++;
	}

	return (count);
}

