#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two string
 * @s1: first string
 * @s2: second string
 * Return: content of new allocate memory
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, slen, slen1, index;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		slen++;
	for (j = 0; s1[j]; j++)
		slen1++;
	str = malloc(sizeof(char) * (slen + slen1 + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		str[index++] = s1[i];
	for (j = 0; s2[j]; j++)
	{
		str[index++]= s2[j];
	}
	str[index] = '\0';
	return (str);
}

