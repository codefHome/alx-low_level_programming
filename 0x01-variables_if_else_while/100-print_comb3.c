/*
 * File: 100-print_com3.c
 * Auth: Bedada Bekele
 */

#include<stdio.h>

/**
 * main - Prints all combinations of single number from 0-9
 *
 * Return: Always 0.
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 9; num1++)
	{
		for (num2 = num1 + 1; num2 < 10; num2++)
		{
			putchar((num1 % 10) + '0');
			putchar((num2 % 10) + '0');
			if (num1 == 8 && num2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
