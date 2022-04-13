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
	printf("%d,%d,",x,y);

	for (i = 0; ; i++)
	{
		sum = x + y;
		if (sum % 2 == 0)
		{
			printf("%d,",sum);
		}
		x = y;
		y = sum;
		if (sum > 4000000)
			break;
	}
}
