#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns string copy to string
 * @str: string
 * Return: string on success and null if fail
 *
 */

char *_strdup(char *str)
{
	char *str1;
	int size = 0;
	int i;

	for (i = 0; str[i]; i++)
		size++;
	if (str == NULL)
		return (NULL);
	str1 = malloc(sizeof(char) * (size + 1 ));
	if (str1 == NULL)
		return (NULL);
	for (i = 0; i < str[i]; i++)
		str1[i] = str[i];
	str1[size] = '\0';
	return (str1);
}
