#include "main.h"

/**
 * _strcat - Concatenates the strings
 * @str1: A pointer to the string 1
 * @str2: The source string
 */
char *_strcat(char *str1, const char *str2)
{
	int index = 0, str1_len = 0;
	
	while (str1[index++])
		str1_len++;

	for (index = 0; str2[index]; index++)
		str1[str1_len++] = str2[index];

	return (str1);
}
