#include "main.h"

/**
 * _strcat - Concatenates the strings
 * @str1: A pointer to the string 1
 * @str2: The source string
 */
char *_strcat(char *str1,  char *str2)
{
	int str1_len = 0;
	
	while (*str1 != '\0')
	{

		str1++;
		str1_len++;
	}

	while (*str2)
	{
		*str1 = *str2;
		str1++;
		str2++;
		str1_len++;
	}
	*(str1 + 1) = '\0';
	str1 = str1 - str1_len;
	return (str1);
}
