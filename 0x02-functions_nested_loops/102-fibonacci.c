#include<stdio.h>

/**
 * main - prints sum of even Fibonacci sequence
 *
 * Return: Always 0.
 */
int main(void)
{
	int x = 1;
	int y = 2;
	int sum, i;

	for (i = 0; i < 48; i++)
	{
		sum = x + y;
		x = y;
		y = sum;
		printf("%d, ", sum);
	}

	printf("\n");

	return (0);
}
