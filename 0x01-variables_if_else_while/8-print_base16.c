/*
 * File: 8-print_base16.c
 * Auth: Bedada Bekele
 */

#include<stdio.h>

/**
 * main - Prints all elements of base16 number system
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;
	char letter;

	for(num=0; num < 10; num ++)
		putchar(num % 10 + '0');
	for(letter='A'; letter <= 'E' letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
