#include<stdio.h>

/**
 * main - prints sum of even Fibonacci sequence
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int x = 1;
	unsigned long int y = 2;
	unsigned long int sum, i;

	printf("%ld, %ld", x, y);
	for (i = 0; i < 48; i++)
	{
		sum = x + y;
		x = y;
		y = sum;
		printf(", %ld", sum);
	}

	printf("\n");

	return (0);
}
