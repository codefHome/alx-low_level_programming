#include "main.h"

/**
 * print_line - prints line.
 * @d: The first number
 *
 * Return: 0
 */

void print_line(int d)
{
	int x;

	if (d > 0)
	{
		for (x = 0; x < d; x++)
			_putchar('_');
	}

	_putchar('\n');
}
