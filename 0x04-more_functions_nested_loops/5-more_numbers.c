#include "main.h"

/**
 * more_numbers - prints number from 0 to 14 10 times.
 *
 * Return: 0
 */

void more_numbers(void)
{
	int i;
	int j = 0;

	while (j < 10)
	{

		for (i = 0; i <= 9; i++)
		{
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}

