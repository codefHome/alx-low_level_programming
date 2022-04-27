#include "main.h"

/**
 * _pow_recursion - print power of the integer number
 * @x: base number
 * @y: power number
 * Return: power of the number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
