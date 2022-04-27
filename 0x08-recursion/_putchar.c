#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints character to std
 * @c: character
 * Return: character on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
