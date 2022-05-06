#include  "main.h"
#include <stdlib.h>

/**
 * malloc_checked - return pointer that allocated to new memory
 * @b: int
 * Return: poiter on sucess or 98 on malloc fail
 */

void *malloc_checked(unsigned int b)
{
	(int*)b = malloc(sizeof(b));
	if (b == NULL)
		return (NULL);
	return (b);
}
