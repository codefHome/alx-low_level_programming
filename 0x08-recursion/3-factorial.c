#include "main.h"
/**
 * factorial - prints the the factorial of integer number
 * @n: number
 * Return: factorial of number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
