#include "main.h"

/**
 * guess_square - square conditions
 * @i: integer
 * @n: integer
 * Return: square of number
 */

int guess_square(int i, int n)
{

	if (i * i == n)
		return (i);
	else if (i > n / 2)
		return (-1);
	else
		return (guess_square(i + 1, n));

}

/**
 * _sqrt_recursion - square integer
 * @n: integer
 * Return: square of number
 */

int _sqrt_recursion(int n)
{
	return (guess_square(1, n));

}
