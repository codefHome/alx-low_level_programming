#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints an inputted number of elements
 *		of an array of integers.
 * @a: The array of integers.
 * @n: The number of elements to be printed.
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x != 0)
			printf(", %d", *(a + x));
		else
			printf("%d", *(a + x));


	}

	printf("\n");
}
