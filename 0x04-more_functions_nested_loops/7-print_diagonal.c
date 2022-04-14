#include "main.h"

/**
 * print_diagonal - prints diagonal.
 * @d: The first number
 *
 * Return: 0
 */

void print_diagonal(int d)
{
	int len, space;

	if (d > 0)
	{
		for (len = 0; len < d; len++)
		{
			for (space = 0; space < len; space++)
				_putchar(' ');
			_putchar('\\');

			if (len == n-1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
