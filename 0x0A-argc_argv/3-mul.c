#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - multiply two number by each other
 * @argc: number of parameters
 * @argv: names of parameters
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
	return (0);
}
