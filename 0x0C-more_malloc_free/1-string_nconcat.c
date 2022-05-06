#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate two string
 * @s1: string 
 * @s2: string
 * @n: int
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstr;
	int i, j, ii, jj, index;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		ii++;
	for (j = 0; s2[j]; j++)
		jj++;

	newstr = malloc((sizeof(char) * jj) + (sizeof(char) * ii));
	if (newstr == NULL)
		return (NULL);
	for (i = 0; i < ii ; i++)
	{
		newstr[index++] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		newstr[index++] = s2[j];
	}
	newstr[index++] = '\0';
return (newstr);
}

