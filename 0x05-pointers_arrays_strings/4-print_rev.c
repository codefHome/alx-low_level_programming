#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int len = 0, index;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;

	for (index = 0; index < len; index++, s--)
		_putchar(*s);

	_putchar('\n');
}
