/*
 * File: 0-positive_or_negative.c
 * Auth: Bedada Bekele
 */

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/**
 * main - Prints a random number and states wether
 *	it is positve,negative, or zero.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	
	srand(time(0));
	n=rand() - RAND_MAX / 2;

	if (n = 0 )
		printf("%d is zero\n", n);
	else if (n > 0 )
		printf("%d is positive\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
