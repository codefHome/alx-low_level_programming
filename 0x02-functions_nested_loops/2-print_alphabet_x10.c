#include "main.h"

/**
 * print_alphabet_x10 - prints lower case alphabets 10 times
 * Return: Always 0(Sucess)
 */

void print_alphabet_x10(void)
{
	char alpha;
	int x;

	for (x = 1; x <= 10; x++)
	{

		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}

		_putchar('\n');
	}

return;
}
