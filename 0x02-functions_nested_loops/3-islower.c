#include "main.h"

/**
 * 3-islower - check if c is lower case
 * @c: int
 * Return: Always 0(Sucess)
 */

int _islower(int c)
{
	char alpha;

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
