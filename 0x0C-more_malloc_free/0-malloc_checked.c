#include  "main.h"
#include <stdlib.h>

/**
 * malloc_checked - return pointer that allocated to new memory
 * @b: int
 * Return: poiter on sucess or 98 on malloc fail
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
