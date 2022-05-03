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
	int i, j, slen, slen1;

	for (i = 0; s1[i]; i++)
		slen++;
	for (j = 0; s1[j]; j++)
		slen1++;
	str = malloc(sizeof(char) * (slen + slen1 + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		str[i] = s1[i];
	for (j = slen; s2[j]; j++)
	{
		int z = 0;
		str[j]= s2[z];
		z++;
	}
	return (str);
}

