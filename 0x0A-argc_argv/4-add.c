#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add numbes to each other
 * @argc: number of parameters
 * @argv: names of parameters
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (!isdigit(argv[1][2]))
	{
		printf("%s\n", "Error");
		return (1);
	}
	else if (argc < 2)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	
	return (0);
}
