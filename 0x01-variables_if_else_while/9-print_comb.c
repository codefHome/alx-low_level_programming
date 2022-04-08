/*
 * File: 9-print_comb.c
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
	int num;
	int num1;

	for(num=0; num < 10; num ++)
	{
		for(num1=0; num1 < 10;num1++)
		{
			putchar((num % 10) + '0');
			putchar(',');
			putchar((num1 % 10) + '0');
			putchar(' ');
		}
	}
	

	return (0);
}
