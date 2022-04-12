#include "main.h"

/**
 * _isalpha - check if character is alphabet
 * @c: int
 * Return: Always 0(Sucess)
 */

int _islower(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
