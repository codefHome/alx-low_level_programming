#include "main.h"

/**
 * _strcat - concat 2 strings
 * @dest: char
 * @src: char
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int length = 0;

	while (*dest != '\0')
	{
		dest++;
		length++;
	}
	while (*src)
	{
		*dest++;
		dest++;
		src++;
		length++;
	}
	*(dest + 1) = '\0';
	dest = dest - length;
	return (dest);
}
