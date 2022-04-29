#include "main.h"

/**
 * _islower - check if c is lower case
 * @c: int
 * Return: Always 0(Sucess)
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
