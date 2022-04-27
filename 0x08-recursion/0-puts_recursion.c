#include "main.h"

/**
 * 0-puts_recursion - prints strings to the std
 * @s: string
 * Return: string on Success
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_putchar(*s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
