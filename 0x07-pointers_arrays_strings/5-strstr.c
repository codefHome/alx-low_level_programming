#include "main.h"
#include <stdlib.h>

/**
 * _strstr - find the first occurence
 * @haystack: string
 * @needle: string
 * Return: the pointer to the first occurence
 */

#include <stdio.h>

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *src = haystack;
		char *sub = needle;
		
		while (*haystack && *sub && *haystack == *sub)
		{
			haystack++;
			sub++;
		}
		if (!*sub)
			return (src);
		haystack = src + 1;
	}
	return (0);
}
